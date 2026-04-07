/*
 * XREFs of ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800164A4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x1800151F0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180054BDC (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     _CTopLevelWindow::ValidateVisual_::_1_::dtor$0 @ 0x1800E70F0 (_CTopLevelWindow--ValidateVisual_--_1_--dtor$0.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall FastRegion::CRegion::FreeMemory(void **this, const struct std::nothrow_t *a2)
{
  _DWORD *v2; // rbx

  v2 = this + 1;
  if ( this + 1 != *this )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(*this, a2);
    *this = v2;
    *v2 = 0;
  }
}
