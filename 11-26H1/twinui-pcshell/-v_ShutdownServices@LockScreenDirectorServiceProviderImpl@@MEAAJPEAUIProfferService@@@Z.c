/*
 * XREFs of ?v_ShutdownServices@LockScreenDirectorServiceProviderImpl@@MEAAJPEAUIProfferService@@@Z @ 0x180241580
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ @ 0x1801CA6CC (-StopDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost@@@details@wil@@QEAA_NXZ @ 0x1803E6FA0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLo.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::v_ShutdownServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct IProfferService *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PasswordReset_WaitForLockAppHost>::GetImpl'::`2'::impl) )
  {
    v6 = 0;
    v3 = RtlPublishWnfStateData(WNF_SHEL_LOCKSCREENDIRECTOR_SERVICEPROVIDER_ACTIVE, 0LL, &v6, 4LL) | 0x10000000;
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x70,
        (int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
        (const char *)(unsigned int)v3);
  }
  LockScreenDirectorServiceProviderImpl::StopDirectorThread((LockScreenDirectorServiceProviderImpl *)((char *)this - 48));
  return 0LL;
}
