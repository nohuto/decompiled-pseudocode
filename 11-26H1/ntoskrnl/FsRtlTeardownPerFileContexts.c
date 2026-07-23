/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x140A87D80
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExCleanupAutoExpandPushLock @ 0x14045C880 (ExCleanupAutoExpandPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // rdx
  struct _KTHREAD *v2; // rbx
  __int64 QuantumTarget; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rdx

  v2 = (struct _KTHREAD *)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v2 )
  {
    QuantumTarget = v2->QuantumTarget;
    if ( QuantumTarget )
    {
      guard_dispatch_icall_no_overrides(QuantumTarget, v1);
      v2->QuantumTarget = 0LL;
    }
    p_Blink = &v2->Header.WaitListHead.Blink;
    if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
    {
      FsRtlAcquireAutoExpandPushLockExclusive((__int64)v2);
      while ( 1 )
      {
        v5 = *p_Blink;
        if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink )
          break;
        Flink = v5->Flink;
        if ( (struct _LIST_ENTRY **)v5->Blink != p_Blink || Flink->Blink != v5 )
          __fastfail(3u);
        *p_Blink = Flink;
        Flink->Blink = (struct _LIST_ENTRY *)p_Blink;
        FsRtlReleaseAutoExpandPushLockExclusive(v2);
        guard_dispatch_icall_no_overrides((__int64)v5, v7);
        FsRtlAcquireAutoExpandPushLockExclusive((__int64)v2);
      }
      FsRtlReleaseAutoExpandPushLockExclusive(v2);
    }
    ExCleanupAutoExpandPushLock((__int64)v2);
    ExFreePoolWithTag(v2, 0x63665346u);
  }
}
