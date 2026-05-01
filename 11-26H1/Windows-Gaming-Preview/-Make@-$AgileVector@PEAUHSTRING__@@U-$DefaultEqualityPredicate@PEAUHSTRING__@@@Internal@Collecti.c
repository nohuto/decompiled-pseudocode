/*
 * XREFs of ?Make@?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180012558
 * Callers:
 *     ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x18001306C (-_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032628 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x180036A18 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000C080 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVectorStatics@Detail@Collections@Foundation@Windows@@@WRL@Mic.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BNI@AA @ 0x180011CE8 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BNI@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::Make(
        _QWORD *a1)
{
  __int64 *v2; // rbx
  HRESULT v3; // eax
  int ActivationFactory; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF

  *a1 = 0LL;
  v11 = 0LL;
  v2 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Detail::IVectorStatics>>(&v11);
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x1800126B9LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, v2);
  if ( ActivationFactory >= 0 )
  {
    v12 = 0LL;
    ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{216,{flat}}(v11);
    if ( ActivationFactory >= 0 )
    {
      v8 = v12;
      v12 = 0LL;
      *a1 = v8;
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return 0;
    }
    else
    {
      v6 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v7 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
  }
  else
  {
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)ActivationFactory;
}
