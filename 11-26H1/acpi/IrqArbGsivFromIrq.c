/*
 * XREFs of IrqArbGsivFromIrq @ 0x1400C4EA4
 * Callers:
 *     IrqTransGetInterruptVector @ 0x1400BC7A0 (IrqTransGetInterruptVector.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1400BE070 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1400BE2F4 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1400BE668 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTranslateResources @ 0x1400C2FC0 (IrqTranslateResources.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyInputStateToDeviceState @ 0x1400C4888 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpSetDeviceProperties @ 0x1400C4C18 (IrqArbpSetDeviceProperties.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400D2AC8 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 >= 0x10 )
    return (unsigned int)a1;
  else
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
}
