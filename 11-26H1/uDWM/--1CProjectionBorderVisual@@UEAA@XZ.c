/*
 * XREFs of ??1CProjectionBorderVisual@@UEAA@XZ @ 0x18009E45C
 * Callers:
 *     ??_GCProjectionBorderVisual@@UEAAPEAXI@Z @ 0x18009E650 (--_GCProjectionBorderVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CProjectionBorderVisual::~CProjectionBorderVisual(CBaseObject **this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 24);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 23);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
