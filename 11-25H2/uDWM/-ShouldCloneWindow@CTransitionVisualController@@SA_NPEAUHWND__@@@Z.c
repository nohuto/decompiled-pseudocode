/*
 * XREFs of ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18006BB58
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800270F4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18006BA60 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180074584 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x180082534 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800D1864 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800D1CE8 (_lambda_d312cc5a8d717c33b98f354ae26b71f9_--operator().c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

char __fastcall CTransitionVisualController::ShouldCloneWindow(HWND hWnd)
{
  char v2; // bl
  CDesktopManager *v4; // rbp
  unsigned int i; // edi
  __int64 j; // rcx
  WCHAR *v7; // rdx
  int v8; // r8d
  int v9; // eax
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
             dword_1800F6988[4 * i],
             0) )
      {
        v10 = ClassName;
        do
        {
          v11 = *(WCHAR *)((char *)v10 + (char *)(&off_1800F6980)[2 * i] - (char *)ClassName);
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
      v7 = ClassName;
      do
      {
        v8 = *(WCHAR *)((char *)v7 + (char *)off_1800F69E0[j] - (char *)ClassName);
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        return 0;
    }
  }
  return v2;
}
