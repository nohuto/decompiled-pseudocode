/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032004
 * Callers:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180031F90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800C22A0 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800C2320 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x1800C23A0 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800C2460 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ @ 0x1800C42E4 (-_NotifyStoryboardTimeout@CStoryboard@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x1800321C8 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032AB8 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18003ABE0 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18003B008 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(CStoryboard *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  char v6; // di
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int i; // ebx
  CTransitionVisualController *v10; // rcx
  __int64 v11; // r14
  struct CTransitionWindowSnapshot *v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v13 = 0;
  v14 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v14) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 96LL);
    if ( (v5 == -1 || v5 == v14)
      && *(_DWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4) )
    {
      v6 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               v14);
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( (GetWindowLongPtrW((HWND)Blink[2].Blink, -16) & 0x10000000) != 0
          || ((__int64)Blink[46].Blink & 0x20000000) == 0 )
        {
          v6 = CStoryboard::_InvokeWindowEnumCallback(a1, Blink, a2, &v13);
        }
        Blink = Blink->Blink;
      }
      while ( v6 );
      for ( i = 0; v6; ++i )
      {
        v10 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
        if ( i >= *((_DWORD *)v10 + 20) )
          break;
        v12 = 0LL;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v10, i, &v12) >= 0 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)v12 + 26) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v11 + 40)) )
            v6 = CStoryboard::_InvokeWindowEnumCallback(a1, v11, a2, &v13);
        }
      }
    }
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x1574u,
      0LL);
  }
  result = (unsigned int)v13;
  if ( v13 < 0 )
  {
    CStoryboard::Abandon(a1);
    return (unsigned int)v13;
  }
  return result;
}
