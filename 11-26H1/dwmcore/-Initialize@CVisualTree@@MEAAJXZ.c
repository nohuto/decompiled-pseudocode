/*
 * XREFs of ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800AEF90
 * Callers:
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x180260050 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEE58 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z @ 0x1800AEFD0 (-AddVisualTree@CComposition@@QEAAXPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CVisualTree::Initialize(CVisualTree *this)
{
  CVisual *v1; // rbx

  v1 = (CVisual *)*((_QWORD *)this + 9);
  CVisual::SetVisualTreeNoRef(v1, this);
  *((_BYTE *)v1 + 96) |= 1u;
  CComposition::AddVisualTree(*((CComposition **)this + 3), this);
  return 0LL;
}
