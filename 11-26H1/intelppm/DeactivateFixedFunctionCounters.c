/*
 * XREFs of DeactivateFixedFunctionCounters @ 0x1400068DC
 * Callers:
 *     SnapEnergyCounters @ 0x140006950 (SnapEnergyCounters.c)
 *     UnInitEnergyCounters @ 0x14002A7A0 (UnInitEnergyCounters.c)
 * Callees:
 *     <none>
 */

_DWORD *DeactivateFixedFunctionCounters()
{
  _DWORD *result; // rax

  __writemsr(0x38Du, 0LL);
  __writemsr(0x309u, 0LL);
  __writemsr(0x30Au, 0LL);
  __writemsr(0x30Bu, 0LL);
  __writemsr(0x38Fu, __readmsr(0x38Fu) & 0xFFFFFFF8FFFFFFFFuLL);
  result = *(_DWORD **)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + KeGetPcr()->Prcb.Number) + 368LL);
  *result = 0;
  return result;
}
