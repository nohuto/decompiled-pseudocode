/*
 * XREFs of ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18035716C
 * Callers:
 *     ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180354CC0 (-StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180319310 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x18033D2E8 (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x18033DB50 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V-$_.c)
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x18033F77C (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 *     ??$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@?$vector@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@QEAAAEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@AEAPEAUHWINEVENTHOOK__@@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F940 (--$emplace_back@AEAPEAUHWINEVENTHOOK__@@PEAVGamingOverlayExperienceManager@@@-$vector@U-$OwnedHW.c)
 */

// Hidden C++ exception states: #wind=2
LRESULT __fastcall GamingOverlayExperienceManager::WndProc(
        GamingOverlayExperienceManager *this,
        HWND a2,
        UINT a3,
        HWND a4,
        LPARAM lParam)
{
  DWORD idThread; // r15d
  DWORD *v11; // rbx
  const char *v12; // r9
  const char *v13; // r9
  bool v14; // r8
  __int64 v15; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rax
  void *v18; // rbx
  const char *idProcess; // [rsp+20h] [rbp-F8h]
  HWINEVENTHOOK v20; // [rsp+40h] [rbp-D8h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-D0h] BYREF
  ULONG_PTR v22; // [rsp+50h] [rbp-C8h]
  __int64 v23; // [rsp+58h] [rbp-C0h]
  bool v24; // [rsp+60h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION v25; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+90h] [rbp-88h]
  struct tagRECT Rect; // [rsp+98h] [rbp-80h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+A8h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v25.OwningThread = a4;
  if ( a3 == 1025 )
  {
    LODWORD(v25.OwningThread) = 0;
    idThread = GetWindowThreadProcessId(a4, (LPDWORD)&v25.OwningThread);
    if ( idThread )
    {
      *(_OWORD *)&v25.LockSemaphore = 0LL;
      v26 = 0LL;
      v11 = (DWORD *)&unk_18079C310;
      try
      {
        while ( v11 != (DWORD *)&unk_18079C328 )
        {
          v20 = SetWinEventHook(
                  *v11,
                  *v11,
                  0LL,
                  (WINEVENTPROC)GamingOverlayExperienceManager::StaticWinEventProc,
                  (DWORD)v25.OwningThread,
                  idThread,
                  0);
          if ( v20 )
          {
            v25.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)this;
            std::vector<OwnedHWinEventHook<GamingOverlayExperienceManager>>::emplace_back<HWINEVENTHOOK__ * &,GamingOverlayExperienceManager *>(
              &v25.LockSemaphore,
              (__int64 *)&v20,
              &v25);
          }
          else
          {
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x32A,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
              v12);
          }
          ++v11;
        }
        memset(&wndpl, 0, sizeof(wndpl));
        wndpl.length = 44;
        GetWindowPlacement(a2, &wndpl);
        Rect = 0LL;
        if ( !GetWindowRect(a2, &Rect) )
          wil::details::in1diag3::_Throw_GetLastError(
            retaddr,
            (void *)0x336,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            v13);
        v14 = wndpl.rcNormalPosition.left == Rect.left
           && wndpl.rcNormalPosition.top == Rect.top
           && wndpl.rcNormalPosition.right == Rect.right
           && wndpl.rcNormalPosition.bottom == Rect.bottom;
        v15 = v26;
        v26 = 0LL;
        SpinCount = v25.SpinCount;
        LockSemaphore = v25.LockSemaphore;
        *(_OWORD *)&v25.LockSemaphore = 0uLL;
        v21 = LockSemaphore;
        v22 = SpinCount;
        v23 = v15;
        v24 = v14;
        v20 = (HWINEVENTHOOK)a4;
        std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::emplace<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext>(
          (float *)this + 174,
          (__int64)&v25,
          (unsigned __int8 *)&v20,
          (__int64 *)&v21);
        v18 = v21;
        if ( v21 )
        {
          std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>((__int64)v21, v22);
          std::_Deallocate<16>(v18, (struct std::nothrow_t *)((v23 - (_QWORD)v18) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        if ( v25.LockSemaphore )
        {
          std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(
            (__int64)v25.LockSemaphore,
            v25.SpinCount);
          std::_Deallocate<16>(
            v25.LockSemaphore,
            (struct std::nothrow_t *)((v26 - (unsigned __int64)v25.LockSemaphore) & 0xFFFFFFFFFFFFFFF8uLL));
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtExceptionMsg(
          retaddr,
          (unsigned __int16 *)0x33E,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          "Exception in WM_HOOKWINEVENT handler",
          idProcess);
        return 0LL;
      }
      return 0LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31E,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80070057LL);
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  }
  if ( a3 != 1026 )
    return DefWindowProcW(a2, a3, (WPARAM)a4, lParam);
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Erase<unsigned __int64>(
    (_QWORD *)this + 87,
    (unsigned __int8 *)&v25.OwningThread);
  return 0LL;
}
