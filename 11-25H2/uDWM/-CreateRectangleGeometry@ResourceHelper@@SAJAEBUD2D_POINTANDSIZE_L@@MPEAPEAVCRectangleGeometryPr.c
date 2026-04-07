/*
 * XREFs of ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003F138
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180018D00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18003E0FC (-CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x18003F3F4 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceHelper::CreateRectangleGeometry(
        const struct D2D_POINTANDSIZE_L *a1,
        float a2,
        struct CRectangleGeometryProxy **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-68h]
  int v12; // [rsp+20h] [rbp-68h]
  bool v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  CBaseObject *v15; // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v5 = CCompositor::CreateRectangleGeometryProxy(
         *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\resourcehelper.cpp",
      (const char *)(unsigned int)v5,
      v11);
    if ( v15 )
      CBaseObject::Release(v15);
    return v6;
  }
  else
  {
    v7 = v15;
    v8 = CRectangleGeometryProxy::SetRectangle(
           v15,
           (float)*(int *)a1,
           (float)*((int *)a1 + 1),
           (float)(*(_DWORD *)a1 + *((_DWORD *)a1 + 2)),
           (float)(*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 3)),
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           a2,
           v13);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\resourcehelper.cpp",
        (const char *)(unsigned int)v8,
        v12);
      if ( v7 )
        CBaseObject::Release(v7);
      return v9;
    }
    else
    {
      *a3 = v7;
      return 0LL;
    }
  }
}
