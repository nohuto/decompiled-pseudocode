/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1400D3968
 * Callers:
 *     IrqLibUpdateInterruptProperties @ 0x1400BC0D4 (IrqLibUpdateInterruptProperties.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0 (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1400BD160 (ProcessorpFindIdtEntriesApic.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400BE668 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
