/*
 * XREFs of ?UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z @ 0x1806105F4
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180610010 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C3C98 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z @ 0x180335704 (--$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CopilotHotkeyManager::UpdatePressAndHoldSignalSentFlag(CopilotHotkeyManager *this, unsigned __int8 a2)
{
  int v2; // ebx
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CopilotHotkeyManager *v6; // [rsp+60h] [rbp+8h] BYREF
  HKEY v7; // [rsp+70h] [rbp+18h] BYREF

  v6 = this;
  v2 = a2;
  v7 = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v7);
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\Shell\\PressAndHold",
          0,
          0LL,
          1u,
          0xF003Fu,
          0LL,
          phkResult,
          0LL);
  if ( Key )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      1190LL,
      (__int64)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
      (const char *)Key);
  }
  else
  {
    LODWORD(v6) = v2;
    wil::reg::set_value<unsigned int>(v7, 0LL, L"PressAndHoldStartSent", &v6);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v7);
}
