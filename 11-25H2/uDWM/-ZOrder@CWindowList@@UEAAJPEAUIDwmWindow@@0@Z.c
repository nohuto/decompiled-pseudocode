/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180006D20 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180007DF0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18004B744 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180050A50 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180058DC0 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800696C4 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007E2C4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18008DA78 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800BD65C (-WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // r9d
  struct CProjectedShadowScene *WindowListForDesktopCanFail; // rax
  struct CProjectedShadowScene *v11; // rbx
  struct CWindowData *v12; // rdx
  struct CWindowData **v13; // r8
  struct CWindowData *v14; // rcx
  __int64 v15; // r8
  int inserted; // eax
  struct CWindowData *v17; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rbx
  __int64 v19; // rax
  int ProjectedShadowSceneForDesktop; // eax
  __int64 v21; // rbx
  struct _LIST_ENTRY *v22; // r15
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v25; // r9
  __int64 v26; // r11
  struct _LIST_ENTRY **v27; // rax
  __int64 v28; // r11
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // [rsp+20h] [rbp-20h]
  struct CProjectedShadowScene *v32; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+38h] [rbp-8h] BYREF
  struct CWindowData *v34; // [rsp+78h] [rbp+38h] BYREF

  v33 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0;
  v34 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v34);
  if ( !v34 )
  {
    v31 = 3607;
LABEL_3:
    v8 = -2147024890;
    v7 = -2147024890;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, v31, 0LL);
    goto LABEL_5;
  }
  WindowListForDesktopCanFail = (struct CProjectedShadowScene *)CWindowList::GetWindowListForDesktopCanFail(
                                                                  this,
                                                                  *((_QWORD *)v34 + 17));
  v11 = WindowListForDesktopCanFail;
  if ( !WindowListForDesktopCanFail )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xE1Au, 0LL);
    goto LABEL_5;
  }
  v32 = WindowListForDesktopCanFail;
  if ( a3 )
  {
    CWindowList::GetSyncedWindowData(this, a3, 1, &v32);
    WindowListForDesktopCanFail = v32;
    if ( !v32 )
    {
      v31 = 3621;
      goto LABEL_3;
    }
  }
  if ( v34 == *(struct CWindowData **)WindowListForDesktopCanFail )
    goto LABEL_5;
  v12 = *(struct CWindowData **)v34;
  v13 = (struct CWindowData **)*((_QWORD *)v34 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v34 + 8LL) != v34
    || *v13 != v34
    || (*v13 = v12,
        *((_QWORD *)v12 + 1) = v13,
        v14 = v34,
        v15 = *(_QWORD *)WindowListForDesktopCanFail,
        *(struct CProjectedShadowScene **)(*(_QWORD *)WindowListForDesktopCanFail + 8LL) != WindowListForDesktopCanFail) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v34 = v15;
  *((_QWORD *)v14 + 1) = WindowListForDesktopCanFail;
  *(_QWORD *)(v15 + 8) = v14;
  *(_QWORD *)WindowListForDesktopCanFail = v14;
  if ( v12 )
  {
    if ( v12 != v11 )
    {
      inserted = CWindowList::ReevaluateAutoParenting(this, v12, 0);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v31 = 3635;
LABEL_19:
        v8 = inserted;
        goto LABEL_4;
      }
    }
  }
  v17 = v34;
  if ( *((_QWORD *)v34 + 55) )
  {
    inserted = CWindowList::ReevaluateAutoParenting(this, v34, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v31 = 3642;
      goto LABEL_19;
    }
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)v34 + 17));
    inserted = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v34 + 56), 0);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v31 = 3646;
      goto LABEL_19;
    }
    inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 58)
                                                                       + 200LL))(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
                 v34);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v31 = 3647;
      goto LABEL_19;
    }
    v17 = v34;
    if ( v34 == *((struct CWindowData **)this + 87) && *((_QWORD *)this + 67) )
    {
      inserted = CWindowList::ZOrderAcrylicSheet(this);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v31 = 3652;
        goto LABEL_19;
      }
      v17 = v34;
    }
    if ( *((_QWORD *)v17 + 58) )
    {
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 144),
                   *((CMILRefCountBase ****)v17 + 58),
                   *((CMILRefCountBase ****)v17 + 55),
                   1);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v31 = 3658;
        goto LABEL_19;
      }
      v17 = v34;
    }
    v19 = *((_QWORD *)v17 + 55);
    if ( v19 && (*(_BYTE *)(v19 + 201) & 0x10) != 0 )
    {
      v32 = 0LL;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v32);
      ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                         this,
                                         *((_QWORD *)v34 + 17),
                                         0,
                                         &v32);
      v7 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, 0xE51u, 0LL);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v32);
        goto LABEL_5;
      }
      CProjectedShadowScene::WindowZOrderChanged(v32);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v32);
      v17 = v34;
    }
  }
  v21 = *((_QWORD *)v17 + 75);
  if ( v21 && *(_DWORD *)(v21 + 632) > 1u )
  {
    v22 = 0LL;
    v23 = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v17 + 17));
    if ( v23 )
    {
      for ( i = *(struct _LIST_ENTRY **)v34; i != v23; i = i->Flink )
      {
        if ( i[37].Blink == (struct _LIST_ENTRY *)v21 )
        {
          v22 = i;
          break;
        }
      }
    }
    if ( !v22 )
    {
      if ( *(struct CWindowData **)(*(_QWORD *)(v21 + 608) + 8LL * (unsigned int)(*(_DWORD *)(v21 + 632) - 1)) == v34 )
        goto LABEL_5;
      DynArray<CStoryboard const *,0>::Remove((__int64 *)(v21 + 608), (__int64 *)&v34);
      v29 = *(_DWORD *)(v28 + 24);
      v30 = v29 + 1;
      if ( v29 + 1 < v29 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
        goto LABEL_5;
      }
      if ( v30 <= *(_DWORD *)(v28 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v28 + 8LL * *(unsigned int *)(v28 + 24)) = v34;
        *(_DWORD *)(v28 + 24) = v30;
        goto LABEL_5;
      }
      inserted = DynArrayImpl<0>::AddMultipleAndSet(v28, 8, 1, &v34);
      if ( inserted >= 0 )
        goto LABEL_5;
      v31 = 190;
      goto LABEL_19;
    }
    DynArray<CStoryboard const *,0>::Remove((__int64 *)(v21 + 608), (__int64 *)&v34);
    v27 = *(struct _LIST_ENTRY ***)v26;
    if ( *(_DWORD *)(v26 + 24) )
    {
      do
      {
        if ( v22 == *v27 )
          break;
        ++v6;
        ++v27;
      }
      while ( v6 < *(_DWORD *)(v26 + 24) );
    }
    DynArray<CWindowData *,0>::InsertAt(v26, (unsigned __int64)&v34, v6, v25);
  }
LABEL_5:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v33);
  return v7;
}
