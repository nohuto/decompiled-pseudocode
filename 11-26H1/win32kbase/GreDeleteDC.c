/*
 * XREFs of GreDeleteDC @ 0x14014C670
 * Callers:
 *     <none>
 * Callees:
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 */

__int64 __fastcall GreDeleteDC(HDC a1)
{
  return GrepDeleteDC(a1, 0x400000);
}
