/*
 * XREFs of ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x18022B54C
 * Callers:
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180131EB0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18021F5CC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSett.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18022B740 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18022BA1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSettingUnregisterNotification@@.c)
 */

__int64 __fastcall CComposition::UpdatePowerNotifications(CComposition *this)
{
  signed int v2; // eax
  signed int v3; // ebx
  __int64 v4; // rdx
  signed int v5; // eax
  _QWORD Recipient[2]; // [rsp+20h] [rbp-30h] BYREF
  char *v8; // [rsp+30h] [rbp-20h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( *((_DWORD *)this + 1621) )
  {
    if ( !*((_QWORD *)this + 805) )
    {
      Recipient[1] = 0LL;
      Recipient[0] = CComposition::s_PowerNotification;
      v8 = (char *)this + 6440;
      RegistrationHandle = 0LL;
      v10 = 1;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetImpl'::`2'::impl) )
      {
        v5 = PowerSettingRegisterNotification(&GUID_ENERGY_SAVER_STATUS, 2u, Recipient, &RegistrationHandle);
        v3 = v5;
        if ( v5 > 0 )
          v3 = (unsigned __int16)v5 | 0x80070000;
        wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>((__int64)&v8);
        if ( v3 < 0 )
        {
          v4 = 2801LL;
          goto LABEL_12;
        }
      }
      else
      {
        v2 = PowerSettingRegisterNotification(&GUID_POWER_SAVING_STATUS, 2u, Recipient, &RegistrationHandle);
        v3 = v2;
        if ( v2 > 0 )
          v3 = (unsigned __int16)v2 | 0x80070000;
        wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>((__int64)&v8);
        if ( v3 < 0 )
        {
          v4 = 2809LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
            (const char *)(unsigned int)v3);
          return (unsigned int)v3;
        }
      }
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)this + 6440,
      0LL);
    *((_BYTE *)this + 6463) = 0;
  }
  return 0LL;
}
