/*
 * XREFs of ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180087344
 * Callers:
 *     _lambda_06e77e5296b311cd39e114a3c1771c51_::operator() @ 0x1800856A8 (_lambda_06e77e5296b311cd39e114a3c1771c51_--operator().c)
 *     _lambda_c4c3923748e77b314a455aaed0b87e40_::operator() @ 0x180085B38 (_lambda_c4c3923748e77b314a455aaed0b87e40_--operator().c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086034 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180087C4C (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetValue@PEAUHSTRING__@@V_lambda_3ca20a57b199c09e689f39d4fbf6faaa_@@V_lambda_8610f3aaabbf99ce4e8c0177de37c43b_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEAPEAUHSTRING__@@AEBV_lambda_3ca20a57b199c09e689f39d4fbf6faaa_@@V_lambda_8610f3aaabbf99ce4e8c0177de37c43b_@@@Z @ 0x180084170 (--$GetValue@PEAUHSTRING__@@V_lambda_3ca20a57b199c09e689f39d4fbf6faaa_@@V_lambda_8610f3aaabbf99ce.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x180087EDC (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 */

char __fastcall Windows::Services::TargetedContent::Internal::GetStringValue(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        const wchar_t *a3,
        HSTRING *a4)
{
  int HasKey; // eax
  __int64 v8; // r8
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)a3 = 0LL;
  v13 = 0;
  HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
             this,
             a2,
             &v13);
  if ( HasKey < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      137LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)HasKey,
      v11);
  if ( v13 )
  {
    v9 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<HSTRING__ *,_lambda_3ca20a57b199c09e689f39d4fbf6faaa_,_lambda_8610f3aaabbf99ce4e8c0177de37c43b_>(
           (__int64)this,
           (__int64)a2,
           v8,
           (__int64)a3);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        140LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v9,
        v11);
  }
  return v13;
}
