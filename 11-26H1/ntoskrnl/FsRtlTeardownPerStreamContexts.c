/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x140919AA0
 * Callers:
 *     RawCleanupVcb @ 0x140919A0C (RawCleanupVcb.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleasePushLock @ 0x14030D0AC (FsRtlReleasePushLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1404C0ECC (FsRtlAcquirePushLockExclusive.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  _FSRTL_PER_STREAM_CONTEXT *ReservedContext; // rcx
  _LIST_ENTRY *p_FilterContexts; // rdi
  unsigned __int8 v7; // al
  void *AePushLock; // rcx
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v10; // rax
  unsigned __int8 v11; // al
  void **p_AePushLock; // r14
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  struct _KTHREAD *v16; // rcx

  if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) >= 0x50 )
  {
    ReservedContext = AdvancedHeader->ReservedContext;
    if ( ReservedContext )
    {
      guard_dispatch_icall_no_overrides((__int64)ReservedContext, v1);
      AdvancedHeader->ReservedContext = 0LL;
    }
  }
  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    v7 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v7 < 3u || (AePushLock = AdvancedHeader->AePushLock) == 0LL )
    {
      if ( !v7 )
        goto LABEL_22;
      goto LABEL_19;
    }
    FsRtlAcquireAutoExpandPushLockExclusive((__int64)AePushLock);
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v10 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v10->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v10;
      v10->Blink = p_FilterContexts;
      v11 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      p_AePushLock = &AdvancedHeader->AePushLock;
      if ( v11 >= 3u && *p_AePushLock )
      {
        FsRtlReleaseAutoExpandPushLockExclusive((struct _KTHREAD *)*p_AePushLock);
      }
      else if ( v11 )
      {
        FsRtlReleasePushLock((struct _KTHREAD *)&AdvancedHeader->PushLock);
      }
      else
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
      }
      guard_dispatch_icall_no_overrides((__int64)Flink, v13);
      v14 = *((_BYTE *)AdvancedHeader + 7) >> 4;
      if ( v14 >= 3u && *p_AePushLock )
      {
        FsRtlAcquireAutoExpandPushLockExclusive((__int64)*p_AePushLock);
      }
      else if ( v14 )
      {
LABEL_19:
        FsRtlAcquirePushLockExclusive((unsigned __int64 *)&AdvancedHeader->PushLock, v1, v2, v3);
      }
      else
      {
LABEL_22:
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
    }
    v15 = *((_BYTE *)AdvancedHeader + 7) >> 4;
    if ( v15 >= 3u && (v16 = (struct _KTHREAD *)AdvancedHeader->AePushLock) != 0LL )
    {
      FsRtlReleaseAutoExpandPushLockExclusive(v16);
    }
    else if ( v15 )
    {
      FsRtlReleasePushLock((struct _KTHREAD *)&AdvancedHeader->PushLock);
    }
    else
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
  }
}
