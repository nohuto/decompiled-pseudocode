/*
 * XREFs of ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180236D14
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180235F3C (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___::Run @ 0x180352F10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2e75a8851595db8237201f9332f154f2___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 *     ?UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@00@Z @ 0x180362C60 (-UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV-$duration@_JU-$ratio@$00$0DOI@@std@@@chr.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateGamepadIntervalValues(GamingOverlayExperienceManager *this)
{
  unsigned int ValueW; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 i; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int pdwType; // [rsp+20h] [rbp-40h]
  unsigned int pdwTypea; // [rsp+20h] [rbp-40h]
  unsigned int pdwTypeb; // [rsp+20h] [rbp-40h]
  unsigned int pvData; // [rsp+40h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v17; // [rsp+48h] [rbp-18h] BYREF
  DWORD v18; // [rsp+4Ch] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  pvData = 500;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\GameBar",
             L"GamepadShortPressIntervalMs",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW != 2 && ValueW )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x12F8,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)ValueW,
      pdwType);
  *((_QWORD *)this + 48) = pvData;
  pvData = 0;
  pcbData = 4;
  v3 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\GameBar",
         L"GamepadDoublePressIntervalMs",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  if ( v3 != 2 && v3 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x130B,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v3,
      pdwTypea);
  *((_QWORD *)this + 49) = pvData;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v17 = 100;
    v18 = 4;
    v4 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\GameBar",
           L"GamepadLongPressRumbleDurationMs",
           0x10u,
           0LL,
           &v17,
           &v18);
    if ( v4 != 2 && v4 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x1320,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v4,
        pdwTypeb);
    *((_QWORD *)this + 50) = v17;
    v5 = *((_QWORD *)this + 46);
    for ( i = *((_QWORD *)this + 45); i != v5; i += 64LL )
    {
      v7 = *(_QWORD *)(i + 32);
      v8 = *((_QWORD *)this + 50);
      v9 = *((_QWORD *)this + 49);
      v10 = *((_QWORD *)this + 48);
      if ( v7 )
        GamepadButtonTracker::UpdateConfigurationValues(
          v7,
          *((_QWORD *)this + 48),
          *((_QWORD *)this + 49),
          *((_QWORD *)this + 50));
      v11 = *(_QWORD *)(i + 48);
      if ( v11 )
        GamepadButtonTracker::UpdateConfigurationValues(v11, v10, v9, v8);
    }
  }
}
