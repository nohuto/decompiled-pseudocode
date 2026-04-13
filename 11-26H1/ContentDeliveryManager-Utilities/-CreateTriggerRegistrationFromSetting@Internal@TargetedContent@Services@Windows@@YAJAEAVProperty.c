/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180086034
 * Callers:
 *     _lambda_53641cc0248bed3c554431816cb37efe_::operator() @ 0x180085840 (_lambda_53641cc0248bed3c554431816cb37efe_--operator().c)
 *     _lambda_69a92d371a2c7508f1f4ce514cd8b1f7_::operator() @ 0x1800858E8 (_lambda_69a92d371a2c7508f1f4ce514cd8b1f7_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800785F0 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x1800835D4 (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ??$GetValue@HV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEAHAEBV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@Z @ 0x180083F18 (--$GetValue@HV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d2.c)
 *     ??$GetValue@NV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEANAEBV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@Z @ 0x180084038 (--$GetValue@NV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a35230.c)
 *     ??$GetValue@_JV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380fec4_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEA_JAEBV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380fec4_@@@Z @ 0x180084260 (--$GetValue@_JV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380f.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180087344 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180087C4C (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  HSTRING *v8; // r9
  HSTRING *v9; // r9
  HSTRING *v10; // r9
  const WCHAR *StringRawBuffer; // rax
  unsigned int v12; // esi
  int Instance; // eax
  HSTRING *v14; // r9
  int v15; // eax
  HSTRING *v16; // r9
  int v17; // eax
  HSTRING *v18; // r9
  int v19; // eax
  HSTRING *v20; // r9
  int v21; // eax
  HSTRING *v22; // r9
  int v23; // eax
  HSTRING *v24; // r9
  __int64 v25; // rdx
  char v26; // r8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  char v30; // r8
  int v31; // eax
  int v32; // eax
  char v33; // r8
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  char v37; // r8
  int v38; // eax
  int v39; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v40; // r8
  int TriggerStateTransitionsFromSetting; // eax
  char v42; // r8
  int v43; // eax
  int v44; // eax
  struct CreativeFramework::Triggers::PropertySetHelper *v45; // rax
  const char *v46; // r9
  __int64 result; // rax
  int v48; // [rsp+20h] [rbp-88h]
  HSTRING v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+20h] [rbp-88h]
  __int64 v52; // [rsp+20h] [rbp-88h]
  __int64 v53; // [rsp+20h] [rbp-88h]
  int v54; // [rsp+20h] [rbp-88h]
  HSTRING v55; // [rsp+40h] [rbp-68h] BYREF
  struct CreativeFramework::Triggers::PropertySetHelper *v56; // [rsp+48h] [rbp-60h] BYREF
  HSTRING string; // [rsp+50h] [rbp-58h] BYREF
  HSTRING v58; // [rsp+58h] [rbp-50h] BYREF
  HSTRING v59; // [rsp+60h] [rbp-48h] BYREF
  HSTRING v60; // [rsp+68h] [rbp-40h] BYREF
  HSTRING v61; // [rsp+70h] [rbp-38h] BYREF
  HSTRING v62; // [rsp+78h] [rbp-30h] BYREF
  __int64 v63; // [rsp+80h] [rbp-28h] BYREF
  _QWORD v64[4]; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v66; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v67; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v68; // [rsp+C8h] [rbp+20h] BYREF

  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  v62 = 0LL;
  try
  {
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
            (const wchar_t *)&v62,
            v5) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        358LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v48);
    WindowsDeleteString(0LL);
    v61 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
            (const wchar_t *)&v61,
            v6) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        360LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v48);
    WindowsDeleteString(0LL);
    v60 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
            (const wchar_t *)&v60,
            v7) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        362LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v48);
    WindowsDeleteString(0LL);
    v59 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
      (const wchar_t *)&v59,
      v8);
    WindowsDeleteString(0LL);
    v58 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
      (const wchar_t *)&v58,
      v9);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
            (const wchar_t *)&string,
            v10) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        368LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL,
        v48);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(StringRawBuffer);
    v56 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
    v49 = v59;
    Instance = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(v12, v62, v61, v60);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        371LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)Instance,
        (int)v49);
    WindowsDeleteString(0LL);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
           (const wchar_t *)&v55,
           v14) )
    {
      v15 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 72LL))(
              v56,
              v55);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          376LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v15,
          (int)v49);
    }
    WindowsDeleteString(v55);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
           (const wchar_t *)&v55,
           v16) )
    {
      v17 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 104LL))(
              v56,
              v55);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          380LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v17,
          (int)v49);
    }
    WindowsDeleteString(v55);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
           (const wchar_t *)&v55,
           v18) )
    {
      v19 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 152LL))(
              v56,
              v55);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          384LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v19,
          (int)v49);
    }
    WindowsDeleteString(v55);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
           (const wchar_t *)&v55,
           v20) )
    {
      v21 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 216LL))(
              v56,
              v55);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          388LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v21,
          (int)v49);
    }
    WindowsDeleteString(v55);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
           (const wchar_t *)&v55,
           v22) )
    {
      v23 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 232LL))(
              v56,
              v55);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          392LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v23,
          (int)v49);
    }
    WindowsDeleteString(v55);
    v55 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"scoreName",
           (const wchar_t *)&v55,
           v24) )
    {
      v27 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, HSTRING))(*(_QWORD *)v56 + 296LL))(
              v56,
              v55);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          396LL,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v27,
          (int)v49);
    }
    v63 = 0LL;
    v28 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<__int64,_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_,_lambda_05999b33a144a75dca1b886c3380fec4_>(
            (__int64)this,
            v25,
            v26,
            &v63,
            (__int64)v49,
            0LL);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        400LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v28,
        v50);
    v29 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, __int64))(*(_QWORD *)v56 + 248LL))(
            v56,
            v63);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        401LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v29,
        v50);
    v66 = 0;
    v31 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<int,_lambda_bca2bd44841200bbb2d2343079ca854c_,_lambda_501bed84bc183ec8c599175b1d68d232_>(
            (__int64)this,
            (__int64)L"options",
            v30,
            &v66,
            v50,
            0);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        404LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v31,
        v51);
    v32 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v56 + 264LL))(
            v56,
            v66);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        405LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v32,
        v51);
    v67 = 0;
    v34 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<int,_lambda_bca2bd44841200bbb2d2343079ca854c_,_lambda_501bed84bc183ec8c599175b1d68d232_>(
            (__int64)this,
            (__int64)L"predicateKind",
            v33,
            &v67,
            v51,
            0);
    if ( v34 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        408LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v34,
        v52);
    v35 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v56 + 120LL))(
            v56,
            v67);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        409LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v35,
        v52);
    v64[0] = 0LL;
    v38 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<double,_lambda_3f60bcadd94b6d05250af003c850a124_,_lambda_a9093cf20af096f461bbd910a352307f_>(
            (__int64)this,
            v36,
            v37,
            v64,
            v52,
            0LL);
    if ( v38 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        412LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v38,
        v53);
    v39 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *))(*(_QWORD *)v56 + 312LL))(v56);
    if ( v39 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        413LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v39,
        v53);
    TriggerStateTransitionsFromSetting = Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
                                           this,
                                           v56,
                                           v40);
    if ( TriggerStateTransitionsFromSetting < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        415LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)TriggerStateTransitionsFromSetting,
        v53);
    v68 = 0;
    v43 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetValue<int,_lambda_bca2bd44841200bbb2d2343079ca854c_,_lambda_501bed84bc183ec8c599175b1d68d232_>(
            (__int64)this,
            (__int64)L"conditionFlags",
            v42,
            &v68,
            v53,
            0);
    if ( v43 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        418LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v43,
        v54);
    v44 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, _QWORD))(*(_QWORD *)v56 + 280LL))(
            v56,
            v68);
    if ( v44 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        419LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v44,
        v54);
    v45 = v56;
    v56 = 0LL;
    *(_QWORD *)a2 = v45;
    WindowsDeleteString(v55);
    v55 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v56);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v58);
    v58 = 0LL;
    WindowsDeleteString(v59);
    v59 = 0LL;
    WindowsDeleteString(v60);
    v60 = 0LL;
    WindowsDeleteString(v61);
    v61 = 0LL;
    WindowsDeleteString(v62);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1A8,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                           v46);
  }
  return result;
}
