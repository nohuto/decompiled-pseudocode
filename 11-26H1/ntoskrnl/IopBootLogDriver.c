/*
 * XREFs of IopBootLogDriver @ 0x1405CCF40
 * Callers:
 *     <none>
 * Callees:
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 */

__int64 __fastcall IopBootLogDriver(__int64 a1)
{
  IopBootLog((PCUNICODE_STRING)(a1 + 72));
  return 0LL;
}
