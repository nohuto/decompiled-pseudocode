/*
 * XREFs of ??$CreateExternalObjectVector@UIInspectable@@V?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@1234@@Z @ 0x1800ACB40
 * Callers:
 *     ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800AF394 (-GetStartDefaultPins@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScre.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002E084 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x180074FD0 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<IInspectable,Windows::Foundation::Collections::Internal::AgileVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>>(
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

  v12[0] = L"Windows.Foundation.Collections.IVector`1<Object>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, v12, a3);
  v12[0] = L"Windows.Foundation.Collections.IVectorView`1<Object>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v12, v4);
  v12[0] = L"Windows.Foundation.Collections.IIterator`1<Object>";
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v12, v5);
  v12[2] = v21;
  v12[3] = v23;
  v12[4] = v25;
  v13 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
  v14 = GUID_b32bdca4_5e52_5b27_bc5d_d66a1a268c2a;
  v15 = GUID_a6487363_b074_5c60_ab16_866dce4ee54d;
  v16 = GUID_092b849b_60b1_52be_a44a_6fe8e933cbe4;
  v17 = GUID_44a94f2d_04f8_5091_b336_be7892dd10be;
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
