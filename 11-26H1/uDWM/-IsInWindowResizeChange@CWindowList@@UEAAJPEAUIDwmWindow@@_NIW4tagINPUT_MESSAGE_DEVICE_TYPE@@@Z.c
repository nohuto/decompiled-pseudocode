/*
 * XREFs of ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E1A80
 * Callers:
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18007DD20 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindow3D@@W4ShellTransitionType@234@@Z @ 0x1800305E4 (-PreTransitionWithNativeWindow@TransitionManager@Transitions@Udwm@winrt@@QEAAJPEAVCTopLevelWindo.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z @ 0x1800D8E1C (-PostTransition@TransitionManager@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@234@@Z.c)
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800DFA18 (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::IsInWindowResizeChange(
        struct CWindowData **this,
        struct IDwmWindow *a2,
        char a3,
        int a4,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  char *v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  struct winrt::Udwm::Transitions::TransitionManager *v15; // rax
  struct winrt::Udwm::Transitions::TransitionManager *Current; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = v9;
  if ( v9 && (*(_BYTE *)(v9 + 742) & 2) != 0 )
    a3 = 0;
  if ( ((a5 - 4) & 0xFFFFFFFB) != 0 )
    goto LABEL_15;
  if ( !a3 )
  {
    if ( !v9 )
      goto LABEL_20;
    if ( (*(_BYTE *)(v9 + 741) & 0x10) == 0 )
      goto LABEL_16;
  }
  v11 = (char *)(this + 87);
  if ( !this[87] )
    CWindowList::GetSyncedWindowData((CWindowList *)this, a2, 1, this + 87);
  v12 = *(_QWORD *)v11;
  if ( !*(_QWORD *)v11 )
    goto LABEL_15;
  if ( ((*(_BYTE *)(v12 + 741) & 0x10) != 0) == a3 && v10 )
  {
LABEL_16:
    if ( (*(_DWORD *)(v10 + 744) & 0xFFF) == 0x5E )
    {
      if ( *((_BYTE *)this + 688) )
      {
        Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::PostTransition((__int64)Current, 6);
        *(_DWORD *)(v10 + 744) = *(_DWORD *)(v10 + 744) & 0x2000000 | 0xFFF;
        *((_BYTE *)this + 688) = 0;
      }
      else
      {
        *((_BYTE *)this + 688) = 1;
        v15 = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
        winrt::Udwm::Transitions::TransitionManager::PreTransitionWithNativeWindow(
          (__int64)v15,
          *(_QWORD *)(v10 + 448),
          6);
      }
    }
    goto LABEL_20;
  }
  *(_BYTE *)(v12 + 741) = (16 * a3) | *(_BYTE *)(v12 + 741) & 0xEF;
  *(_DWORD *)(*(_QWORD *)v11 + 848LL) = a4;
  v13 = CWindowList::ApplyWindowResizeStateTransition((CWindowList *)this);
  v14 = v13;
  if ( v13 >= 0 )
  {
LABEL_15:
    if ( v10 )
      goto LABEL_16;
LABEL_20:
    v14 = 0;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDD8,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v13);
LABEL_21:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v14;
}
