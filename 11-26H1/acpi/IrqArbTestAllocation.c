/*
 * XREFs of IrqArbTestAllocation @ 0x1400C3590
 * Callers:
 *     <none>
 * Callees:
 *     IrqArbpPrepareForTestOrConflict @ 0x1400C379C (IrqArbpPrepareForTestOrConflict.c)
 *     ArbTestAllocation @ 0x1400D0DC0 (ArbTestAllocation.c)
 */

__int64 __fastcall IrqArbTestAllocation(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = IrqArbpPrepareForTestOrConflict(a1, *a2);
  if ( (int)result >= 0 )
    return ArbTestAllocation(a1, a2);
  return result;
}
