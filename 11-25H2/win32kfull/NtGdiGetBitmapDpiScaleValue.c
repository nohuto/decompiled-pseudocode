/*
 * XREFs of NtGdiGetBitmapDpiScaleValue @ 0x140339240
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDpiScaleValue @ 0x1403329C8 (GreGetBitmapDpiScaleValue.c)
 */

__int64 __fastcall NtGdiGetBitmapDpiScaleValue(HSURF a1)
{
  return GreGetBitmapDpiScaleValue(a1);
}
