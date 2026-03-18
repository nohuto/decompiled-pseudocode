/*
 * XREFs of ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802B07F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??1CStereoRenderTargetBitmap@@UEAA@XZ @ 0x1802B07C4 (--1CStereoRenderTargetBitmap@@UEAA@XZ.c)
 */

CStereoRenderTargetBitmap *__fastcall CStereoRenderTargetBitmap::`vector deleting destructor'(
        CStereoRenderTargetBitmap *this,
        char a2)
{
  CStereoRenderTargetBitmap::~CStereoRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
