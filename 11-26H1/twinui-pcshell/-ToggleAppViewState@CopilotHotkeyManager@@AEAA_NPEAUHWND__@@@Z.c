/*
 * XREFs of ?ToggleAppViewState@CopilotHotkeyManager@@AEAA_NPEAUHWND__@@@Z @ 0x180635054
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180626954 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0EM@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0EM@$$CBG@Z @ 0x18061DE0C (--$CopilotHotkey_Output_Debug_String@AEAY0EM@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0EM@$$C.c)
 *     ??$CopilotHotkey_Output_Debug_String@AEAY0FF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0FF@$$CBG@Z @ 0x18061DE54 (--$CopilotHotkey_Output_Debug_String@AEAY0FF@$$CBG@CopilotHotkeyManagerTelemetry@@SAXAEAY0FF@$$C.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180622F30 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806232F8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 */

char __fastcall CopilotHotkeyManager::ToggleAppViewState(CopilotHotkeyManager *this, HWND a2)
{
  const WCHAR *v4; // rcx
  __int64 *p_dwProcessId; // rcx
  const WCHAR *v6; // rcx
  __int64 dwProcessId; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( !IsWindow(a2) )
    return 0;
  if ( a2 == GetForegroundWindow() )
  {
    LODWORD(dwProcessId) = 0;
    GetWindowThreadProcessId(a2, (LPDWORD)&dwProcessId);
    AllowSetForegroundWindow(dwProcessId);
    PostMessageW(a2, 0x112u, 0xF020uLL, 0LL);
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[76]>(v4);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                   (__int64)this + 568,
                   &v9)
              + 328) = 1;
    p_dwProcessId = &v9;
  }
  else
  {
    SwitchToThisWindow(a2, 1);
    CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const (&)[85]>(v6);
    *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                   (__int64)this + 568,
                   &dwProcessId)
              + 328) = 2;
    p_dwProcessId = &dwProcessId;
  }
  tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>((void **)p_dwProcessId);
  return 1;
}
