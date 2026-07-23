/*
 * XREFs of CmpTransGetTransPtr @ 0x140AA4B40
 * Callers:
 *     CmpTransIsTransActive @ 0x14050CC2C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
