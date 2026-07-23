/*
 * XREFs of HalpInitSystemHelper @ 0x140BEF9CC
 * Callers:
 *     HalInitializeProcessor @ 0x14057A980 (HalInitializeProcessor.c)
 *     HalpInitializeLateSystemActions @ 0x14057A9AC (HalpInitializeLateSystemActions.c)
 *     HalpDispatchPnp @ 0x140B1CA40 (HalpDispatchPnp.c)
 *     HalpInitSystemPhase1 @ 0x140BEFA78 (HalpInitSystemPhase1.c)
 *     HalAllProcessorsStarted @ 0x140CB3660 (HalAllProcessorsStarted.c)
 *     HalReportResourceUsage @ 0x140CB3690 (HalReportResourceUsage.c)
 *     HalpInitSystemPhase0 @ 0x140CB36FC (HalpInitSystemPhase0.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInitSystemHelper(unsigned int a1, int a2)
{
  unsigned int Number; // r15d
  __int64 result; // rax
  unsigned int i; // edi

  Number = KeGetPcr()->Prcb.Number;
  result = 0LL;
  while ( (int)a1 <= a2 )
  {
    for ( i = 0; i < 0x16; ++i )
    {
      result = guard_dispatch_icall_no_overrides(a1, Number);
      if ( (int)result < 0 )
        KeBugCheckEx(0x5Cu, 0x8200uLL, (int)result, (int)a1, (ULONG_PTR)*(&HalSubComponents + 2 * i + 1));
    }
    ++a1;
  }
  return result;
}
