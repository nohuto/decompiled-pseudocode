/*
 * XREFs of ??1CTopLevelWindow@@EEAA@XZ @ 0x18000FD70
 * Callers:
 *     ??_GCTopLevelWindow@@EEAAPEAXI@Z @ 0x1800102F0 (--_GCTopLevelWindow@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18000F940 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800101D0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x180010220 (-UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800102B0 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180030810 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x18005962C (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008DA78 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::~CTopLevelWindow(CTopLevelWindow *this)
{
  unsigned int v2; // esi
  CBaseObject **v3; // rbx
  unsigned int v4; // esi
  CBaseObject **v5; // rbx
  __int64 v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
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
  CTimelineBase *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  CBaseObject *v30; // rcx
  CWindowList *v31; // rbx
  int ProjectedShadowSceneForDesktop; // eax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CProjectedShadowScene *v36; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CTopLevelWindow::`vftable';
  CTopLevelWindow::StopIconicAnimation(this);
  CTopLevelWindow::StopLivePreviewAnimation(this);
  if ( (*((_BYTE *)this + 201) & 0x10) != 0 )
  {
    v36 = 0LL;
    v31 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
    ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                       v31,
                                       *(_QWORD *)(*((_QWORD *)this + 89) + 136LL),
                                       0,
                                       &v36);
    if ( ProjectedShadowSceneForDesktop >= 0 )
      CTopLevelWindow::AddProjectedShadowCaster(this, v36, 0LL, 0LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
        (const char *)(unsigned int)ProjectedShadowSceneForDesktop,
        v34);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v36);
  }
  v2 = 0;
  v3 = (CBaseObject **)((char *)this + 488);
  do
  {
    if ( *v3 )
    {
      CBaseObject::Release(*v3);
      *v3 = 0LL;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 4 );
  v4 = 0;
  v5 = (CBaseObject **)((char *)this + 304);
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
  while ( v4 < 0x16 );
  CTopLevelWindow::ReleaseHolographicSlate(this);
  v6 = *((_QWORD *)this + 103);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, 0LL);
    v33 = *((_QWORD *)this + 103);
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      *((_QWORD *)this + 103) = 0LL;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                 + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL));
  CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(this, (bool *)&v36);
  v8 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 96) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 28);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 28) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 29);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 29) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 30);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 30) = 0LL;
  }
  v12 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v12 )
  {
    CBaseObject::Release(v12);
    *((_QWORD *)this + 31) = 0LL;
  }
  v13 = (CBaseObject *)*((_QWORD *)this + 65);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)this + 65) = 0LL;
  }
  *((_QWORD *)this + 66) = 0LL;
  v14 = (CBaseObject *)*((_QWORD *)this + 32);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)this + 32) = 0LL;
  }
  v15 = (CBaseObject *)*((_QWORD *)this + 68);
  if ( v15 )
  {
    CBaseObject::Release(v15);
    *((_QWORD *)this + 68) = 0LL;
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 69);
  if ( v16 )
  {
    CBaseObject::Release(v16);
    *((_QWORD *)this + 69) = 0LL;
  }
  v17 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)this + 33) = 0LL;
  }
  v18 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)this + 60) = 0LL;
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v19 )
  {
    CBaseObject::Release(v19);
    *((_QWORD *)this + 67) = 0LL;
  }
  v20 = (CBaseObject *)*((_QWORD *)this + 91);
  if ( v20 )
  {
    CBaseObject::Release(v20);
    *((_QWORD *)this + 91) = 0LL;
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 92);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 92) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 70);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 70) = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 37) = 0LL;
  }
  v24 = (CBaseObject *)*((_QWORD *)this + 71);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 71) = 0LL;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 72);
  if ( v25 )
  {
    CBaseObject::Release(v25);
    *((_QWORD *)this + 72) = 0LL;
  }
  CDisplayBlackCurtainAnimatedVisual::operator delete(*((void **)this + 84), v7);
  v26 = (CTimelineBase *)*((_QWORD *)this + 85);
  if ( v26 )
  {
    CTimelineBase::Release(v26);
    *((_QWORD *)this + 85) = 0LL;
  }
  v27 = (CBaseObject *)*((_QWORD *)this + 93);
  if ( v27 )
  {
    CBaseObject::Release(v27);
    *((_QWORD *)this + 93) = 0LL;
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 98);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 98) = 0LL;
  }
  v29 = (CBaseObject *)*((_QWORD *)this + 99);
  if ( v29 )
  {
    CBaseObject::Release(v29);
    *((_QWORD *)this + 99) = 0LL;
  }
  v30 = (CBaseObject *)*((_QWORD *)this + 101);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)this + 101) = 0LL;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 36);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 35);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 34);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 27);
  CContainerVisual::~CContainerVisual(this);
}
