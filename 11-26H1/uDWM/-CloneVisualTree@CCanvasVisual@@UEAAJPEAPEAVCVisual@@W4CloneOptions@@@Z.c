/*
 * XREFs of ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800214C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016C4C (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800211D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCanvasVisual::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  CBaseObject *v9; // rcx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v12);
  v6 = CCanvasVisual::Create(&v12);
  if ( v6 < 0 )
  {
    v8 = 41LL;
  }
  else
  {
    v6 = CContainerVisual::InitializeVisualTreeClone(a1, v12, a3);
    if ( v6 >= 0 )
    {
      *a2 = v12;
      return 0LL;
    }
    v8 = 42LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\canvasvisual.cpp",
    (const char *)(unsigned int)v6,
    v10);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    CBaseObject::Release(v9);
  }
  return (unsigned int)v6;
}
