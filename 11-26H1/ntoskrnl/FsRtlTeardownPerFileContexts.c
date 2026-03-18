/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x140A81F10
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExCleanupAutoExpandPushLock @ 0x1404638C0 (ExCleanupAutoExpandPushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *v4; // rbx
  __int64 QuantumTarget; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v7; // rsi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9

  v4 = (struct _KTHREAD *)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v4 )
  {
    QuantumTarget = v4->QuantumTarget;
    if ( QuantumTarget )
    {
      guard_dispatch_icall_no_overrides(QuantumTarget, v1);
      v4->QuantumTarget = 0LL;
    }
    p_Blink = &v4->Header.WaitListHead.Blink;
    if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
    {
      FsRtlAcquireAutoExpandPushLockExclusive((__int64)v4, v1, v2, v3);
      while ( 1 )
      {
        v7 = *p_Blink;
        if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink )
          break;
        Flink = v7->Flink;
        if ( (struct _LIST_ENTRY **)v7->Blink != p_Blink || Flink->Blink != v7 )
          __fastfail(3u);
        *p_Blink = Flink;
        Flink->Blink = (struct _LIST_ENTRY *)p_Blink;
        FsRtlReleaseAutoExpandPushLockExclusive(v4);
        guard_dispatch_icall_no_overrides((__int64)v7, v9);
        FsRtlAcquireAutoExpandPushLockExclusive((__int64)v4, v10, v11, v12);
      }
      FsRtlReleaseAutoExpandPushLockExclusive(v4);
    }
    ExCleanupAutoExpandPushLock((__int64)v4);
    ExFreePoolWithTag(v4, 0x63665346u);
  }
}
