/*
 * XREFs of ?ValidUmpdSizl@@YAHUtagSIZE@@_N@Z @ 0x14025162C
 * Callers:
 *     NtGdiEngCreateDeviceBitmap @ 0x14032CDE0 (NtGdiEngCreateDeviceBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x14032CE80 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidUmpdSizl(struct tagSIZE a1, char a2)
{
  return a1.cx > 0 && a1.cy > 0 && (!a2 || (unsigned __int64)(a1.cx * (__int64)a1.cy) <= 0xFFFFFFFF);
}
