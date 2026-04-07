/*
 * XREFs of ?Ensure2DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800960C4
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18008C388 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimatedTransitionVisual::Ensure2DResources(CVisualProxy **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CBaseTransformProxy *v5; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CBaseTransformProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !this[34] )
  {
    v8 = 0LL;
    v2 = CCompositor::CreateMatrixTransformProxy(
           *((struct IDwmChannel ***)CDesktopManager::s_pDesktopManagerInstance + 6),
           &v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 969LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v2);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v8);
      return v3;
    }
    v5 = v8;
    v2 = CVisualProxy::SetTransform(this[3], v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 970LL;
      goto LABEL_6;
    }
    v8 = 0LL;
    this[34] = v5;
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v8);
  }
  return 0LL;
}
