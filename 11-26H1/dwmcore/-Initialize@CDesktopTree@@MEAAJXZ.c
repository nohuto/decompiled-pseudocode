/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x180260050
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18008C9A8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800AEF90 (-Initialize@CVisualTree@@MEAAJXZ.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18010FD44 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDesktopTree::Initialize(CDesktopTree *this)
{
  CVisual *v2; // rcx
  CVisual *v3; // rax

  v2 = (CVisual *)KeyframeInterpolation::operator new(0x2A0uLL);
  v3 = 0LL;
  if ( v2 )
    v3 = CVisual::CVisual(v2, *((struct CComposition **)this + 3));
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)this + 330, (__int64)v3);
  *((_QWORD *)this + 9) = *((_QWORD *)this + 330);
  CVisualTree::Initialize(this);
  return 0LL;
}
