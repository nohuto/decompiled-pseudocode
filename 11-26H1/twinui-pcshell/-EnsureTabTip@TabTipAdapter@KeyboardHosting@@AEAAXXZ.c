/*
 * XREFs of ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x180479248
 * Callers:
 *     ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18047BDA8 (-OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnsureTabTip@AEB_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N@Z @ 0x180476CC8 (--$EnsureTabTip@AEB_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@wil@@QEAA_NXZ @ 0x180480714 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TabTipShutdownHandling@@@details@.c)
 *     ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x180684CA0 (-StartAndDisplayUserIhmProcess@@YA_N_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::EnsureTabTip(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rcx
  bool v3; // bl
  unsigned int v4; // edx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v6; // [rsp+48h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp+18h] BYREF

  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabTipShutdownHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_TabTipShutdownHandling>::GetImpl'::`2'::impl)
    || (v6 = 0, (v2 = *((_QWORD *)this + 16)) == 0)
    || (*(int (__fastcall **)(__int64, bool *))(*(_QWORD *)v2 + 344LL))(v2, &v6) < 0
    || v6 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    v3 = CoCreateInstance(
           &GUID_4ce576fa_83dc_4f88_951c_9d0782b4e376,
           0LL,
           6u,
           &GUID_37c994e7_432b_4834_a2f7_dce1f13b834b,
           &ppv) >= 0;
    v6 = v3;
    TouchKeyboardExperienceTelemetryLogger::EnsureTabTip<bool const &>((char *)&v6);
    if ( !v3 && !StartAndDisplayUserIhmProcess(1, v4) )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD40,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x80004005LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
}
