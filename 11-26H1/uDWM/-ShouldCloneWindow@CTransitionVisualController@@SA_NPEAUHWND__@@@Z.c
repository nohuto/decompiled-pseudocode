/*
 * XREFs of ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18003A69C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x180042D5C (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 *     _CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator() @ 0x180045B44 (_CTransitionVisualController--_StageCloneWithOwnedWindows_--_2_--_lambda_1_--operator().c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18006590C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___ @ 0x1800CE0AC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetClonableOwnedWi.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_RecursivelyRenderOwnedWindows_::_5_::_lambda_1___ @ 0x1800CE338 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_RecursivelyRender.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800449FC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

char __fastcall CTransitionVisualController::ShouldCloneWindow(HWND hWnd)
{
  char v2; // bl
  CDesktopManager *v4; // rbp
  unsigned int i; // edi
  WCHAR *v6; // rdx
  int v7; // r8d
  int v8; // eax
  __int64 j; // rcx
  WCHAR *v10; // rax
  int v11; // edx
  int v12; // ecx
  struct tagRECT Rect; // [rsp+20h] [rbp-248h] BYREF
  WCHAR ClassName[264]; // [rsp+30h] [rbp-238h] BYREF

  Rect = 0LL;
  v2 = 1;
  if ( GetWindowRect(hWnd, &Rect) && IsRectEmpty(&Rect) )
    return 0;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    for ( i = 0; i < 6; ++i )
    {
      if ( CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)v4 + 23),
             0LL,
             dword_1800F22B8[4 * i],
             0) )
      {
        v10 = ClassName;
        do
        {
          v11 = *(WCHAR *)((char *)v10 + (char *)(&off_1800F22B0)[2 * i] - (char *)ClassName);
          v12 = *v10 - v11;
          if ( v12 )
            break;
          ++v10;
        }
        while ( v11 );
        if ( !v12 )
          return v2;
      }
    }
    for ( j = 0LL; (unsigned int)j < 0xC; j = (unsigned int)(j + 1) )
    {
      v6 = ClassName;
      do
      {
        v7 = *(WCHAR *)((char *)v6 + (char *)off_1800F2330[j] - (char *)ClassName);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
        return 0;
    }
  }
  return v2;
}
