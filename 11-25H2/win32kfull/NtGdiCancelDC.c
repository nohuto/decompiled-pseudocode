/*
 * XREFs of NtGdiCancelDC @ 0x140338EF0
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x140332B90 (GreCancelDC.c)
 */

__int64 __fastcall NtGdiCancelDC(__int64 a1)
{
  return GreCancelDC(a1);
}
