/*
 * XREFs of CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x1805FE610
 * Callers:
 *     CopilotHotkeyManager::CancelHoldAsync$_InitCoro$2 @ 0x1805FE5B0 (CopilotHotkeyManager--CancelHoldAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Smtx_lock_exclusive @ 0x1802D564C (_Smtx_lock_exclusive.c)
 *     _Smtx_unlock_exclusive @ 0x1802D565C (_Smtx_unlock_exclusive.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0ED@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0ED@$$CBG@Z @ 0x1805F96A4 (--$CopilotHotkey_Output_Debug_String@AEAY0ED@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0ED@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0FK@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0FK@$$CBG@Z @ 0x1805F977C (--$CopilotHotkey_Output_Debug_String@AEAY0FK@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0FK@$$C.c)
 *     ??$InvokedCopilotKeyTargetApplication@AEAY09$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY09$$CBG$$QEAPEBG@Z @ 0x1805F9A8C (--$InvokedCopilotKeyTargetApplication@AEAY09$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY09$$.c)
 *     ??$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG$$QEAPEBG@Z @ 0x1805F9B14 (--$InvokedCopilotKeyTargetApplication@AEAY0N@$$CBGPEBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805FDD94 (--1-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805FE1A8 (--4-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@ti.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?RestoreForeground@CopilotHotkeyManager@@AEAAXXZ @ 0x18060EE20 (-RestoreForeground@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA?AUfire_and_forget@winrt@@W4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18060FF38 (-TryInvokeCopilotOrCustomAppFromHardwareKeyAsync@CopilotHotkeyManager@@QEAA-AUfire_and_forget@wi.c)
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180610580 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID56032693@@@details@wil@@QEAA_NXZ @ 0x180610AA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID56032693@@@details@wil@@QEAA_NX.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061162C (-reset@-$com_ptr_t@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@detail.c)
 */

void __fastcall CopilotHotkeyManager::CancelHoldAsync__ResumeCoro_1(__int64 a1)
{
  char v2; // r12
  char v3; // r15
  __int64 v4; // rsi
  const char *v5; // r9
  const WCHAR *v6; // rcx
  __int64 *v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_34;
    case 2:
      v2 = 0;
      v3 = 0;
      v4 = *(_QWORD *)(a1 + 65);
      Smtx_lock_exclusive((_Smtx_t *)(v4 + 168));
      if ( *(_BYTE *)(v4 + 176) )
      {
        v2 = *(_BYTE *)(v4 + 177);
        *(_BYTE *)(v4 + 177) = 0;
      }
      else if ( !*(_BYTE *)(v4 + 178) && IsWindow(*(HWND *)(v4 + 112)) )
      {
        if ( !KillTimer(*(HWND *)(v4 + 112), 0xC8uLL) )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x425,
            (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
            v5);
        *(_BYTE *)(v4 + 178) = 1;
        v3 = 1;
      }
      Smtx_unlock_exclusive((_Smtx_t *)(v4 + 168));
      if ( !v2 && !v3 )
        goto LABEL_34;
      CopilotHotkeyManager::RestoreForeground((CopilotHotkeyManager *)v4);
      try
      {
        if ( v2 )
        {
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[90]>(v6);
          CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal(v4, a1 + 12, 0LL);
          v7 = (__int64 *)(v4 + 432);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v4 + 432,
                        (__int64 *)(a1 + 16))
                   + 271) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 16));
          v9 = (_QWORD *)(v4 + 192);
          if ( v9[3] > 7uLL )
            v9 = (_QWORD *)*v9;
          *(_QWORD *)(a1 + 24) = v9;
          CopilotHotkeyManagerTelemetry::InvokedCopilotKeyTargetApplication<unsigned short const (&)[13],unsigned short const *>(
            v8,
            (const WCHAR **)(a1 + 24));
        }
        else
        {
          if ( !v3 )
            goto LABEL_34;
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[67]>(v6);
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID56032693>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID56032693>::GetImpl'::`2'::impl) )
          {
            if ( *(_DWORD *)(v4 + 440) == 112 )
            {
              v10 = a1 + 32;
              v11 = 112LL;
            }
            else
            {
              v10 = a1 + 33;
              v11 = 111LL;
            }
            CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(v4, v10, v11);
          }
          else
          {
            CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync(v4, a1 + 34, 112LL);
          }
          v7 = (__int64 *)(v4 + 432);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v4 + 432,
                        (__int64 *)(a1 + 40))
                   + 272) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)(a1 + 40));
          v13 = (_QWORD *)(v4 + 192);
          if ( v13[3] > 7uLL )
            v13 = (_QWORD *)*v13;
          *(_QWORD *)(a1 + 48) = v13;
          CopilotHotkeyManagerTelemetry::InvokedCopilotKeyTargetApplication<unsigned short const (&)[10],unsigned short const *>(
            v12,
            (const WCHAR **)(a1 + 48));
        }
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v7);
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::reset(v7);
        *(_QWORD *)(a1 + 56) = 0LL;
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::operator=(
          (void **)v7,
          (void **)(a1 + 56));
        wil::com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>,wil::err_returncode_policy>((void **)(a1 + 56));
      }
      catch ( ... )
      {
        *(_WORD *)(a1 + 8) = -1;
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
      }
LABEL_34:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
      return;
    default:
      __debugbreak();
      return;
  }
}
