/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007FEC0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001760C (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z @ 0x180019D3C (-OnWindowDestroy@CAnimationScheduler@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180019D50 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180019DF0 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001A06C (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A824 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001AA84 (-WindowDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18001AAC0 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001AB8C (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x18001AD44 (--1CWindowData@@QEAA@XZ.c)
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001AE30 (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x18001AE6C (-ForceDisconnectClientNode@CWindowData@@QEAAXXZ.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001B184 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180025680 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180026F40 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ?OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z @ 0x18008C7F4 (-OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E1E44 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800E1EBC (-OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  CBaseObject *v8; // rcx
  int i; // eax
  CDesktopManager *v10; // rbx
  CAnimationScheduler *v11; // rcx
  CTransitionVisualController *v12; // rcx
  unsigned int j; // ebp
  __int64 v14; // rax
  CContainerVisual **v15; // rcx
  CContainerVisual **v16; // rcx
  CBaseObject *v17; // rcx
  CTopLevelWindow3D *v18; // rcx
  CBaseObject *v19; // rcx
  __int64 v20; // rcx
  CBaseObject *v21; // rcx
  struct CWindowData *v22; // [rsp+48h] [rbp+10h] BYREF

  v22 = a2;
  if ( (*((_BYTE *)a2 + 738) & 2) != 0 )
    DynArray<CStoryboard const *,0>::Remove((char *)this + 496, &v22);
  while ( *((_DWORD *)a2 + 140) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 67));
  while ( *((_DWORD *)a2 + 148) )
    CWindowList::UnregisterThumbnail(this, **((struct CThumbnailData ***)a2 + 71));
  CWindowList::SetOwner(this, a2, 0LL, a4);
  while ( *((_DWORD *)a2 + 130) )
    CSecondaryWindowRepresentation::OnWindowDestroyed(**((CSecondaryWindowRepresentation ***)a2 + 62), a2);
  CWindowData::ClearSnapshot(a2, 0, v6, 0);
  v8 = (CBaseObject *)*((_QWORD *)a2 + 61);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)a2 + 61) = 0LL;
  }
  for ( i = *((_DWORD *)a2 + 158); i; i = *((_DWORD *)a2 + 158) )
    CWindowList::SetOwner(this, *(struct CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * (unsigned int)(i - 1)), 0LL, v7);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), a2, 0LL, 1);
  v10 = CDesktopManager::s_pDesktopManagerInstance;
  v11 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( v11 )
  {
    CAnimationScheduler::OnWindowDestroy(v11, (HWND *)a2);
    v10 = CDesktopManager::s_pDesktopManagerInstance;
  }
  v12 = (CTransitionVisualController *)*((_QWORD *)v10 + 24);
  if ( v12 )
  {
    CTransitionVisualController::RemoveTLWClone(v12, *((const struct CTopLevelWindow **)a2 + 55), 0, 1);
    v10 = CDesktopManager::s_pDesktopManagerInstance;
  }
  for ( j = 0; j < *((_DWORD *)v10 + 310); ++j )
  {
    v20 = *(_QWORD *)(*((_QWORD *)v10 + 152) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v20 + 184LL))(v20, a2);
  }
  v14 = *((_QWORD *)a2 + 80);
  if ( v14 )
  {
    *(_QWORD *)(v14 + 216) = 0LL;
    v21 = (CBaseObject *)*((_QWORD *)a2 + 80);
    if ( v21 )
    {
      CBaseObject::Release(v21);
      *((_QWORD *)a2 + 80) = 0LL;
    }
  }
  v15 = (CContainerVisual **)*((_QWORD *)a2 + 56);
  if ( v15 )
  {
    CVisual::RemoveSelfFromParent(v15);
    v18 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
    if ( v18 )
      CTopLevelWindow3D::SetWindowData(v18, 0LL);
    v19 = (CBaseObject *)*((_QWORD *)a2 + 56);
    if ( v19 )
    {
      CBaseObject::Release(v19);
      *((_QWORD *)a2 + 56) = 0LL;
    }
  }
  v16 = (CContainerVisual **)*((_QWORD *)a2 + 55);
  if ( v16 )
  {
    CVisual::RemoveSelfFromParent(v16);
    v16 = (CContainerVisual **)*((_QWORD *)a2 + 55);
    if ( v16 )
    {
      CBaseObject::Release((CBaseObject *)v16);
      *((_QWORD *)a2 + 55) = 0LL;
    }
  }
  if ( *((_QWORD *)a2 + 82) )
    CWindowList::OnProxyWindowDying((CWindowList *)v16, a2);
  if ( *((_QWORD *)a2 + 81) )
    CWindowList::OnHostWindowDying(this, a2);
  CWindowList::ShowProjectionBorder(this, a2, 0);
  CWindowData::ForceDisconnectClientNode(a2);
  CImmersiveIconicBitmapRegistry::WindowDestroyed(
    *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
    (HWND *)a2);
  CIconicBitmapRegistry::WindowDestroyed(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    a2);
  v17 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  CWindowList::UnregisterAccentState(this, a2);
  CWindowData::~CWindowData(a2);
  DefaultHeap::Free(a2);
}
