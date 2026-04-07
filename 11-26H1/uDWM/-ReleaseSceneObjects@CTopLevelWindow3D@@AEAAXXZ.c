/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180083EE0
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x1800821A8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18000D27C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CVisualBrush@@QEAAXXZ @ 0x180083FAC (-Release@CVisualBrush@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  int v4; // eax
  CContainerVisual **v5; // rcx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 30) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_BYTE *)this + 196) = 0;
  *((_BYTE *)this + 424) = 0;
  CVisualBrush::Release((CTopLevelWindow3D *)((char *)this + 344));
  v4 = CVisualProxy::SetClip(*((CVisualProxy **)this + 2), 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v4,
      v7);
  v5 = (CContainerVisual **)*((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = CVisual::RemoveSelfFromParent(v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x37,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v6,
        v7);
    wil::com_ptr_t<CImage,wil::err_exception_policy>::reset((CBaseObject **)this + 32);
  }
}
