/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180028E40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z @ 0x180007AF4 (-SetContent@CContainerVisualProxy@@QEAAJPEBVCResourceProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180010F40 (-CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180016920 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18001F43C (-Update@CCachedVisualImageProxy@@QEAAJAEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@PEBVCRectResourceProxy@@PE.c)
 *     ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18001F648 (-CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800294B4 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180029568 (-CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x180029574 (-SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x1800295A8 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x1800295D0 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800295E8 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x180029810 (-Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z.c)
 *     ?CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180029838 (-CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     ?CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x180029844 (-CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CClientArea::CloneVisualTree(__int64 a1, CBaseObject **a2, char a3)
{
  CCompositor *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct CVisualProxy *v8; // rbx
  int v9; // edi
  CBaseObject *v10; // rax
  CCompositor *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  CCompositor *v16; // rbx
  int v17; // eax
  int v18; // eax
  CCompositor *v19; // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // rcx
  struct IRenderDataBuilder *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  struct IRenderDataBuilder *v30; // rcx
  CBaseObject *v31; // rcx
  __int64 v32; // rdx
  CBaseObject *v33; // rcx
  __int64 v34; // rdx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  struct IRenderDataBuilder *v37; // rcx
  __int64 v38; // rdx
  struct IRenderDataBuilder *v39; // rcx
  CBaseObject *v40; // rcx
  struct IRenderDataBuilder *v41; // rcx
  struct IRenderDataBuilder *v42; // rcx
  CBaseObject *v43; // rcx
  struct IRenderDataBuilder *v44; // rcx
  int v45; // [rsp+20h] [rbp-49h]
  CBaseObject *v46; // [rsp+40h] [rbp-29h] BYREF
  struct IRenderDataBuilder *v47; // [rsp+48h] [rbp-21h] BYREF
  CContainerVisualProxy *v48; // [rsp+50h] [rbp-19h] BYREF
  struct CResourceProxy *v49; // [rsp+58h] [rbp-11h] BYREF
  CBaseObject *v50; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v51[2]; // [rsp+68h] [rbp-1h] BYREF
  CContainerVisualProxy *v52; // [rsp+70h] [rbp+7h]
  struct tagRECT v53; // [rsp+78h] [rbp+Fh] BYREF
  _DWORD v54[4]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *a2 = 0LL;
  v52 = 0LL;
  if ( (a3 & 4) == 0 )
  {
    v48 = 0LL;
    v5 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v48);
    v6 = CCompositor::CreateRedirectVisualProxy(v5, &v48);
    v7 = v6;
    if ( v6 < 0 )
    {
      v34 = 135LL;
    }
    else
    {
      v6 = CRedirectVisualProxy::SetRedirectedVisual(v48, *(struct CVisualProxy **)(a1 + 16));
      v7 = v6;
      if ( v6 >= 0 )
      {
        v8 = v48;
        v52 = v48;
        goto LABEL_5;
      }
      v34 = 136LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v6,
      v45);
    v31 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      goto LABEL_34;
    }
    return v7;
  }
  v53 = 0LL;
  (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 24LL) + 96LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL),
    &v53);
  v53.right -= v53.left;
  v53.bottom -= v53.top;
  *(_QWORD *)&v53.left = 0LL;
  v54[0] = 0;
  v54[1] = 0;
  *(float *)&v54[2] = (float)v53.right;
  *(float *)&v54[3] = (float)v53.bottom;
  v46 = 0LL;
  v12 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
  v13 = CCompositor::CreateCachedVisualImageProxy(v12, &v46);
  v7 = v13;
  if ( v13 < 0 )
  {
    v38 = 100LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v13,
      v45);
    goto LABEL_32;
  }
  v14 = *(_QWORD *)(a1 + 16);
  v51[0] = 0;
  v51[1] = 0;
  v15 = CCachedVisualImageProxy::Update((__int64)v46, (__int64)v54, (__int64)v51, 0LL, 0LL, v14, 0);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v15,
      v45);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
    return v7;
  }
  v13 = CCachedVisualImageProxy::Snapshot(v46, &v53);
  v7 = v13;
  if ( v13 < 0 )
  {
    v38 = 108LL;
    goto LABEL_54;
  }
  v13 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
  v7 = v13;
  if ( v13 < 0 )
  {
    v38 = 111LL;
    goto LABEL_54;
  }
  v47 = 0LL;
  v16 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v47);
  v17 = CCompositor::CreateRenderDataBuilder(v16, &v47);
  v7 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v17,
      v45);
    v42 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v42 + 16LL))(v42);
    }
LABEL_32:
    v31 = v46;
    if ( v46 )
    {
      v46 = 0LL;
LABEL_34:
      CBaseObject::Release(v31);
    }
    return v7;
  }
  v18 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _DWORD *, _QWORD))(*(_QWORD *)v47 + 40LL))(
          v47,
          v54,
          *(unsigned int *)(*((_QWORD *)v46 + 2) + 24LL));
  v7 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v18,
      v45);
    v39 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v39 + 16LL))(v39);
    }
    goto LABEL_32;
  }
  v49 = 0LL;
  v19 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v49);
  v20 = CCompositor::CreateRenderDataProxy(v19, &v49);
  v7 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v20,
      v45);
    v40 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      CBaseObject::Release(v40);
    }
    v41 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v41 + 16LL))(v41);
    }
    goto LABEL_32;
  }
  v21 = CRenderDataProxy::Update(v49, v47);
  v7 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v21,
      v45);
    v43 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      CBaseObject::Release(v43);
    }
    v44 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v44 + 16LL))(v44);
    }
    goto LABEL_32;
  }
  v48 = 0LL;
  v22 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v48);
  v23 = CCompositor::CreateContainerVisualProxy(v22, &v48);
  v7 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v23,
      v45);
    v28 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      CBaseObject::Release(v28);
    }
    v29 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      CBaseObject::Release(v29);
    }
    v30 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_32;
  }
  v24 = CContainerVisualProxy::SetContent(v48, v49);
  v7 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
      (const char *)(unsigned int)v24,
      v45);
    v35 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      CBaseObject::Release(v35);
    }
    v36 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      CBaseObject::Release(v36);
    }
    v37 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    goto LABEL_32;
  }
  v8 = v48;
  v48 = 0LL;
  v52 = v8;
  v25 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    CBaseObject::Release(v25);
  }
  v26 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(struct IRenderDataBuilder *))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    CBaseObject::Release(v27);
  }
LABEL_5:
  v50 = 0LL;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v50);
  v9 = CClientArea::Create(v8, &v50);
  if ( v9 < 0 )
  {
    v32 = 143LL;
  }
  else
  {
    v9 = CVisual::InitializeVisualTreeClone(a1, (struct tagPOINT *)v50);
    if ( v9 >= 0 )
    {
      v10 = v50;
      v50 = 0LL;
      *a2 = v10;
      if ( v8 )
        CBaseObject::Release(v8);
      return 0LL;
    }
    v32 = 144LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
    (const char *)(unsigned int)v9,
    v45);
  v33 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    CBaseObject::Release(v33);
  }
  if ( v8 )
    CBaseObject::Release(v8);
  return (unsigned int)v9;
}
