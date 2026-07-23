/*
 * XREFs of XmSbbOp @ 0x1405AF370
 * Callers:
 *     <none>
 * Callees:
 *     XmSubOperands @ 0x1404A1170 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
