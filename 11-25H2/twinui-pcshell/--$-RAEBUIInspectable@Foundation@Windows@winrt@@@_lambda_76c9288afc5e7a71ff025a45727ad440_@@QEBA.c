/*
 * XREFs of ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_76c9288afc5e7a71ff025a45727ad440_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x180649F64
 * Callers:
 *     ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_76c9288afc5e7a71ff025a45727ad440_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18064A780 (-Invoke@-$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_la.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall _lambda_76c9288afc5e7a71ff025a45727ad440_::operator()<winrt::Windows::Foundation::IInspectable const &>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  void (__fastcall *v6)(__int64, __int64 *, void **); // rbx
  void **v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    v8 = 0LL;
    v6 = *(void (__fastcall **)(__int64, __int64 *, void **))(*(_QWORD *)v4 + 24LL);
    v7 = winrt::put_abi((winrt *)&v8, a2);
    v6(v4, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::INetworkConnectionUtils>, v7);
    v5 = 0LL;
    if ( v8 )
    {
      v5 = (_QWORD *)(v8 - 16);
      v8 = 0LL;
    }
    v9 = v5;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  else
  {
    v9 = 0LL;
    v5 = 0LL;
  }
  if ( v5 )
  {
    ((void (__fastcall *)(char *, struct IUnknown *))a1[1])((char *)v5 + *((int *)a1 + 4), a2);
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v9);
  }
}
