/*
 * XREFs of ?IsAttachedToWindow@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180265BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsAttachedToWindow(CGdiSpriteBitmap *this)
{
  return *((_BYTE *)this + 29);
}
