/*
 * XREFs of NtGdiCreateCompatibleDC @ 0x14003AF20
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleDC @ 0x14003AF40 (GreCreateCompatibleDC.c)
 */

__int64 NtGdiCreateCompatibleDC()
{
  return GreCreateCompatibleDC();
}
