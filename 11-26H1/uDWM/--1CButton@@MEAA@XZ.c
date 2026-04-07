/*
 * XREFs of ??1CButton@@MEAA@XZ @ 0x1800086EC
 * Callers:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x1800086A0 (--_GCButton@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180008D28 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x18001BBE0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 */

void __fastcall CButton::~CButton(CBaseObject **this)
{
  *this = (CBaseObject *)&CButton::`vftable';
  CButton::DeactivateTimeline((struct CVisual *)this);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 26), 1);
  CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)(this + 30), 1);
  CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)(this + 30));
  CBitmapSourceArray::~CBitmapSourceArray((CBitmapSourceArray *)(this + 26));
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 25);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 24);
  CContainerVisual::~CContainerVisual((CContainerVisual *)this);
}
