/*
 * XREFs of ?RectContainsRect@@YAHMMMMMMMM@Z @ 0x1401B1970
 * Callers:
 *     DpiRectContainsRectWithSubpixel @ 0x1401B1618 (DpiRectContainsRectWithSubpixel.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RectContainsRect(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a5 >= (float)(a1 - 0.001) && a6 >= (float)(a2 - 0.001) && (float)(a3 + 0.001) >= a7 )
    return (float)(a4 + 0.001) >= a8;
  return result;
}
