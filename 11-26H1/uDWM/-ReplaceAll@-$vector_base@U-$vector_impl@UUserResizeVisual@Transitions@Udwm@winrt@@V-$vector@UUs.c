/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXU?$array_view@$$CBUUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x1800DBD0C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x1800DBCC0 (-ReplaceAll@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserRe.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAXPEBUUserResizeVisual@Transitions@Udwm@winrt@@_K@Z @ 0x1800D97A8 (--$_Assign_counted_range@PEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisua.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D98FC (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800DCFCC (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::ReplaceAll(
        winrt::impl::collection_version *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  winrt::impl::collection_version::increment_version(a1);
  v3 = v2 + 8;
  if ( !v2 )
    v3 = 48LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v7 != (__int128 *)v3 )
  {
    v4 = *(__int64 **)v3;
    *(_QWORD *)&v7 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
    v5 = *(__int64 **)(v3 + 8);
    *((_QWORD *)&v7 + 1) = v5;
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    v8 = v6;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Assign_counted_range<winrt::Udwm::Transitions::UserResizeVisual const *>(
    v3,
    *(__int64 **)v1,
    *(unsigned int *)(v1 + 8));
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v4, v5);
    std::_Deallocate<16>(v4, (v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
