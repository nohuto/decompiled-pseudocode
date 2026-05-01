/*
 * XREFs of ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x18046BB90
 * Callers:
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18046DC4C (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnsureTabTip@AEB_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N@Z @ 0x18046A344 (--$EnsureTabTip@AEB_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N@Z.c)
 *     ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x18065EADC (-StartAndDisplayUserIhmProcess@@YA_N_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::EnsureTabTip(KeyboardHosting::TabTipAdapter *this)
{
  bool v1; // bl
  unsigned int v2; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  KeyboardHosting::TabTipAdapter *v4; // [rsp+40h] [rbp+8h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp+10h] BYREF

  v4 = this;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v1 = CoCreateInstance(
         &GUID_4ce576fa_83dc_4f88_951c_9d0782b4e376,
         0LL,
         6u,
         &GUID_37c994e7_432b_4834_a2f7_dce1f13b834b,
         &ppv) >= 0;
  LOBYTE(v4) = v1;
  TouchKeyboardExperienceTelemetryLogger::EnsureTabTip<bool const &>((char *)&v4);
  if ( !v1 && !StartAndDisplayUserIhmProcess(1, v2) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCB7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x80004005LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
}
