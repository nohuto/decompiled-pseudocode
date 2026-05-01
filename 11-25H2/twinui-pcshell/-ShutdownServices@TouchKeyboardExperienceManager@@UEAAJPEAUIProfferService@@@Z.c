/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x180464760
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800352AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18021B34C (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ??R?$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@KeyboardHosting@@@Z @ 0x180220194 (--R-$default_delete@VInputAppPreloader@KeyboardHosting@@@std@@QEBAXPEAVInputAppPreloader@Keyboar.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWINEVENTHOOK__@@@Z @ 0x18023DD30 (-reset@-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@Y.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180289BA0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@1@XZ @ 0x1802AAD9C (--C-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802BEAF4 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C4160 (-OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C6178 (--1-$test_data_control@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  __int64 v3; // rcx
  KeyboardHosting::InputAppPreloader *v4; // rdx
  char v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  char v8; // r8
  __int64 v9; // r9
  KeyboardHosting::TabTipAdapter *v10; // rcx
  __int64 *v11; // rbx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  TouchKeyboardExperienceTelemetryLogger::OnShutdownServices();
  v4 = (KeyboardHosting::InputAppPreloader *)*((_QWORD *)this + 116);
  *((_QWORD *)this + 116) = 0LL;
  if ( v4 )
    std::default_delete<KeyboardHosting::InputAppPreloader>::operator()(v3, v4);
  wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
    (HWINEVENTHOOK *)this + 73,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
    (HWINEVENTHOOK *)this + 72,
    0LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
    1u,
    v5,
    v6);
  TouchKeyboardExperienceManager::UnsubscribeTouchKeyboardWnfNotifications(
    (TouchKeyboardExperienceManager *)((char *)this - 48),
    v7,
    v8,
    v9);
  v10 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 67);
  if ( v10 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v10);
    v13 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 67, &v13);
    if ( v13 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
  }
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  v11 = (__int64 *)((char *)this + 2128);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool(v11) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator->(
                            (__int64)v11,
                            (__int64)&v13)
             + 279LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::~test_data_control<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>((__int64)&v13);
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v11);
  }
  return 0LL;
}
