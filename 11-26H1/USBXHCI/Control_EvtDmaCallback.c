/*
 * XREFs of Control_EvtDmaCallback @ 0x1400324B0
 * Callers:
 *     <none>
 * Callees:
 *     Control_Transfer_MapIntoRing @ 0x14000F2D0 (Control_Transfer_MapIntoRing.c)
 */

int *__fastcall Control_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(*(_QWORD *)(a4 + 360) + 96LL) = a3;
  return Control_Transfer_MapIntoRing(a4);
}
