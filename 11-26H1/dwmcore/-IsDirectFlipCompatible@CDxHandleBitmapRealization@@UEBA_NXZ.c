/*
 * XREFs of ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1801ACB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::IsDirectFlipCompatible(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 22) & 0x10) != 0;
}
