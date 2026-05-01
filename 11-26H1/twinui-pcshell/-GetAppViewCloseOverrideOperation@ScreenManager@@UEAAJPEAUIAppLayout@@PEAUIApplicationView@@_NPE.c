/*
 * XREFs of ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x180521810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x18022B250 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x1804BC694 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 *     ?CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x18052161C (-CreateReverseAppToAppSwitchLayoutOperation@ScreenManagerHelpers@@YAJPEAUITabletModePositioner@@.c)
 *     ?RemoveAt@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAJ_K@Z @ 0x180522070 (-RemoveAt@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntry.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation(
        ScreenManager *this,
        struct IAppLayout *a2,
        struct IApplicationView *a3,
        char a4,
        struct IAppLayoutOperation **a5)
{
  struct IAppLayoutOperation **v8; // rsi
  unsigned int v9; // edi
  char *v11; // r14
  __int64 v12; // r15
  struct IApplicationView *v13; // rbx
  struct IUnknown *v14; // r8
  struct IApplicationView *v15; // r8
  int ReverseAppToAppSwitchLayoutOperation; // eax
  struct IApplicationView *v17[2]; // [rsp+20h] [rbp-20h] BYREF
  char v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct ITabletModePositioner *v20; // [rsp+70h] [rbp+30h] BYREF

  v8 = a5;
  *a5 = 0LL;
  if ( !*((_BYTE *)this + 336) )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)0x8007139FLL);
    return v9;
  }
  if ( !*((_QWORD *)this + 39) )
    return 2147500037LL;
  v11 = (char *)this + 304;
  v12 = *((_QWORD *)this + 38);
  v13 = (struct IApplicationView *)*winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                                      &a5,
                                      (__int64)this - 8);
  v17[1] = v13;
  v18 = 1;
  if ( !SHIsSameObject(*(struct IUnknown **)(v12 + 16), v14) )
  {
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)v13 + 312);
    return 2147947423LL;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, struct IAppLayout *, __int64))(**(_QWORD **)(v12 + 8) + 200LL))(
          *(_QWORD *)(v12 + 8),
          a2,
          2LL) )
  {
    v9 = -2147019873;
LABEL_12:
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)v13 + 312);
    return v9;
  }
  v20 = 0LL;
  v17[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  TabletModePositionerHelpers::GetApplicationViewsFromLayout(
    *(TabletModePositionerHelpers **)v12,
    (struct IAppLayout *)&a5,
    (unsigned int *)&v20,
    v17);
  LOBYTE(v15) = a4;
  ReverseAppToAppSwitchLayoutOperation = ScreenManagerHelpers::CreateReverseAppToAppSwitchLayoutOperation(
                                           *((ScreenManagerHelpers **)this + 37),
                                           v20,
                                           v15,
                                           (__int64)v8);
  v9 = ReverseAppToAppSwitchLayoutOperation;
  if ( ReverseAppToAppSwitchLayoutOperation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB9,
      (int)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
      (const char *)(unsigned int)ReverseAppToAppSwitchLayoutOperation);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v17);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
    goto LABEL_12;
  }
  CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAt(
    v11,
    0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return 0LL;
}
