/*
 * XREFs of GreDeleteDC @ 0x14010F820
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return GrepDeleteDC(a1, 0x400000u);
}
