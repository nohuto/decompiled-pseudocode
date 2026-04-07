/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180074584
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180025784 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800275F8 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800527C0 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18006BB58 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // rsi
  CWindowData *v8; // rcx
  _DWORD *v9; // rbp
  unsigned int v10; // edi
  int v11; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // edi
  unsigned int v16; // eax
  _DWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF
  CWindowData *v19; // [rsp+70h] [rbp+8h] BYREF

  v18[0] = 10;
  v3 = *(_QWORD *)(a1 + 248);
  v18[1] = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           v3);
  Flink = WindowListForDesktop->Flink;
  while ( 2 )
  {
    if ( Flink != WindowListForDesktop )
    {
      v8 = (CWindowData *)Flink;
      v9 = v18;
      v19 = (CWindowData *)Flink;
      v10 = 0;
      v11 = (int)Flink[8].Flink;
      while ( 1 )
      {
        if ( v10 >= 2 )
          goto LABEL_14;
        if ( v11 == *v9 )
        {
          ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v8 + 5));
          v8 = v19;
          if ( ShouldCloneWindow )
          {
            if ( CWindowData::IsWindowVisibleAndUncloaked(v19) )
              break;
          }
        }
        ++v10;
        ++v9;
      }
      if ( (unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, (__int64)v8) )
      {
LABEL_14:
        Flink = Flink->Flink;
        continue;
      }
      v13 = *(_DWORD *)(a2 + 24);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v5 = -2147024362;
        v16 = 179;
        v15 = -2147024362;
      }
      else
      {
        v15 = 0;
        if ( v14 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v19;
          *(_DWORD *)(a2 + 24) = v14;
LABEL_13:
          v5 = v15;
          goto LABEL_14;
        }
        v15 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v19);
        v5 = v15;
        if ( v15 >= 0 )
          goto LABEL_13;
        v16 = 190;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v16, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x2C5u, 0LL);
    }
    return v5;
  }
}
