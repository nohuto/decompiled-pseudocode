/*
 * XREFs of ?IsValidUseAsSwapChain@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x1802ABDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidUseAsSwapChain@CBitmapRealization@@MEBA_NXZ @ 0x1802AAA30 (-IsValidUseAsSwapChain@CBitmapRealization@@MEBA_NXZ.c)
 */

bool __fastcall CDxHandleBitmapRealization::IsValidUseAsSwapChain(CDxHandleBitmapRealization *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 393) )
    return CBitmapRealization::IsValidUseAsSwapChain(this);
  return v1;
}
