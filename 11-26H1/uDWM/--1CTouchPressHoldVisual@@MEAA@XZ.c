/*
 * XREFs of ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800CD000
 * Callers:
 *     ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800CD040 (--_ECTouchPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800CD780 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::~CTouchPressHoldVisual(CBaseObject **this)
{
  *this = (CBaseObject *)&CTouchPressHoldVisual::`vftable';
  CTouchPressHoldVisual::Stop((CTouchPressHoldVisual *)this);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 38);
  CTouchVisual::~CTouchVisual(this);
}
