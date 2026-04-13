/*
 * XREFs of ??$CreateExternalObjectVector@VTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@2Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@1234@@Z @ 0x180077DB8
 * Callers:
 *     ??$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1800422C8 (--$MakeAndInitialize@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UIIn.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x180078428 (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180087C4C (-GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropert.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x180074FD0 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition,Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int ActivationFactory; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v12[5]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v13; // [rsp+58h] [rbp-A8h]
  GUID v14; // [rsp+68h] [rbp-98h]
  GUID v15; // [rsp+78h] [rbp-88h]
  GUID v16; // [rsp+88h] [rbp-78h]
  GUID v17; // [rsp+98h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-38h]
  HSTRING_HEADER v20; // [rsp+D0h] [rbp-30h] BYREF
  const WCHAR *v21; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER v22; // [rsp+F0h] [rbp-10h] BYREF
  const WCHAR *v23; // [rsp+108h] [rbp+8h]
  HSTRING_HEADER v24; // [rsp+110h] [rbp+10h] BYREF
  const WCHAR *v25; // [rsp+128h] [rbp+28h]

  v12[0] = L"Windows.Foundation.Collections.IVector`1<Windows.Services.TargetedContent.Internal.TargetedContentTriggerStateTransition>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, v12, a3);
  v12[0] = L"Windows.Foundation.Collections.IVectorView`1<Windows.Services.TargetedContent.Internal.TargetedContentTrigger"
            "StateTransition>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v12, v4);
  v12[0] = L"Windows.Foundation.Collections.IIterator`1<Windows.Services.TargetedContent.Internal.TargetedContentTriggerStateTransition>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v12, v5);
  v12[2] = v21;
  v12[3] = v23;
  v12[4] = v25;
  v13 = GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3;
  v14 = GUID_314ae4a5_86a2_57fa_9835_d5359edc449e;
  v15 = GUID_8137625d_bec8_581b_b391_b55c3486d147;
  v16 = GUID_92652873_ecf5_51b5_bcb7_ff37be967dae;
  v17 = GUID_fe6ea26b_ae19_59c7_99ef_79af09d93527;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.Detail.Vector",
    0x2Du,
    0x2Cu);
  ActivationFactory = RoGetActivationFactory(v19, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v11);
  if ( ActivationFactory >= 0 )
  {
    v10 = 0LL;
    v7 = v11;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{248,{flat}}(v7);
    if ( ActivationFactory >= 0 )
    {
      v8 = v10;
      v10 = 0LL;
      *a2 = v8;
      ActivationFactory = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  return (unsigned int)ActivationFactory;
}
