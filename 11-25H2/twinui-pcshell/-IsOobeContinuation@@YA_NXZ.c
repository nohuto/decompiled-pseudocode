/*
 * XREFs of ?IsOobeContinuation@@YA_NXZ @ 0x1803B9C5C
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803BCF74 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A51D4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z @ 0x18014B510 (-SHRegGetBOOLWithREGSAM@@YAJPEAUHKEY__@@PEBG1KPEAH@Z.c)
 *     ?event_is_signaled@wil@@YA_NPEAX@Z @ 0x1803322B4 (-event_is_signaled@wil@@YA_NPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wil@@QEAA_NXZ @ 0x1803BD498 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SingleEnduserOobeApp@@@details@wi.c)
 *     ?try_open@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAA_NPEBGK_N@Z @ 0x1803BD5E4 (-try_open@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 */

bool IsOobeContinuation(void)
{
  unsigned int v0; // r9d
  bool is_signaled; // bl
  void *v3; // rdx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE hHandle; // [rsp+48h] [rbp+10h] BYREF

  is_signaled = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SingleEnduserOobeApp>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SingleEnduserOobeApp>::GetImpl'::`2'::impl) )
    return 0;
  hHandle = 0LL;
  v4 = 0;
  SHRegGetBOOLWithREGSAM(
    HKEY_LOCAL_MACHINE,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
    L"ContinueOobeInEnduserSession",
    v0,
    &v4);
  if ( v4 )
  {
    if ( (unsigned __int8)_try_open___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAA_NPEBGK_N_Z(
                            &hHandle,
                            L"Local\\ReadyForAppTransition",
                            0x100000LL) )
      is_signaled = wil::event_is_signaled(hHandle, v3);
  }
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)&hHandle,
    v3);
  return is_signaled;
}
