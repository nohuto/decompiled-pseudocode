/*
 * XREFs of NtGdiGetSystemPaletteUse @ 0x140339E70
 * Callers:
 *     <none>
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1402011BC (GreGetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
