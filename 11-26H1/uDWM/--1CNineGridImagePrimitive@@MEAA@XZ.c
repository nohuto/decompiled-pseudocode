/*
 * XREFs of ??1CNineGridImagePrimitive@@MEAA@XZ @ 0x1800BC9B0
 * Callers:
 *     ??_GCNineGridImagePrimitive@@MEAAPEAXI@Z @ 0x1800BCA30 (--_GCNineGridImagePrimitive@@MEAAPEAXI@Z.c)
 *     ??_ECThemePartPrimitive@@MEAAPEAXI@Z @ 0x1800BCA80 (--_ECThemePartPrimitive@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

void __fastcall CNineGridImagePrimitive::~CNineGridImagePrimitive(CBaseObject **this)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(this + 7);
  CGlassColorizationResources::~CGlassColorizationResources((CGlassColorizationResources *)this);
}
