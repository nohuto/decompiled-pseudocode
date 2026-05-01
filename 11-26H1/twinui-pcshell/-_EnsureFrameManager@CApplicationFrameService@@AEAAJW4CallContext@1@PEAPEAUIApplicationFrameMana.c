/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800D5B50
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800D5930 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18022A280 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18022C9C0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1__&_ @ 0x1802F9320 (Windows--Internal--ComTaskPool--QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1__-_.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x1802F943C (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ??0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAIAEAPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@AEAPEAIAEAV_lambda_990521e561bc13f238039e7a89bd70b9_@@@Z @ 0x1802F9484 (--0_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_@@QEAA@PEAV-$SimpleVectorIterator@UCoreKeyboardPosit.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, unsigned __int64 *a3)
{
  _DWORD *v5; // rsi
  int v6; // r15d
  char v7; // bl
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int UniqueContext; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  CCriticalFailureHandler *v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v18; // [rsp+20h] [rbp-40h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-38h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-38h]
  _BYTE v21[48]; // [rsp+30h] [rbp-30h] BYREF
  CCriticalFailureHandler *v22; // [rsp+A0h] [rbp+40h] BYREF
  int v23; // [rsp+A8h] [rbp+48h] BYREF
  unsigned __int64 v24; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+58h] BYREF

  v23 = a2;
  *a3 = 0LL;
  LODWORD(v22) = -2147023728;
  v24 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    v7 = 0;
    if ( v6 == 2 )
    {
      LODWORD(v22) = 0;
      v8 = *(_QWORD *)(a1 + 176);
      v9 = v24;
      if ( v24 != v8 )
      {
        if ( v8 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(a1 + 176));
          v9 = v24;
        }
        v24 = v8;
        if ( v9 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
        v7 = 0;
      }
    }
  }
  else
  {
    v7 = 1;
    *v5 = 1;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v7 )
  {
    if ( v6 != 1 )
      goto LABEL_11;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>((volatile void *)(a1 + 196));
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = *v5 != 2 ? 0x80070490 : 0;
    LODWORD(v22) = *v5 != 2 ? 0x80070490 : 0;
    if ( !v23 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v16, (int *)&v22);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v16 = (unsigned int)v22;
      }
      if ( (v16 & 0x80000000) == 0LL )
        goto LABEL_30;
      if ( (_DWORD)v16 != -2147024882 && (_DWORD)v16 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          (CCriticalFailureHandler *)v16,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4CFu,
          v17,
          v19);
        LODWORD(v16) = (_DWORD)v22;
      }
    }
    if ( (v16 & 0x80000000) != 0LL )
    {
LABEL_31:
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_11;
    }
LABEL_30:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v24, (_QWORD *)(a1 + 176));
    goto LABEL_31;
  }
  winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
    &v25,
    a1);
  _lambda_712b0f2f9fa774d9b54f88f4633a7b7e_::_lambda_712b0f2f9fa774d9b54f88f4633a7b7e_(
    (unsigned int)v21,
    (unsigned int)&v22,
    a1,
    (unsigned int)&v23,
    (__int64)&v25,
    (__int64)&v24);
  UniqueContext = SHTaskPoolGetUniqueContext();
  v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_4374eff018dc91e582b31b47abd97ab1____(
          v13,
          v12,
          UniqueContext,
          v21);
  if ( v14 < 0 )
  {
    LODWORD(v22) = v14;
    if ( !v23 )
    {
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v22);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        v14 = (int)v22;
      }
      if ( v14 < 0 && v14 != -2147024882 && v14 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v15,
          (int *)&v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4BDu,
          v18,
          v20);
    }
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_DWORD *)(v25 + 196) = 0;
    WakeByAddressAll((PVOID)(v25 + 196));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
LABEL_11:
  *a3 = v24;
  return (unsigned int)v22;
}
