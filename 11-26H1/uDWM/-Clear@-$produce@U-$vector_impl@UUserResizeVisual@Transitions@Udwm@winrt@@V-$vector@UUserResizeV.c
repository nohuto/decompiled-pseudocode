/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800DAA20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D98FC (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::Clear(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 *v5; // rdx
  __int64 v6; // rbx
  char v8; // [rsp+20h] [rbp-28h] BYREF

  winrt::impl::collection_version::increment_version((winrt::impl::collection_version *)(((a1 - 16) & -(__int64)(a1 != 0))
                                                                                       + 40));
  v3 = (v2 & -(__int64)(v1 != 0)) + 48;
  if ( &v8 != (char *)v3 )
  {
    v4 = *(__int64 **)((v2 & -(__int64)(v1 != 0)) + 0x30);
    *(_QWORD *)((v2 & -(__int64)(v1 != 0)) + 0x30) = 0LL;
    v5 = *(__int64 **)((v2 & -(__int64)(v1 != 0)) + 0x38);
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    *(_QWORD *)(v3 + 16) = 0LL;
    if ( v4 )
    {
      std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v4, v5);
      std::_Deallocate<16>(v4, (v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  return 0LL;
}
