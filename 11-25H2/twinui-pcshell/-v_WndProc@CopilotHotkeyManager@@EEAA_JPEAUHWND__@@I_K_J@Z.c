/*
 * XREFs of ?v_WndProc@CopilotHotkeyManager@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180612190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _Smtx_lock_exclusive @ 0x1802D564C (_Smtx_lock_exclusive.c)
 *     _Smtx_unlock_exclusive @ 0x1802D565C (_Smtx_unlock_exclusive.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$CBG@Z @ 0x1805F94F8 (--$CopilotHotkey_Output_Debug_String@AEAY0CD@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CD@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$CBG@Z @ 0x1805F9584 (--$CopilotHotkey_Output_Debug_String@AEAY0CF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0CF@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0GJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GJ@$$CBG@Z @ 0x1805F97C4 (--$CopilotHotkey_Output_Debug_String@AEAY0GJ@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0GJ@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0N@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x1805F9854 (--$CopilotHotkey_Output_Debug_String@AEAY0N@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0N@$$CBG.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?CancelHoldAsync@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1805FE88C (-CancelHoldAsync@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 *     ?IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x180601970 (-IsCopilotHWKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060D78C (-IsWinCHotKeyPressed@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180610580 (-TrySendingCopilotHardwareKeyLongPressSignal@CopilotHotkeyManager@@AEAA-AUfire_and_forget@winrt@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NXZ @ 0x180610B9C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@QEAA_NX.c)
 */

LRESULT __fastcall CopilotHotkeyManager::v_WndProc(
        CopilotHotkeyManager *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  char v7; // bp
  const char *v8; // r9
  const WCHAR *v9; // rcx
  CopilotHotkeyManager *v11; // rcx
  CopilotHotkeyManager *v12; // rcx
  _DWORD *v13; // rsi
  char v14; // bp
  const WCHAR *v15; // rcx
  char v16; // si
  CopilotHotkeyManager *v17; // rcx
  void *v18[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v20; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 == 8 )
  {
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[13]>((const WCHAR *)this);
    goto LABEL_30;
  }
  if ( a3 == 257 )
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID57755134>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID57755134>::GetImpl'::`2'::impl) )
    {
      v13 = (_DWORD *)((char *)this + 336);
      if ( (CopilotHotkeyManager::IsCopilotHWKeyPressed(v11) || *v13 != 112)
        && (CopilotHotkeyManager::IsWinCHotKeyPressed(v12) || *v13 != 111) )
      {
        return 0LL;
      }
      v14 = 1;
      Smtx_lock_exclusive((_Smtx_t *)this + 8);
      if ( !*((_BYTE *)this + 75) )
      {
        v14 = 0;
        *((_BYTE *)this + 75) = 1;
      }
      Smtx_unlock_exclusive((_Smtx_t *)this + 8);
      if ( v14 )
        return 0LL;
      if ( *v13 != 112 )
      {
        if ( *v13 == 111 )
          CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[35]>(L"WM_KEYUP && !IsWinCHotKeyPressed()");
        goto LABEL_30;
      }
    }
    else
    {
      v16 = 1;
      Smtx_lock_exclusive((_Smtx_t *)this + 8);
      if ( !*((_BYTE *)this + 75) && !CopilotHotkeyManager::IsCopilotHWKeyPressed(v17) )
      {
        v16 = *((_BYTE *)this + 75);
        *((_BYTE *)this + 75) = 1;
      }
      Smtx_unlock_exclusive((_Smtx_t *)this + 8);
      if ( v16 )
        return 0LL;
    }
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[37]>(v15);
LABEL_30:
    CopilotHotkeyManager::CancelHoldAsync((__int64)this - 104, &v20);
    return 0LL;
  }
  if ( a3 != 275 || a4 != 200 )
    return DefWindowProcW(a2, a3, a4, lParam);
  v7 = 0;
  Smtx_lock_exclusive((_Smtx_t *)this + 8);
  *((_BYTE *)this + 72) = 1;
  if ( !KillTimer(a2, 0xC8uLL) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x60E,
      (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      v8);
  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v7 = 1;
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 328,
                  (__int64 *)v18)
             + 269) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v18);
  }
  Smtx_unlock_exclusive((_Smtx_t *)this + 8);
  if ( v7 )
  {
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[105]>(v9);
    CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal((__int64)this - 104, &v20, *((_BYTE *)this + 73));
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 328,
                  (__int64 *)v18)
             + 270) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v18);
  }
  return 0LL;
}
