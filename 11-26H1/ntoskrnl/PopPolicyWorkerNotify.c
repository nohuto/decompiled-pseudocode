/*
 * XREFs of PopPolicyWorkerNotify @ 0x140AEF0F0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPolicyWorkerNotify(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // eax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = _InterlockedExchange(&PopNotifyEvents, 0);
    if ( !v2 )
      break;
    while ( v2 )
    {
      _BitScanForward(&v4, v2);
      Interval.LowPart = 0;
      v2 &= ~(1 << v4);
      if ( PopNotifyWork[2 * v4] )
      {
        guard_dispatch_icall_no_overrides(LODWORD(PopNotifyWork[2 * v4 + 1]), a2);
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
    }
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
