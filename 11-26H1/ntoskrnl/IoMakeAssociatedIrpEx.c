/*
 * XREFs of IoMakeAssociatedIrpEx @ 0x140457890
 * Callers:
 *     <none>
 * Callees:
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 */

__int64 __fastcall IoMakeAssociatedIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  return IoMakeAssociatedIrpPriv(a1, a2, a3);
}
