/*
 * XREFs of ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1800898D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18006F940 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180088250 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180089A44 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetCloakableWindows(CWin32ApplicationView *this, unsigned int *a2, HWND **a3)
{
  RTL_SRWLOCK *v6; // rdi
  CWin32ApplicationView *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rbx
  HWND v12; // rax
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  unsigned int v16; // esi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+8h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v6 = (RTL_SRWLOCK *)((char *)this - 112);
  AcquireSRWLockExclusive((PSRWLOCK)this - 14);
  v18 = v6;
  v7 = (CWin32ApplicationView *)((char *)this - 152);
  if ( *((_QWORD *)this + 11) )
  {
    v8 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer((CWin32ApplicationView *)((char *)this - 152), a2, a3);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37E,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v8);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    return v9;
  }
  else
  {
    v11 = *(_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                       &v19,
                       (char *)this - 152);
    v12 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    v13 = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
            (char **)this + 10,
            v12);
    v14 = v13;
    if ( v13 >= 0 )
    {
      v15 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer(v7, a2, a3);
      v16 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x384,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
          (const char *)(unsigned int)v15);
      CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(v11 + 232);
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      return v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x383,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v13);
      CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(v11 + 232);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
      return v14;
    }
  }
}
