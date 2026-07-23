/*
 * XREFs of HalpTimerQueryCycleCounter @ 0x14057A0D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpFindTimer @ 0x140583D54 (HalpFindTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerQueryCycleCounter(_QWORD *a1)
{
  __int64 result; // rax
  __int64 InternalData; // rax
  __int64 v4; // rdx

  result = HalpFindTimer(5, 0, 0, 0, 1);
  if ( result )
  {
    if ( a1 )
      *a1 = *(_QWORD *)(result + 192);
    InternalData = HalpTimerGetInternalData(result);
    return guard_dispatch_icall_no_overrides(InternalData, v4);
  }
  return result;
}
