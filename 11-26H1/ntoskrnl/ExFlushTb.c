/*
 * XREFs of ExFlushTb @ 0x14041D5A8
 * Callers:
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x1405F0BC0 (KeFlushEntireTb.c)
 *     KeFlushSingleCurrentTb @ 0x1405F0C70 (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405F0DF4 (KeFlushSingleTb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // rcx
  _KDPC *v7; // rbx
  _KDPC *Dpc; // rcx

  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( a3 != 1 )
  {
    Dpc = ExSaPageGroupDescriptorArrayLock.Timer.Dpc;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(Dpc, a1);
  }
  v6 = Process[3].ActiveGroupPadding[1];
  v7 = (_KDPC *)Process[4].Padding[1];
  if ( v6 )
    result = (struct _KTHREAD *)guard_dispatch_icall_no_overrides(v6, a1);
  if ( v7 )
  {
    Dpc = v7;
    return (struct _KTHREAD *)guard_dispatch_icall_no_overrides(Dpc, a1);
  }
  return result;
}
