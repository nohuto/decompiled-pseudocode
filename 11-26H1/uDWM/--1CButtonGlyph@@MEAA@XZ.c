/*
 * XREFs of ??1CButtonGlyph@@MEAA@XZ @ 0x18000629C
 * Callers:
 *     ??_GCImage@@UEAAPEAXI@Z @ 0x180006200 (--_GCImage@@UEAAPEAXI@Z.c)
 *     ??_GCButtonGlyph@@MEAAPEAXI@Z @ 0x180006250 (--_GCButtonGlyph@@MEAAPEAXI@Z.c)
 *     ??1CButtonVisual@@MEAA@XZ @ 0x18000631C (--1CButtonVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CGraphicsResourceOwner@@IEAA@XZ @ 0x18001B464 (--1CGraphicsResourceOwner@@IEAA@XZ.c)
 */

void __fastcall CButtonGlyph::~CButtonGlyph(CButtonGlyph *this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((char *)this + 232);
  CGraphicsResourceOwner::~CGraphicsResourceOwner((CButtonGlyph *)((char *)this + 208));
  CRectangleVisual::~CRectangleVisual(this);
}
