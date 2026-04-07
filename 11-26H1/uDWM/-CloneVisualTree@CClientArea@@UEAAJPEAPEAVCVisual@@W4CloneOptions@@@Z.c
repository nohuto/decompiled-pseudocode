/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A6C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x18000A8A4 (-SetRect@CRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013D20 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180022CFC (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x180033580 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800421D8 (-reset@-$com_ptr_t@VCImage@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z @ 0x18004FE5C (-Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x18006B24C (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ?Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z @ 0x18009B794 (-Reset@CVisualBrush@@QEAAJPEAVCVisual@@AEBUtagRECT@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x1800A7FCC (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClientArea::CloneVisualTree(__int64 a1, CRectangleVisual **a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  CRectangleVisual *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  int RedirectVisualProxy; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  CRectangleVisual *v17; // r14
  CRectangleVisual *v18; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v20; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a2 = 0LL;
  if ( (a3 & 4) == 0 )
  {
    *(_QWORD *)&v20.left = 0LL;
    RedirectVisualProxy = CCompositor::CreateRedirectVisualProxy(
                            *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                            (struct CRedirectVisualProxy **)&v20);
    v6 = RedirectVisualProxy;
    if ( RedirectVisualProxy >= 0 )
    {
      RedirectVisualProxy = CRedirectVisualProxy::SetRedirectedVisual(
                              *(CRedirectVisualProxy **)&v20.left,
                              *(struct CVisualProxy **)(a1 + 16));
      v6 = RedirectVisualProxy;
      if ( RedirectVisualProxy >= 0 )
      {
        v18 = 0LL;
        v15 = CClientArea::Create(*(struct CVisualProxy **)&v20.left, &v18);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v17 = v18;
          v15 = CVisual::InitializeVisualTreeClone(a1, v18);
          v6 = v15;
          if ( v15 >= 0 )
          {
            v18 = 0LL;
            *a2 = v17;
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
            wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v20);
            return 0LL;
          }
          v16 = 122LL;
        }
        else
        {
          v16 = 121LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
LABEL_29:
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)&v20);
        return v6;
      }
      v14 = 118LL;
    }
    else
    {
      v14 = 117LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)RedirectVisualProxy);
    goto LABEL_29;
  }
  v20 = 0LL;
  (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(a1 + 136) + 24LL) + 96LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 136) + 24LL),
    &v20);
  v20.right -= v20.left;
  v20.bottom -= v20.top;
  *(_QWORD *)&v20.left = 0LL;
  v19 = 0LL;
  v5 = CVisualBrush::Reset((CVisualBrush *)&v19, (struct CVisual *)a1, &v20, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 95LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v5);
LABEL_16:
    CVisualBrush::~CVisualBrush((CVisualBrush *)&v19);
    return v6;
  }
  v5 = CVisualBrush::FreezeImpl((__int64)&v19, 1u);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 96LL;
    goto LABEL_6;
  }
  v5 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 99LL;
    goto LABEL_6;
  }
  v18 = 0LL;
  wil::com_ptr_t<CImage,wil::err_exception_policy>::reset(&v18);
  v8 = CSolidRectangleVisual::Create(&v18);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v8);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
    goto LABEL_16;
  }
  v9 = v18;
  v10 = CVisual::InitializeVisualTreeClone(a1, v18);
  if ( v10 < 0 )
  {
    v11 = 103LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
    v6 = v10;
    goto LABEL_16;
  }
  v10 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)v9, v19);
  if ( v10 < 0 )
  {
    v11 = 106LL;
    goto LABEL_15;
  }
  CRectangleVisual::SetRect(v9, &v20);
  v18 = 0LL;
  *a2 = v9;
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
  CVisualBrush::~CVisualBrush((CVisualBrush *)&v19);
  return 0LL;
}
