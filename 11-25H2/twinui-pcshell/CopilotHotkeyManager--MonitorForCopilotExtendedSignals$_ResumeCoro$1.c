/*
 * XREFs of CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x18060E000
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_InitCoro$2 @ 0x18060DF98 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_InitCoro$2.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C40C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802B277C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Smtx_lock_exclusive @ 0x1802D564C (_Smtx_lock_exclusive.c)
 *     _Smtx_unlock_exclusive @ 0x1802D565C (_Smtx_unlock_exclusive.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0GL@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GL@$$CBG@Z @ 0x1805F980C (--$CopilotHotkey_Output_Debug_String@AEAY0GL@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GL@$$C.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDD94 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805FE1A8 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ @ 0x18060DF64 (-Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ.c)
 *     ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x18060EE20 (-RestoreForeground@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ @ 0x18060F7BC (-TakeFocusAndHandleInputStream@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060FF38 (-TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@wi.c)
 *     ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806106A8 (-UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061162C (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@detail.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::MonitorForCopilotExtendedSignals__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // rdi
  char *v3; // rcx
  __int64 v4; // r8
  const WCHAR *v5; // rcx
  const char *v6; // [rsp+20h] [rbp-38h]
  const char *v7; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_13;
    case 2:
      v2 = *(_QWORD *)(a1 + 65);
      CopilotHotkeyManager::RestoreForeground((CopilotHotkeyManager *)v2);
      try
      {
        CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary((CopilotHotkeyManager *)v2);
        v3 = (char *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                         v2 + 432,
                         (__int64 *)(a1 + 16))
                    + 280);
        std::wstring::operator=(v3, (char *)(v2 + 192), v4);
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 16));
        if ( *(_QWORD *)(v2 + 208) && (*(_QWORD *)(v2 + 312) || *(_QWORD *)(v2 + 352)) )
        {
          CopilotHotkeyManager::TakeFocusAndHandleInputStream((CopilotHotkeyManager *)v2);
          if ( IsWindow(*(HWND *)(v2 + 112)) )
          {
            Smtx_lock_exclusive((_Smtx_t *)(v2 + 168));
            if ( SetTimer(*(HWND *)(v2 + 112), 0xC8uLL, 0x12Cu, 0LL) )
            {
              *(_WORD *)(v2 + 178) = 0;
              *(_BYTE *)(v2 + 176) = 0;
            }
            else
            {
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                            v2 + 432,
                            (__int64 *)(a1 + 48))
                       + 268) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 48));
              wil::details::in1diag3::Log_GetLastErrorMsg(
                retaddr,
                (void *)0x685,
                (__int64)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
                "Failed to set timer!",
                v6);
            }
            Smtx_unlock_exclusive((_Smtx_t *)(v2 + 168));
          }
          else
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                          v2 + 432,
                          (__int64 *)(a1 + 56))
                     + 267) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 56));
            wil::details::in1diag3::Log_HrMsg(
              retaddr,
              (void *)0x691,
              (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
              (const char *)0x80070006LL,
              (unsigned __int64)"Faild to create invisible window!",
              v7);
          }
        }
        else
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v2 + 432,
                        (__int64 *)(a1 + 24))
                   + 266) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 24));
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[107]>(v5);
          CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(v2, a1 + 32, *(unsigned int *)(a1 + 73));
          tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)(v2 + 432));
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(v2 + 432);
          *(_QWORD *)(a1 + 40) = 0LL;
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::operator=(
            (void **)(v2 + 432),
            (void **)(a1 + 40));
          wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>((void **)(a1 + 40));
        }
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
      }
LABEL_13:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x60);
      break;
    default:
      __debugbreak();
      break;
  }
}
