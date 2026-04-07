/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006590C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180031E4C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800332CC (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18003AC08 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *Flink; // rbx
  _DWORD *v7; // rbp
  int v8; // r14d
  CWindowData *v9; // rcx
  unsigned int i; // esi
  char ShouldCloneWindow; // al
  int v12; // eax
  _DWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  CWindowData *v15; // [rsp+70h] [rbp+8h] BYREF

  v14[0] = 10;
  v14[1] = 8;
  v4 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *(_QWORD *)(a1 + 192));
  Flink = WindowListForDesktop->Flink;
  while ( 2 )
  {
    if ( Flink != WindowListForDesktop )
    {
      v15 = (CWindowData *)Flink;
      v7 = v14;
      v8 = (int)Flink[8].Flink;
      v9 = (CWindowData *)Flink;
      for ( i = 0; ; ++i )
      {
        if ( i >= 2 )
          goto LABEL_7;
        if ( v8 == *v7 )
        {
          ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v9 + 5));
          v9 = v15;
          if ( ShouldCloneWindow )
          {
            if ( CWindowData::IsWindowVisibleAndUncloaked(v15) )
              break;
          }
        }
        ++v7;
      }
      if ( (unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, (__int64)v9)
        || (v12 = DynArray<CWindowData *,0>::AddMultipleAndSet(a2, &v15), v4 = v12, v12 >= 0) )
      {
LABEL_7:
        Flink = Flink->Flink;
        continue;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x2BBu, 0LL);
    }
    return v4;
  }
}
