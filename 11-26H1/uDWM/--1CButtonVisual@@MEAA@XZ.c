/*
 * XREFs of ??1CButtonVisual@@MEAA@XZ @ 0x18000631C
 * Callers:
 *     ??_GCButtonVisual@@MEAAPEAXI@Z @ 0x1800062D0 (--_GCButtonVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CButtonVisual::~CButtonVisual(CButtonVisual *this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((char *)this + 240);
  CButtonGlyph::~CButtonGlyph(this);
}
