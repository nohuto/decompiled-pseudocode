/*
 * XREFs of ??$CreateExternalObjectVector@UIChainLink@Chaining@Shell@Internal@Windows@@V?$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@$0A@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@$0A@@1234@@Z @ 0x1800CE490
 * Callers:
 *     ?GetNextChainLinks@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEAU?$IVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Collections@Foundation@5@@Z @ 0x1800CE334 (-GetNextChainLinks@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x1802B0030 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::Shell::Chaining::IChainLink,Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,0>>(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  UINT32 v5; // edx
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  UINT32 v10; // edx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  HRESULT v19; // eax
  int v20; // edx
  unsigned int v21; // r8d
  int ActivationFactory; // ebx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v30[3]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v31; // [rsp+48h] [rbp-B8h]
  GUID v32; // [rsp+58h] [rbp-A8h]
  GUID v33; // [rsp+68h] [rbp-98h]
  GUID v34; // [rsp+78h] [rbp-88h]
  GUID v35; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v38; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v39; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v40; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING v41; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v42; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v43; // [rsp+118h] [rbp+18h] BYREF

  string = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x54u, (int)a2, a3);
  v5 = v4 - 1;
  if ( v4 > 0x54 )
    v5 = 84;
  v6 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVector`1<Windows.Internal.Shell.Chaining.IChainLink>",
         v5,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    __debugbreak();
  }
  v39 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x58u, v7, v8);
  v10 = v9 - 1;
  if ( v9 > 0x58 )
    v10 = 88;
  v11 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IVectorView`1<Windows.Internal.Shell.Chaining.IChainLink>",
          v10,
          &v38,
          &v39);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    __debugbreak();
  }
  v41 = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x56u, v12, v13);
  v15 = v14 - 1;
  if ( v14 > 0x56 )
    v15 = 86;
  v16 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IIterator`1<Windows.Internal.Shell.Chaining.IChainLink>",
          v15,
          &v40,
          &v41);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    __debugbreak();
  }
  v30[0] = string;
  v30[1] = v39;
  v30[2] = v41;
  v31 = GUID_602076f4_9793_429d_a999_f951052e28e9;
  v32 = GUID_5f3c645e_9bbb_5278_b66a_b3b91222f682;
  v33 = GUID_bc3c36e9_6975_5bdd_8f0a_07d8d9136aa9;
  v34 = GUID_c6850dd9_2ffa_5d90_82ff_1d21fb413706;
  v35 = GUID_3fd15e42_1b6b_5849_86eb_3a0e746d1c7e;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  v43 = 0LL;
  v19 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &v42, &v43);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, v20, v21);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(v43, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v29);
  if ( ActivationFactory < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    return (unsigned int)ActivationFactory;
  }
  v28 = 0LL;
  v24 = v29;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{248,{flat}}(v24, v30, &v28);
  if ( ActivationFactory < 0 )
  {
    v25 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return (unsigned int)ActivationFactory;
  }
  v27 = v28;
  v28 = 0LL;
  *a2 = v27;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  return 0LL;
}
