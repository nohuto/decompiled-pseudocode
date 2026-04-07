/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18007A330
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18001C540 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180024FD0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18002785C (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180029EA8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18002A3C0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18002C2B4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180038ADC (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18004BA08 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x1800515EC (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180065BD0 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006C2D0 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ @ 0x180070A30 (-IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180070CC0 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800711B0 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x180076E40 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z @ 0x18007B2B8 (-UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18007C6F0 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18007E364 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z @ 0x1800875D0 (-SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z.c)
 *     ?SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180088AB8 (-SkipAnimationDelays@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18008A5DC (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008DEB4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND__@@@Z @ 0x18008EED4 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@Transitions@Udwm@winrt@@QEAAXPEAUHWND.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowSnapSignalReceived@UDwmTrace@@SAXXZ @ 0x180096DAC (-WindowSnapSignalReceived@UDwmTrace@@SAXXZ.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A3284 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800AAD34 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800AAF14 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x1800E2F44 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z @ 0x1800E3374 (-ChangeCursorSynchronization@CWindowList@@QEAAJ_N@Z.c)
 *     ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z @ 0x1800E3424 (-ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x1800E3BF8 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800E59B8 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x1800E62E8 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z @ 0x1800E6498 (-OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x1800E68AC (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800E69A8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800E7430 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(
        __int64 a1,
        const struct std::nothrow_t *a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  int v6; // edi
  unsigned int v8; // ebx
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v16; // r9d
  int updated; // eax
  int v18; // eax
  struct CMagnifierControl *v19; // rax
  char v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  struct CMagnifierControl *v24; // rax
  char v25; // r9
  int v26; // eax
  struct CMagnifierControl *v27; // rax
  char v28; // r9
  int v29; // eax
  struct CMagnifierControl *v30; // rax
  char v31; // r9
  int v32; // eax
  struct CMagnifierControl *v33; // rax
  char v34; // r9
  int v35; // eax
  struct CMagnifierControl *v36; // rax
  char v37; // r9
  int v38; // eax
  struct CMagnifierControl *v39; // rax
  char v40; // r9
  int v41; // eax
  winrt::Udwm::Transitions::TransitionManager *v42; // rax
  struct CMagnifierControl *v43; // rax
  char v44; // r9
  int v45; // eax
  struct CMagnifierControl *v46; // rax
  char v47; // r9
  int v48; // eax
  struct CMagnifierControl *v49; // rax
  char v50; // r9
  int v51; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  char v53; // r9
  int v54; // eax
  const struct std::nothrow_t *v55; // rdx
  __int64 v56; // rcx
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  unsigned int v58; // [rsp+20h] [rbp-38h]
  unsigned int v59; // [rsp+20h] [rbp-38h]
  __int64 v60; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (int)a2;
  v8 = -2147467263;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) )
    return 0;
  if ( (_DWORD)a2 == 1073741851 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    switch ( (_DWORD)a2 )
    {
      case 0x40000025:
        v10 = CWindowList::StartupBegin((CWindowList *)a1);
        v8 = v10;
        if ( v10 >= 0 )
          return v8;
        v59 = 587;
        goto LABEL_82;
      case 0x40000026:
        v10 = CWindowList::StartupEnd((CWindowList *)a1);
        v8 = v10;
        if ( v10 >= 0 )
          return v8;
        v59 = 591;
        goto LABEL_82;
      case 0x4000002F:
        if ( a4 != 8 )
          return v8;
        v10 = CWindowList::SettingsChange(
                (CWindowList *)a1,
                (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
        v8 = v10;
        if ( v10 >= 0 )
          return v8;
        v59 = 597;
        goto LABEL_82;
      case 0x40000043:
        if ( a4 != 12 )
          return v8;
        CContactManager::OnShowContact(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
        return 0;
      case 0x40000044:
        if ( a4 != 20 )
          return v8;
        CContactManager::OnTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
          (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
        return 0;
      case 0x4000004A:
        if ( a4 != 8 )
          return v8;
        CWindowList::EndTransition(
          CDesktopManager::s_pDesktopManagerInstance,
          (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      case 0x40000055:
        if ( a4 != 12 )
          return v8;
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
          *(HWND *)(a3 + 4));
        return 0;
    }
    if ( (_DWORD)a2 != 1073741954 )
      return v8;
    if ( a4 != 8 )
    {
      v16 = -2003303421;
      v8 = -2003303421;
      v59 = 638;
      goto LABEL_83;
    }
    return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
  }
  if ( (int)a2 > 1073741930 )
  {
    if ( (int)a2 > 1073741940 )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x40000075:
          if ( a4 != 20 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 481;
            goto LABEL_83;
          }
          v10 = CWindowList::OnSnapPreviewInsertAfterNotification(
                  (CWindowList *)a1,
                  *(HWND *)(a3 + 4),
                  *(HWND *)(a3 + 12));
          v8 = v10;
          if ( v10 >= 0 )
            return v8;
          v59 = 482;
          goto LABEL_82;
        case 0x40000076:
          if ( a4 != 16 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 488;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v56 = *(unsigned int *)(a3 + 12);
          if ( (_DWORD)v56 )
          {
            if ( (_DWORD)v56 == 1 )
            {
              Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v56, v55);
              winrt::Udwm::Transitions::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange(
                Current,
                *(HWND *)(a3 + 4));
            }
            else
            {
              v8 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1F9u, 0LL);
            }
          }
          else
          {
            UDwmTrace::WindowSnapSignalReceived();
            *(_BYTE *)(a1 + 674) = 1;
            *(_QWORD *)(a1 + 680) = *(_QWORD *)(a3 + 4);
          }
          break;
        case 0x40000077:
          if ( a4 != 24 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 390;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 53));
          if ( MagnifierControlForDesktop )
          {
            v54 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)MagnifierControlForDesktop, v6, a3, v53);
            v8 = v54;
            if ( v54 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0x18Fu, 0LL);
          }
          break;
        case 0x40000078:
          if ( a4 != 16 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 406;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v49 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v49 )
          {
            v51 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v49, v6, a3, v50);
            v8 = v51;
            if ( v51 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x19Fu, 0LL);
          }
          break;
        case 0x4000007B:
          if ( a4 != 112 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 422;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v46 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v46 )
          {
            v48 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v46, v6, a3, v47);
            v8 = v48;
            if ( v48 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x1B0u, 0LL);
          }
          break;
        case 0x4000007C:
          if ( a4 != 24 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 439;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v43 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v43 )
          {
            v45 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v43, v6, a3, v44);
            v8 = v45;
            if ( v45 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x1C1u, 0LL);
          }
          break;
        default:
          if ( (_DWORD)a2 == 1073741950 && a4 == 4 )
          {
            try
            {
              v42 = winrt::Udwm::Transitions::TransitionManager::GetCurrent((unsigned int)((_DWORD)a2 - 1073741948), a2);
              winrt::Udwm::Transitions::TransitionManager::SkipAnimationDelays(v42);
              v8 = 0;
            }
            catch ( ... )
            {
              return (unsigned int)-2147467259;
            }
          }
          return v8;
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case 0x40000074:
          if ( a4 != 24 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 475;
            goto LABEL_83;
          }
          v10 = CWindowList::OnDwmShrinkMoveSizeWindowNotification(
                  (CWindowList *)a1,
                  *(HWND *)(a3 + 4),
                  *(_DWORD *)(a3 + 12),
                  *(struct tagPOINT *)(a3 + 16));
          v8 = v10;
          if ( v10 >= 0 )
            return v8;
          v59 = 476;
          goto LABEL_82;
        case 0x4000006B:
          if ( a4 != 20 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 294;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v39 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v39 )
          {
            v41 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v39, 1073741931, a3, v40);
            v8 = v41;
            if ( v41 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x12Fu, 0LL);
          }
          break;
        case 0x4000006C:
          if ( a4 != 120 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 310;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v36 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v36 )
          {
            v38 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v36, v6, a3, v37);
            v8 = v38;
            if ( v38 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x13Fu, 0LL);
          }
          break;
        case 0x4000006D:
          if ( a4 != 232 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 326;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v33 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v33 )
          {
            v35 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v33, v6, a3, v34);
            v8 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x14Fu, 0LL);
          }
          break;
        case 0x4000006E:
          if ( a4 != 232 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 342;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v30 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v30 )
          {
            v32 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v30, v6, a3, v31);
            v8 = v32;
            if ( v32 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x15Fu, 0LL);
          }
          break;
        case 0x40000071:
          if ( a4 != 112 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 358;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v27 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v27 )
          {
            v29 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v27, v6, a3, v28);
            v8 = v29;
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x16Fu, 0LL);
          }
          break;
        case 0x40000072:
          if ( a4 != 28 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 374;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v24 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                           + 53));
          if ( v24 )
          {
            v26 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v24, v6, a3, v25);
            v8 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x17Fu, 0LL);
          }
          break;
        case 0x40000073:
          v22 = *(_DWORD *)(a3 + 4);
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
              {
                v16 = -2147024809;
                v8 = -2147024809;
                v59 = 469;
                goto LABEL_83;
              }
              v10 = CWindowList::OnWindowArrangementEnd((CWindowList *)a1);
              v8 = v10;
              if ( v10 >= 0 )
                return v8;
              v59 = 466;
            }
            else
            {
              v10 = CWindowList::OnWindowArrangementContinue(
                      (CWindowArrangementTransition **)a1,
                      (const struct tagRECT *)a3);
              v8 = v10;
              if ( v10 >= 0 )
                return v8;
              v59 = 463;
            }
          }
          else
          {
            v10 = CWindowList::OnWindowArrangementStart(
                    (CWindowList *)a1,
                    (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
            v8 = v10;
            if ( v10 >= 0 )
              return v8;
            v59 = 460;
          }
          goto LABEL_82;
        default:
          return v8;
      }
    }
    goto LABEL_89;
  }
  if ( (_DWORD)a2 == 1073741930 )
  {
    if ( a4 != 24 )
    {
      v16 = -2003303421;
      v8 = -2003303421;
      v59 = 278;
      goto LABEL_83;
    }
    v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v19 = CWindowList::GetMagnifierControlForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
    if ( v19 )
    {
      v21 = CMagnifierControl::OnMagnifierApiMessage((unsigned __int64)v19, 1073741930, a3, v20);
      v8 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x11Fu, 0LL);
    }
    goto LABEL_89;
  }
  if ( (int)a2 > 1073741880 )
  {
    if ( (_DWORD)a2 == 1073741887 )
    {
      if ( a4 != 56 )
        return v8;
      v10 = CContactManager::OnContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
      v8 = v10;
      if ( v10 >= 0 )
        return v8;
      v59 = 166;
      goto LABEL_82;
    }
    if ( (_DWORD)a2 == 1073741888 )
    {
      if ( a4 - 21 > 0x13D7 )
        return v8;
      if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
        return v8;
      if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
        return v8;
      v10 = CContactManager::OnMultiContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
      v8 = v10;
      if ( v10 >= 0 )
        return v8;
      v59 = 189;
      goto LABEL_82;
    }
    if ( (_DWORD)a2 == 1073741905 )
    {
      if ( a4 == 28 )
      {
        CWindowList::RegisterSharedVirtualDesktopVisual(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
          *(HWND *)(a3 + 4),
          *(union _LARGE_INTEGER *)(a3 + 12),
          *(void **)(a3 + 20));
        return v8;
      }
      v16 = -2003303421;
      v8 = -2003303421;
      v59 = 512;
    }
    else if ( (_DWORD)a2 == 1073741913 )
    {
      if ( a4 == 28 )
      {
        CWindowList::SetTaggedWindowRect(
          (CWindowList *)a1,
          (const struct MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT *)a3);
        return v8;
      }
      v16 = -2003303421;
      v8 = -2003303421;
      v59 = 547;
    }
    else
    {
      if ( (_DWORD)a2 != 1073741914 )
      {
        if ( (_DWORD)a2 == 1073741920 )
        {
          if ( a4 != 8 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 561;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v18 = CWindowList::ChangeCursorSynchronization(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                  *(_DWORD *)(a3 + 4) != 0);
          v8 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x234u, 0LL);
        }
        else
        {
          if ( (_DWORD)a2 != 1073741921 )
            return v8;
          if ( a4 != 12 )
          {
            v16 = -2003303421;
            v8 = -2003303421;
            v59 = 571;
            goto LABEL_83;
          }
          v61 = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          updated = CWindowList::UpdateCursorPosition(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                      (const struct tagPOINT *)(a3 + 4));
          v8 = updated;
          if ( updated >= 0 )
          {
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
            return v8;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x23Eu, 0LL);
        }
LABEL_89:
        CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&v61);
        return v8;
      }
      if ( a4 == 12 )
      {
        CWindowList::ClearTaggedWindowRect(
          (CWindowList *)a1,
          (const struct MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT *)a3);
        return v8;
      }
      v16 = -2003303421;
      v8 = -2003303421;
      v59 = 554;
    }
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v59, 0LL);
    return v8;
  }
  switch ( (_DWORD)a2 )
  {
    case 0x40000038:
      if ( a4 != 8 )
        return v8;
      return (unsigned int)CWindowList::RotationModeChange(
                             (CWindowList *)a1,
                             (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
    case 0x40000008:
      if ( a4 != 28 )
        return v8;
      return (unsigned int)CWindowList::IconChange(
                             (CWindowList *)a1,
                             (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
    case 0x4000000D:
      if ( a4 != 20 )
        return v8;
      CWindowList::ShellWindowChange(
        (CWindowList *)a1,
        (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
      return 0;
    case 0x4000000E:
      if ( a4 != 12 )
        return v8;
      return (unsigned int)CWindowList::DesktopCreate(
                             (CWindowList *)a1,
                             (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
    case 0x40000010:
      if ( a4 != 12 )
        return v8;
      CWindowList::DesktopFree((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
      return 0;
    case 0x40000017:
      return 0;
    case 0x4000002B:
      if ( a4 <= 0x18 || *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < *(_DWORD *)(a3 + 20) + 24 || *(_DWORD *)(a3 + 4) )
        return v8;
      return (unsigned int)CWindowList::SetWindowAttribute(
                             (CWindowList *)a1,
                             (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
    case 0x4000002D:
      if ( a4 != 16 )
        return v8;
      CWindowList::AnimationChange((CWindowList *)a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      return 0;
  }
  if ( (_DWORD)a2 != 1073741873 )
    return v8;
  v61 = 0LL;
  GetDesktopID(1LL);
  v10 = CDesktopManager::SendSwitchModeCommand(0LL);
  v8 = v10;
  if ( v10 < 0 )
  {
    v59 = 532;
LABEL_82:
    v16 = v10;
    goto LABEL_83;
  }
  if ( CCompositor::IsRemoteTreeEnabled(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6)) )
    return v8;
  v60 = 0LL;
  v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 6)
                                                              + 32LL);
  v60 = 0LL;
  v12 = (**v11)(v11, &GUID_7bd36c9a_56ee_4fdd_ac4e_76bbd16ec8e4, &v60);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 192LL))(v60);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 32LL)
                                              + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 6)
                                                                 + 32LL));
      v13 = v12;
      if ( v12 >= 0 )
      {
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v60);
        return v8;
      }
      v14 = 539LL;
    }
    else
    {
      v14 = 538LL;
    }
  }
  else
  {
    v14 = 537LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v12,
    v58);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v60);
  return v13;
}
