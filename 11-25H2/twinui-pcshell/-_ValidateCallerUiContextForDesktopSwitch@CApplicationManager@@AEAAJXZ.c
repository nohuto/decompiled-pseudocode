/*
 * XREFs of ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801C967C
 * Callers:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x1801C9614 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18029EA70 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x180029090 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z @ 0x1801DF12C (-GetCallingProcessType@CallerIdentity@@YAJPEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x1802BFCB0 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z @ 0x1802E84A0 (-GetProcessTypeForClientOfObject@CallerIdentity@@YAJPEAUIUnknown@@PEAW4PROCESS_UICONTEXT@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start@@@details@wil@@QEAA_NXZ @ 0x1802EDA10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PlatformFixesForFull_ea_1802EDA10.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_ValidateCallerUiContextForDesktopSwitch(CApplicationManager *this)
{
  enum PROCESS_UICONTEXT *v2; // rdx
  enum PROCESS_UICONTEXT *v3; // r8
  int ProcessTypeForClientOfObject; // eax
  unsigned int v5; // ebx
  unsigned __int16 **v6; // rdx
  const unsigned __int16 *v7; // rdx
  LPCWCH lpString2; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]
  struct IUnknown v12; // [rsp+58h] [rbp+18h] BYREF

  LODWORD(v12.lpVtbl) = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PlatformFixesForFullTrustAndWin32Start>::GetImpl'::`2'::impl) )
    ProcessTypeForClientOfObject = CallerIdentity::GetProcessTypeForClientOfObject(this, &v12, v3);
  else
    ProcessTypeForClientOfObject = CallerIdentity::GetCallingProcessType((CallerIdentity *)&v12, v2);
  v5 = ProcessTypeForClientOfObject;
  if ( ProcessTypeForClientOfObject >= 0 )
  {
    v5 = LODWORD(v12.lpVtbl) != 2 ? 0x80070005 : 0;
    lpString2 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    if ( LODWORD(v12.lpVtbl) != 2 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      v10 = -1LL;
      v11 = -1LL;
      if ( (int)CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&lpString2, v6) >= 0 )
        v5 = CallerIdentity::IsShellExperienceAppId(lpString2, v7) == 0 ? 0x80070005 : 0;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return v5;
}
