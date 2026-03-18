/*
 * XREFs of NtGdiSetMagicColors @ 0x1401F2590
 * Callers:
 *     <none>
 * Callees:
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 */

__int64 __fastcall NtGdiSetMagicColors(HDC a1, struct tagPALETTEENTRY a2, unsigned int a3)
{
  return GreSetMagicColors(a1, a2, a3);
}
