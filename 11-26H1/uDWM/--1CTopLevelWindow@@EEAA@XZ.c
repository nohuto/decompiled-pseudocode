/*
 * XREFs of ??1CTopLevelWindow@@EEAA@XZ @ 0x18005A16C
 * Callers:
 *     ??_GCTopLevelWindow@@EEAAPEAXI@Z @ 0x18005A120 (--_GCTopLevelWindow@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180005A98 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x1800231F4 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18004D568 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18005A528 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18005A5BC (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18007C6F4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CTopLevelWindow *this)
{
  CWindowList *v2; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  unsigned int v4; // esi
  CBaseObject **v5; // rbx
  unsigned int v6; // esi
  CBaseObject **v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  CTimelineBase *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  int v31; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProjectedShadowScene *v33; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation(this);
  CTopLevelWindow::StopLivePreviewAnimation(this);
  if ( (*((_BYTE *)this + 185) & 8) != 0 )
  {
    v33 = 0LL;
    v2 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v33);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       v2,
                                       *(_QWORD *)(*((_QWORD *)this + 87) + 136LL),
                                       0,
                                       &v33);
    if ( ProjectedShadowSceneForDesktop >= 0 )
      CTopLevelWindow::AddProjectedShadowCaster(this, v33, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)ProjectedShadowSceneForDesktop,
        v31);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(&v33);
  }
  v4 = 0;
  v5 = (CBaseObject **)((char *)this + 472);
  do
  {
    if ( *v5 )
    {
      CBaseObject::Release(*v5);
      *v5 = 0LL;
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  v6 = 0;
  v7 = (CBaseObject **)((char *)this + 288);
  do
  {
    if ( *v7 )
    {
      CBaseObject::Release(*v7);
      *v7 = 0LL;
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 0x16 );
  v8 = *((_QWORD *)this + 98);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, 0LL);
    v9 = *((_QWORD *)this + 98);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      *((_QWORD *)this + 98) = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(this, (bool *)&v33);
  v10 = (CBaseObject *)*((_QWORD *)this + 26);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 26) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 27);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 27) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 28);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 28) = 0LL;
  }
  v13 = (CBaseObject *)*((_QWORD *)this + 29);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 29) = 0LL;
  }
  v14 = (CBaseObject *)*((_QWORD *)this + 63);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)this + 63) = 0LL;
  }
  *((_QWORD *)this + 64) = 0LL;
  v15 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v15 )
  {
    CBaseObject::Release(v15);
    *((_QWORD *)this + 30) = 0LL;
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 66);
  if ( v16 )
  {
    CBaseObject::Release(v16);
    *((_QWORD *)this + 66) = 0LL;
  }
  v17 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 67) = 0LL;
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)this + 31) = 0LL;
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 58);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 58) = 0LL;
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 65) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 89);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 89) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 90);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 90) = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 68) = 0LL;
  }
  v24 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 35) = 0LL;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 69);
  if ( v25 )
  {
    CBaseObject::Release(v25);
    *((_QWORD *)this + 69) = 0LL;
  }
  v26 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v26 )
  {
    CBaseObject::Release(v26);
    *((_QWORD *)this + 70) = 0LL;
  }
  operator delete(*((void **)this + 82), 0x10uLL);
  v27 = (CTimelineBase *)*((_QWORD *)this + 83);
  if ( v27 )
  {
    CTimelineBase::Release(v27);
    *((_QWORD *)this + 83) = 0LL;
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 93);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 93) = 0LL;
  }
  v29 = (CBaseObject *)*((_QWORD *)this + 94);
  if ( v29 )
  {
    CBaseObject::Release(v29);
    *((_QWORD *)this + 94) = 0LL;
  }
  v30 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)this + 96) = 0LL;
  }
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 34);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 33);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 32);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)this + 25);
  CContainerVisual::~CContainerVisual(this);
}
