/*
 * XREFs of Amd64OverflowHandler @ 0x1405A6D20
 * Callers:
 *     <none>
 * Callees:
 *     Amd64OverflowHandlerInternal @ 0x1405A6D40 (Amd64OverflowHandlerInternal.c)
 */

__int64 __fastcall Amd64OverflowHandler(__int64 a1, __int64 a2)
{
  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  return Amd64OverflowHandlerInternal(a1, a2, a1);
}
