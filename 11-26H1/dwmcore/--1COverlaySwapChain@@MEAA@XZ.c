/*
 * XREFs of ??1COverlaySwapChain@@MEAA@XZ @ 0x1801347F4
 * Callers:
 *     ??1CScribbleSwapChain@@MEAA@XZ @ 0x180204F6C (--1CScribbleSwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall COverlaySwapChain::~COverlaySwapChain(FastRegion::CRegion **this)
{
  FastRegion::CRegion *v2; // rcx

  FastRegion::CRegion::FreeMemory(this + 23);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(this + 8);
  v2 = this[5];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (this[7] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[5] = 0LL;
    this[6] = 0LL;
    this[7] = 0LL;
  }
  CMILCOMBaseWeakRefSource<CResourceDeleter>::~CMILCOMBaseWeakRefSource<CResourceDeleter>((__int64)this);
}
