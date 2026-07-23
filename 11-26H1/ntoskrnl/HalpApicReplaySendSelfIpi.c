/*
 * XREFs of HalpApicReplaySendSelfIpi @ 0x1405AE620
 * Callers:
 *     HalpApicReplayLocalInterrupts @ 0x1405AE590 (HalpApicReplayLocalInterrupts.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicReplaySendSelfIpi(int a1, __int64 a2)
{
  while ( (guard_dispatch_icall_no_overrides(768LL, a2) & 0x1000) != 0 )
    ;
  return guard_dispatch_icall_no_overrides(768LL, a1 | 0x40000u);
}
