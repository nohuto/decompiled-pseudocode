/*
 * XREFs of ?RectIntersectsRect@@YAHMMMMMMMM@Z @ 0x1402271F8
 * Callers:
 *     DpiRectIntersectsRectWithSubpixel @ 0x14002C82C (DpiRectIntersectsRectWithSubpixel.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RectIntersectsRect(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( (float)(a3 - 0.001) >= a5 && (float)(a4 - 0.001) >= a6 && a7 >= (float)(a1 + 0.001) )
    return a8 >= (float)(a2 + 0.001);
  return result;
}
