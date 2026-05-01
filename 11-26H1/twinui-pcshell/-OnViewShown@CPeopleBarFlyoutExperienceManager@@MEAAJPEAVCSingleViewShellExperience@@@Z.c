/*
 * XREFs of ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180381C30
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001D8C8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FA64C (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ @ 0x1803803B0 (--1ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA@XZ.c)
 *     ?NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18038156C (-NotifyTrayOfFlyoutVisibility@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180382474 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1803829C0 (-TransferToCurrentThread@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::OnViewShown(
        struct _TP_TIMER **this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  _BYTE v6[336]; // [rsp+20h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 80,
    0LL);
  CPeopleBarFlyoutExperienceManager::NotifyTrayOfFlyoutVisibility((CPeopleBarFlyoutExperienceManager *)(this - 8), 1u);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::TransferToCurrentThread(this + 34, v6);
  v4 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (__int64)(this + 75),
         *((unsigned int *)this + 158),
         (unsigned __int64)(this - 6) & -(__int64)(this != (struct _TP_TIMER **)64),
         *((_QWORD *)a2 + 3));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x16D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v6,
    0LL);
  CommonPeopleTelemetry::ShowPeopleBarFlyout::~ShowPeopleBarFlyout((CommonPeopleTelemetry::ShowPeopleBarFlyout *)v6);
  return 0LL;
}
