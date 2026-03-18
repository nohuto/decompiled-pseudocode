/*
 * XREFs of ?GetHlsurf@CGdiSpriteBitmap@@UEBAPEAUHLSURF__@@XZ @ 0x180265AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLSURF __fastcall CGdiSpriteBitmap::GetHlsurf(CGdiSpriteBitmap *this)
{
  return (HLSURF)*((_QWORD *)this - 5);
}
