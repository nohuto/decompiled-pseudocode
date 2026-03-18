/*
 * XREFs of IoMakeAssociatedIrpEx @ 0x14045DCF0
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x14045DD08 (IoMakeAssociatedIrpPriv.c)
 */

__int64 __fastcall IoMakeAssociatedIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  return IoMakeAssociatedIrpPriv(a1, a2, a3);
}
