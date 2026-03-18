/*
 * XREFs of IrqArbpPrepareForTestOrConflict @ 0x1400C379C
 * Callers:
 *     IrqArbRetestAllocation @ 0x1400BE290 (IrqArbRetestAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1400BE8CC (IrqArbpQueryConflictIsa.c)
 *     IrqArbTestAllocation @ 0x1400C3590 (IrqArbTestAllocation.c)
 * Callees:
 *     IrqArbpUnreferenceArbitrationList @ 0x1400C3308 (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyData @ 0x1400C3674 (IcCopyData.c)
 *     IcUpdateControllers @ 0x1400C380C (IcUpdateControllers.c)
 *     ProcessorCopyData @ 0x1400C3F28 (ProcessorCopyData.c)
 *     LinkNodeClearPossibleData @ 0x1400C42AC (LinkNodeClearPossibleData.c)
 *     ProcessorpClearData @ 0x1400C42E8 (ProcessorpClearData.c)
 *     IcClearPossibleData @ 0x1400C4400 (IcClearPossibleData.c)
 *     LinkNodeCopyData @ 0x1400D362C (LinkNodeCopyData.c)
 */

__int64 __fastcall IrqArbpPrepareForTestOrConflict(__int64 a1, _QWORD **a2)
{
  __int64 result; // rax

  ProcessorpClearData(1LL);
  IcClearPossibleData();
  IcUpdateControllers();
  LinkNodeClearPossibleData();
  result = ProcessorCopyData(1LL);
  if ( (int)result >= 0 )
  {
    result = IcCopyData(1);
    if ( (int)result >= 0 )
    {
      result = LinkNodeCopyData(1LL);
      if ( (int)result >= 0 )
        return IrqArbpUnreferenceArbitrationList(a1, a2);
    }
  }
  return result;
}
