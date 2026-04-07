/*
 * XREFs of ??1CLegacyNonClientBackground@@UEAA@XZ @ 0x18008D204
 * Callers:
 *     ??_ECLegacyNonClientBackground@@UEAAPEAXI@Z @ 0x18006ED60 (--_ECLegacyNonClientBackground@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CLegacyNonClientBackground::~CLegacyNonClientBackground(CBaseObject **this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 25);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 24);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
