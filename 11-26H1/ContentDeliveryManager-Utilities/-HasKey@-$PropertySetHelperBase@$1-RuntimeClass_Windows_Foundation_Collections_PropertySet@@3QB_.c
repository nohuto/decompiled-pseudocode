/*
 * XREFs of ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x180087EDC
 * Callers:
 *     ??$GetValue@HV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEAHAEBV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d232_@@@Z @ 0x180083F18 (--$GetValue@HV_lambda_bca2bd44841200bbb2d2343079ca854c_@@V_lambda_501bed84bc183ec8c599175b1d68d2.c)
 *     ??$GetValue@NV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEANAEBV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a352307f_@@@Z @ 0x180084038 (--$GetValue@NV_lambda_3f60bcadd94b6d05250af003c850a124_@@V_lambda_a9093cf20af096f461bbd910a35230.c)
 *     ??$GetValue@_JV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380fec4_@@@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@AEBAJPEB_W_NPEA_JAEBV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380fec4_@@@Z @ 0x180084260 (--$GetValue@_JV_lambda_6d1dc347780fd1dc0dd1e751d126f7a2_@@V_lambda_05999b33a144a75dca1b886c3380f.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180085FA0 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_180085FA0.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180087344 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045E98 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        const WCHAR *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  _BYTE v12[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v15; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v16; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15 = a2;
  *a3 = 0;
  v13 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         a1,
         &v13);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v14 = 0LL;
    v12[0] = 0;
    v7 = v13;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v13 + 64LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v15, v5);
    v10 = v8(v7, v9[1].Reserved.Reserved1, v12);
    v6 = v10;
    if ( v10 >= 0 )
    {
      *a3 = v12[0] != 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v6;
}
