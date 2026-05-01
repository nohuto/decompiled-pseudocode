/*
 * XREFs of ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180245D84
 * Callers:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x180245038 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0___::Run @ 0x18034E8E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9a5678224a4d8e5c3d2776497db9e7e0___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     ?UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@00@Z @ 0x18035BF78 (-UpdateConfigurationValues@GamepadButtonTracker@@QEAAXV-$duration@_JU-$ratio@$00$0DOI@@std@@@chr.c)
 */

void __fastcall GamingOverlayExperienceManager::UpdateGamepadIntervalValues(GamingOverlayExperienceManager *this)
{
  unsigned int ValueW; // eax
  __int64 v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // r12
  __int64 i; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-40h]
  unsigned int v14; // [rsp+20h] [rbp-40h]
  unsigned int v15; // [rsp+20h] [rbp-40h]
  unsigned int pvData; // [rsp+40h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-1Ch] BYREF
  unsigned int v18; // [rsp+48h] [rbp-18h] BYREF
  DWORD v19; // [rsp+4Ch] [rbp-14h] BYREF
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
      (void *)0x11DF,
      (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)ValueW,
      v13);
  v3 = pvData;
  pvData = 0;
  *((_QWORD *)this + 43) = v3;
  pcbData = 4;
  v4 = RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\GameBar",
         L"GamepadDoublePressIntervalMs",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  if ( v4 != 2 && v4 )
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x11F2,
      (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v4,
      v14);
  *((_QWORD *)this + 44) = pvData;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v18 = 100;
    v19 = 4;
    v5 = RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\GameBar",
           L"GamepadLongPressRumbleDurationMs",
           0x10u,
           0LL,
           &v18,
           &v19);
    if ( v5 != 2 && v5 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x1207,
        (unsigned int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)v5,
        v15);
    *((_QWORD *)this + 45) = v18;
    v6 = *((_QWORD *)this + 41);
    for ( i = *((_QWORD *)this + 40); i != v6; i += 64LL )
    {
      v8 = *(_QWORD *)(i + 32);
      v9 = *((_QWORD *)this + 45);
      v10 = *((_QWORD *)this + 44);
      v11 = *((_QWORD *)this + 43);
      if ( v8 )
        GamepadButtonTracker::UpdateConfigurationValues(
          v8,
          *((_QWORD *)this + 43),
          *((_QWORD *)this + 44),
          *((_QWORD *)this + 45));
      v12 = *(_QWORD *)(i + 48);
      if ( v12 )
        GamepadButtonTracker::UpdateConfigurationValues(v12, v11, v10, v9);
    }
  }
}
