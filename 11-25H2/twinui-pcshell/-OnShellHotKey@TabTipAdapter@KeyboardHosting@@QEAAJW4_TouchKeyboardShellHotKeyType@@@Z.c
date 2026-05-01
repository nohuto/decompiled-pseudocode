/*
 * XREFs of ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18046DEA4
 * Callers:
 *     ?OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180463210 (-OnShellHotKey@TouchKeyboardExperienceManager@@UEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 *     ?ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180464700 (-ShowClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800948EC (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEAPEBGAEA_N0@Z @ 0x18046A67C (--$ShellHotKeyRequestReceived@IPEBGAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18046C69C (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18046E760 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18046E760.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnShellHotKey(__int64 a1, int a2)
{
  const char *v2; // r9
  int InputAppState; // edi
  KeyboardHosting::TabTipAdapter *v4; // rsi
  int v5; // ebx
  void **v6; // rax
  unsigned int v7; // edi
  HSTRING v8; // rbx
  int v9; // eax
  HSTRING v10; // rbx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-88h] BYREF
  int v16; // [rsp+24h] [rbp-84h] BYREF
  int v17; // [rsp+28h] [rbp-80h]
  KeyboardHosting::TabTipAdapter *v18; // [rsp+30h] [rbp-78h] BYREF
  void *v19[4]; // [rsp+38h] [rbp-70h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-50h] BYREF
  HSTRING v21; // [rsp+70h] [rbp-38h]
  HSTRING_HEADER v22; // [rsp+78h] [rbp-30h] BYREF
  HSTRING v23; // [rsp+90h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v5 = a2;
    v4 = (KeyboardHosting::TabTipAdapter *)a1;
    v18 = (KeyboardHosting::TabTipAdapter *)a1;
    v17 = a2;
    InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState(a1);
    v16 = InputAppState;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x908,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v2);
    InputAppState = v16;
    v4 = v18;
    v5 = v17;
  }
  KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId((__int64)v4, (char **)v19);
  v17 = InputAppState;
  v6 = v19;
  if ( v19[3] > (void *)7 )
    v6 = (void **)v19[0];
  v18 = (KeyboardHosting::TabTipAdapter *)v6;
  v16 = v5;
  TouchKeyboardExperienceTelemetryLogger::ShellHotKeyRequestReceived<unsigned int,unsigned short const *,bool &,unsigned int>(
    &v16,
    (__int64 *)&v18);
  v7 = 2;
  if ( v5 == 1 )
  {
    LOBYTE(v15) = 0;
    (*(void (__fastcall **)(_QWORD *, int *))(**((_QWORD **)v4 + 16) + 320LL))(*((_QWORD **)v4 + 16), &v15);
    if ( (_BYTE)v15 )
    {
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"1", 2u, 1u);
      v10 = v23;
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v11 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v21, v10);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x915,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v11);
    }
    else
    {
      v21 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
      v8 = v21;
      v23 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v22, L"ShowEmojiPanelTips", 0x13u, 0x12u);
      v9 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v23, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x919,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
    }
  }
  else if ( v5 == 2 )
  {
    v7 = 4;
  }
  else
  {
    v7 = 3;
    if ( v5 != 3 )
    {
      v12 = -2147024809;
      v13 = 2342LL;
      goto LABEL_19;
    }
  }
  v12 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(v4, v7, 4LL, 1LL);
  if ( v12 >= 0 )
  {
    std::wstring::_Tidy_deallocate(v19);
    return 0LL;
  }
  v13 = 2346LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v12);
  std::wstring::_Tidy_deallocate(v19);
  return (unsigned int)v12;
}
