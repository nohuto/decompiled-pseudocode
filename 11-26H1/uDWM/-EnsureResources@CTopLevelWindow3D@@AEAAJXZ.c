/*
 * XREFs of ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800836E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800452B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002888C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ??4?$com_ptr_t@VCSolidRectangleVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180078858 (--4-$com_ptr_t@VCSolidRectangleVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18008437C (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x18008C388 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::EnsureResources(struct CMatrixTransformProxy **this)
{
  int MatrixTransformProxy; // ebx
  __int64 v3; // rdx
  int v5; // eax
  __int64 v6; // rdx
  struct CVisual *v7; // rbx
  int v8; // eax
  int v9; // esi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CSolidRectangleVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  MatrixTransformProxy = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation((CTopLevelWindow3D *)this, 1u);
  if ( MatrixTransformProxy < 0 )
  {
    v3 = 854LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)MatrixTransformProxy,
      v10);
    return (unsigned int)MatrixTransformProxy;
  }
  if ( !this[31] )
  {
    MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             this + 31);
    if ( MatrixTransformProxy < 0 )
    {
      v3 = 858LL;
      goto LABEL_3;
    }
  }
  if ( !this[32] )
  {
    v12 = 0LL;
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v12);
    v5 = CSolidRectangleVisual::Create(&v12);
    MatrixTransformProxy = v5;
    if ( v5 < 0 )
    {
      v6 = 864LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v5,
        v10);
      goto LABEL_16;
    }
    v7 = v12;
    v8 = CVisualProxy::SetTransform(*((CVisualProxy **)v12 + 2), this[31]);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x361,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v8,
        v10);
      MatrixTransformProxy = v9;
LABEL_16:
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
      return (unsigned int)MatrixTransformProxy;
    }
    v5 = CContainerVisual::AddChild((CContainerVisual *)this, v7);
    MatrixTransformProxy = v5;
    if ( v5 < 0 )
    {
      v6 = 866LL;
      goto LABEL_15;
    }
    wil::com_ptr_t<CSolidRectangleVisual,wil::err_returncode_policy>::operator=(this + 32, &v12);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v12);
  }
  return 0LL;
}
