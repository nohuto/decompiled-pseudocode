/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001BE20 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035EF8 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B410 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800595D0 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18006FC10 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x18007C6F4 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 *     ?WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ @ 0x1800BE160 (-WindowZOrderChanged@CProjectedShadowScene@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::ZOrder(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  char *v8; // rax
  struct CWindowData *v9; // rbx
  struct CWindowData *v10; // rax
  struct CWindowData *v11; // rdx
  struct CWindowData **v12; // r8
  struct CWindowData *v13; // rcx
  struct CWindowData *v14; // r8
  int inserted; // eax
  struct CWindowData *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  struct _LIST_ENTRY *v22; // r12
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  struct CWindowData *v24; // r9
  struct _LIST_ENTRY *i; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // rdx
  struct _LIST_ENTRY **v30; // rax
  unsigned int v31; // ecx
  int v32; // r9d
  unsigned int v33; // edx
  int ProjectedShadowSceneForDesktop; // eax
  bool v35; // [rsp+20h] [rbp-49h]
  unsigned int v36; // [rsp+20h] [rbp-49h]
  struct CWindowData *v37[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-29h] BYREF
  __int64 v39; // [rsp+48h] [rbp-21h]
  __int128 v40; // [rsp+50h] [rbp-19h]
  __int128 v41; // [rsp+60h] [rbp-9h]
  __int128 v42; // [rsp+70h] [rbp+7h]
  __int64 v43; // [rsp+80h] [rbp+17h]
  char v44; // [rsp+88h] [rbp+1Fh]
  __int128 v45; // [rsp+90h] [rbp+27h]
  struct CWindowData *v46; // [rsp+E8h] [rbp+7Fh] BYREF

  v37[1] = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0;
  v46 = 0LL;
  CWindowList::GetSyncedWindowData(this, a2, 1, &v46);
  if ( !v46 )
  {
    v36 = 3886;
LABEL_59:
    v32 = -2147024890;
    v7 = -2147024890;
    goto LABEL_47;
  }
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = -1LL;
  v44 = 0;
  v45 = 0LL;
  Buffer = *((_QWORD *)v46 + 17);
  v8 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  v9 = (struct CWindowData *)(v8 + 80);
  if ( !v8 )
    v9 = 0LL;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xF31u, 0LL);
    goto LABEL_25;
  }
  v10 = v9;
  v37[0] = v9;
  if ( a3 )
  {
    CWindowList::GetSyncedWindowData(this, a3, 1, v37);
    v10 = v37[0];
    if ( !v37[0] )
    {
      v36 = 3900;
      goto LABEL_59;
    }
  }
  if ( v46 == *(struct CWindowData **)v10 )
    goto LABEL_25;
  v11 = *(struct CWindowData **)v46;
  v12 = (struct CWindowData **)*((_QWORD *)v46 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v46 + 8LL) != v46
    || *v12 != v46
    || (*v12 = v11,
        *((_QWORD *)v11 + 1) = v12,
        v13 = v46,
        v14 = *(struct CWindowData **)v10,
        *(struct CWindowData **)(*(_QWORD *)v10 + 8LL) != v10) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v46 = v14;
  *((_QWORD *)v13 + 1) = v10;
  *((_QWORD *)v14 + 1) = v13;
  *(_QWORD *)v10 = v13;
  if ( v11 )
  {
    if ( v11 != v9 )
    {
      inserted = CWindowList::ReevaluateAutoParenting(this, v11, 0);
      v7 = inserted;
      if ( inserted < 0 )
      {
        v36 = 3914;
        goto LABEL_46;
      }
    }
  }
  v16 = v46;
  if ( *((_QWORD *)v46 + 55) )
  {
    inserted = CWindowList::ReevaluateAutoParenting(this, v46, 1);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v36 = 3921;
      goto LABEL_46;
    }
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = -1LL;
    v44 = 0;
    v45 = 0LL;
    Buffer = *((_QWORD *)v46 + 17);
    v17 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
    if ( v17 )
      v18 = v17[3];
    else
      v18 = 0LL;
    inserted = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v46 + 56), 0);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v36 = 3925;
      goto LABEL_46;
    }
    inserted = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 59)
                                                                       + 192LL))(
                 *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
                 v46);
    v7 = inserted;
    if ( inserted >= 0 )
    {
      v16 = v46;
      if ( v46 == *((struct CWindowData **)this + 87) && *((_QWORD *)this + 67) )
      {
        inserted = CWindowList::ZOrderAcrylicSheet(this);
        v7 = inserted;
        if ( inserted < 0 )
        {
          v36 = 3931;
          goto LABEL_46;
        }
        v16 = v46;
      }
      if ( *((_QWORD *)v16 + 58) )
      {
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(v18 + 136),
                     *((struct CVisual **)v16 + 58),
                     *((struct CVisual **)v16 + 55),
                     1,
                     v35);
        v7 = inserted;
        if ( inserted < 0 )
        {
          v36 = 3937;
          goto LABEL_46;
        }
        v16 = v46;
      }
      v19 = *((_QWORD *)v16 + 55);
      if ( v19 && (*(_BYTE *)(v19 + 185) & 8) != 0 )
      {
        v37[0] = 0LL;
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v37);
        ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                           this,
                                           *((_QWORD *)v46 + 17),
                                           0,
                                           v37);
        v7 = ProjectedShadowSceneForDesktop;
        if ( ProjectedShadowSceneForDesktop < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProjectedShadowSceneForDesktop, 0xF68u, 0LL);
          Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v37);
          goto LABEL_25;
        }
        CProjectedShadowScene::WindowZOrderChanged(v37[0]);
        Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(v37);
        v16 = v46;
      }
      goto LABEL_24;
    }
    v36 = 3926;
LABEL_46:
    v32 = inserted;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v36, 0LL);
    goto LABEL_25;
  }
LABEL_24:
  v20 = *((_QWORD *)v16 + 75);
  if ( v20 && *(_DWORD *)(v20 + 632) > 1u )
  {
    v22 = 0LL;
    WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(this, *((_QWORD *)v16 + 17));
    v24 = v46;
    if ( WindowListForDesktopCanFail )
    {
      for ( i = *(struct _LIST_ENTRY **)v46; i != WindowListForDesktopCanFail; i = i->Flink )
      {
        if ( i[37].Blink == (struct _LIST_ENTRY *)v20 )
        {
          v22 = i;
          break;
        }
      }
    }
    v26 = *(_QWORD *)(v20 + 608);
    if ( v22 )
    {
      v27 = 0LL;
      v28 = *(_DWORD *)(v20 + 632);
      if ( v28 )
      {
        do
        {
          if ( v46 == *(struct CWindowData **)(v26 + 8 * v27) )
            break;
          v27 = (unsigned int)(v27 + 1);
        }
        while ( (unsigned int)v27 < v28 );
      }
      if ( (unsigned int)v27 < v28 )
      {
        if ( (unsigned int)v27 < v28 - 1 )
        {
          do
          {
            v29 = (unsigned int)(v27 + 1);
            *(_QWORD *)(v26 + 8 * v27) = *(_QWORD *)(v26 + 8 * v29);
            v27 = v29;
          }
          while ( (unsigned int)v29 < *(_DWORD *)(v20 + 632) - 1 );
        }
        --*(_DWORD *)(v20 + 632);
      }
      v30 = *(struct _LIST_ENTRY ***)(v20 + 608);
      v31 = *(_DWORD *)(v20 + 632);
      if ( v31 )
      {
        do
        {
          if ( v22 == *v30 )
            break;
          ++v6;
          ++v30;
        }
        while ( v6 < v31 );
      }
      DynArray<CWindowData *,0>::InsertAt(v20 + 608, &v46, v6, v24);
    }
    else
    {
      v33 = *(_DWORD *)(v20 + 632);
      if ( *(struct CWindowData **)(v26 + 8LL * (v33 - 1)) != v46 )
      {
        if ( v33 )
        {
          do
          {
            if ( v46 == *(struct CWindowData **)(v26 + 8LL * v6) )
              break;
            ++v6;
          }
          while ( v6 < v33 );
        }
        if ( v6 < v33 )
        {
          while ( v6 < v33 - 1 )
          {
            *(_QWORD *)(v26 + 8LL * v6) = *(_QWORD *)(v26 + 8LL * (v6 + 1));
            ++v6;
            v33 = *(_DWORD *)(v20 + 632);
          }
          *(_DWORD *)(v20 + 632) = v33 - 1;
        }
        DynArray<CWindowData *,0>::AddMultipleAndSet(v20 + 608, &v46, v26, v24);
      }
    }
  }
LABEL_25:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
