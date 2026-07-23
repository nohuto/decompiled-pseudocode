/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x14021B420
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleasePushLock @ 0x14030D0AC (FsRtlReleasePushLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1404C0ECC (FsRtlAcquirePushLockExclusive.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  __int64 *p_AePushLock; // rdi
  unsigned __int8 v5; // al
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v9; // al

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  p_AePushLock = (__int64 *)&PerStreamContext->AePushLock;
  v5 = *((_BYTE *)PerStreamContext + 7) >> 4;
  if ( v5 >= 3u && *p_AePushLock )
  {
    FsRtlAcquireAutoExpandPushLockExclusive(*p_AePushLock);
  }
  else if ( v5 )
  {
    FsRtlAcquirePushLockExclusive(&PerStreamContext->PushLock);
  }
  else
  {
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  }
  p_FilterContexts = &PerStreamContext->FilterContexts;
  Flink = PerStreamContext->FilterContexts.Flink;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
  v9 = *((_BYTE *)PerStreamContext + 7) >> 4;
  if ( v9 < 3u )
  {
    if ( !v9 )
    {
      KeReleaseGuardedMutex(PerStreamContext->FastMutex);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !*p_AePushLock )
  {
LABEL_14:
    FsRtlReleasePushLock((struct _KTHREAD *)&PerStreamContext->PushLock);
    return 0;
  }
  FsRtlReleaseAutoExpandPushLockExclusive((struct _KTHREAD *)*p_AePushLock);
  return 0;
}
