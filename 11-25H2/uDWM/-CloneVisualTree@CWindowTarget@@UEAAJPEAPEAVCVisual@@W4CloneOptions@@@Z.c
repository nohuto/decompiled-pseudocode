/*
 * XREFs of ?CloneVisualTree@CWindowTarget@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800E94A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180029574 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800E95AC (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowTarget::CloneVisualTree(__int64 a1, struct CWindowTarget **a2)
{
  CCompositor *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  struct CWindowTarget *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct CWindowTarget *v13; // [rsp+48h] [rbp+28h] BYREF
  CRedirectVisualProxy *v14; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  v4 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  v5 = CCompositor::CreateRedirectVisualProxy(v4, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
  v5 = CRedirectVisualProxy::SetRedirectedVisual(v14, *(struct CVisualProxy **)(a1 + 16));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 55LL;
    goto LABEL_5;
  }
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  v8 = CWindowTarget::Create(v14, &v13);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = CVisual::InitializeVisualTreeClone(a1, (struct tagPOINT *)v13);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v10 = v13;
      v13 = 0LL;
      *a2 = v10;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
      v6 = 0;
      goto LABEL_12;
    }
    v9 = 59LL;
  }
  else
  {
    v9 = 58LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowtarget.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
LABEL_12:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  return v6;
}
