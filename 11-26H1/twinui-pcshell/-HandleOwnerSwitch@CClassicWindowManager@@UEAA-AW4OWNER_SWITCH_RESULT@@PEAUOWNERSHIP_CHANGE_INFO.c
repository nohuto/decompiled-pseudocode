/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180096330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800955FC (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180095E48 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180096140 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180138500 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x1802EBE2C (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, _QWORD *a2)
{
  CClassicWindowManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // r12
  int v6; // r13d
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // r8
  int App; // eax
  struct IClassicWindow *v11; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  void (__fastcall *v15)(struct IClassicWindow *, _QWORD *); // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rax
  struct IClassicWindow *v19; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+48h] BYREF
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF

  v4 = (CClassicWindowManager *)(a1 - 72);
  v5 = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v7 = 0;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  v19 = 0LL;
  v20 = 0LL;
  v21 = *a2;
  v8 = a1 + 112;
  App = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
          a1 + 112,
          &v21,
          v9,
          &v20);
  if ( App < 0
    || (v16 = *(_QWORD *)(a1 + 120),
        v17 = v20,
        App = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IClassicWindow **))(v16 + 8 * v20))(
                *(_QWORD *)(v16 + 8 * v20),
                &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                &v19),
        App < 0) )
  {
    if ( App == -2147319765 )
    {
      if ( (a2[1] & 1) != 0 )
      {
        if ( IsWindowVisible((HWND)*a2) )
        {
          v7 = 1;
        }
        else
        {
          v13 = *(_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v4, &v20, *a2);
          v14 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
          if ( v13 )
            CClassicWindowManager::RecomputeOwnerForDirectOwnees(v4, 0LL, 0LL);
        }
      }
      else if ( (a2[1] & 0x12) != 0 )
      {
        v18 = (_QWORD *)winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                          &v20,
                          v4);
        CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___(v4, *v18);
      }
    }
  }
  else
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v19, *((_DWORD *)a2 + 2));
    if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v19 + 152LL))(v19) )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8, v17);
      v7 = 2;
    }
  }
  v11 = v19;
  if ( v19 && !v7 )
  {
    v15 = *(void (__fastcall **)(struct IClassicWindow *, _QWORD *))(*(_QWORD *)v19 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2 + 2);
    v15(v11, a2 + 2);
    v11 = v19;
  }
  if ( v11 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
  return v7;
}
