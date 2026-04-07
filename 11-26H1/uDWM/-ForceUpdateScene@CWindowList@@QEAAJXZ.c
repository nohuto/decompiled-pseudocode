/*
 * XREFs of ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001E430 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800B3900 (-StartImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B3E70 (-StartImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4540 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800C2A80 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x1800E1760 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 * Callees:
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18001E940 (-ForceUpdateScene@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001EA70 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScene@CGlobalLightSet@@QEAAJXZ @ 0x18001EAF0 (-UpdateScene@CGlobalLightSet@@QEAAJXZ.c)
 *     ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z @ 0x18001EB20 (-SynchronizedCommit@CCompositor@@QEAAJPEAX@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18001EB40 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180086EF8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ForceUpdateScene(CWindowList *this)
{
  CWindowList *v1; // rdi
  CDesktopManager *v2; // rcx
  CDesktopManager *v3; // rbx
  __int64 v4; // r14
  __int64 i; // rsi
  CDesktopManager *v6; // rcx
  _QWORD *j; // rbx
  struct CVisual *v8; // rdx
  struct CVisual *v9; // rdx
  CGlobalLightSet *v10; // rcx
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v12; // r9
  __int64 v13; // rax
  struct CVisual *v14; // rdx
  struct CVisual *v15; // rdx
  void *v16; // rdx
  int v17; // eax
  int v18; // esi
  void *v19; // r14
  int v20; // eax
  void *v21; // rdx
  int v22; // ebx
  CDesktopManager *v24; // rcx
  CDesktopManager *v25; // rcx
  int v26; // r8d
  DWORD LastError; // ebx
  int v28; // [rsp+20h] [rbp-58h]
  PVOID RestartKey; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+40h] [rbp-38h]
  CWindowList *v32; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = this;
  v32 = this;
  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RestartKey = 0LL;
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  v4 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  v30 = v4;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 310); i = (unsigned int)(i + 1) )
    CDesktopManager::UpdateSceneImpl(v2, *(struct CVisual **)(*((_QWORD *)v3 + 152) + 8 * i));
  for ( j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &RestartKey);
        j;
        j = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &RestartKey) )
  {
    v8 = (struct CVisual *)j[3];
    if ( v8 )
      CDesktopManager::UpdateSceneImpl(v6, v8);
    v9 = (struct CVisual *)j[5];
    if ( v9 )
      CDesktopManager::UpdateSceneImpl(v6, v9);
    v10 = (CGlobalLightSet *)j[7];
    if ( v10 )
      CGlobalLightSet::UpdateScene(v10);
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    winrt::Udwm::Transitions::TransitionManager::ForceUpdateScene(Current);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1B86,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v12);
    v4 = v30;
    v1 = v32;
  }
  v13 = *((_QWORD *)v1 + 68);
  if ( v13 )
  {
    v14 = *(struct CVisual **)(v13 + 48);
    if ( v14 )
      CDesktopManager::UpdateSceneImpl(v25, v14);
  }
  if ( v4 && *(_QWORD *)(v4 + 8) )
  {
    CWindowList::MoveTransitionAndTouchVisualToFront(v1);
    CDesktopManager::UpdateSceneImpl(v24, *(struct CVisual **)(v4 + 8));
  }
  v15 = (struct CVisual *)*((_QWORD *)v1 + 70);
  if ( v15 && *((_QWORD *)v15 + 3) )
    CDesktopManager::UpdateSceneImpl(v25, v15);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&CommitChannel_UpdateScene,
      v26,
      1,
      (__int64)&v32);
  v16 = (void *)*((_QWORD *)v1 + 77);
  if ( !v16 || v16 == (void *)-1LL )
    v16 = (void *)*((_QWORD *)v1 + 75);
  v17 = CCompositor::SynchronizedCommit(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), v16);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B9E,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v17,
      v28);
  *((_BYTE *)v1 + 634) = 0;
  CWindowList::CommitAndCloseResizeCompSyncObject(v1);
  v19 = (void *)*((_QWORD *)v1 + 77);
  if ( v19 && v19 != (void *)-1LL )
  {
    LastError = GetLastError();
    CloseHandle(v19);
    SetLastError(LastError);
  }
  *((_QWORD *)v1 + 77) = 0LL;
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL)
                                          + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                             + 32LL));
  v22 = v20;
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BA6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v20,
      v28);
  if ( v18 < 0 || v22 < 0 )
    wil::details::SetEvent(*(wil::details **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL), v21);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return 0LL;
}
