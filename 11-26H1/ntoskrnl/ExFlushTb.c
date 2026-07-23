/*
 * XREFs of ExFlushTb @ 0x140414DF8
 * Callers:
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x1405F3530 (KeFlushEntireTb.c)
 *     KeFlushSingleCurrentTb @ 0x1405F35E0 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F3764 (KeFlushSingleTb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // rcx
  _ULARGE_INTEGER v7; // rbx
  _ULARGE_INTEGER DueTime; // rcx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( a3 != 1 )
  {
    DueTime = ExSaPageGroupDescriptorArrayLock.Timer.DueTime;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides((_ULARGE_INTEGER)DueTime.QuadPart, a1);
  }
  v6 = Process[3].ActiveGroupPadding[1];
  v7 = (_ULARGE_INTEGER)Process[4].Padding[1];
  if ( v6 )
    result = (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v6, a1);
  if ( v7.QuadPart )
  {
    DueTime = v7;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(DueTime.QuadPart, a1);
  }
  return result;
}
