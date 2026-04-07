/*
 * XREFs of ??1?$removed_values@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x1800DA640
 * Callers:
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::Udwm::Transitions::UserResizeVisual_std::vector_winrt::Udwm::Transitions::UserResizeVisual_std::allocator_winrt::Udwm::Transitions::UserResizeVisual____winrt::impl::single_threaded_collection_base__winrt::Udwm::Transitions::UserResizeVisual_::ReplaceAll_::_1_::dtor$0 @ 0x1800E97EC (_winrt--vector_base_winrt--impl--vector_impl_winrt--Udwm--Transitions--UserResizeVi_ea_1800E97EC.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800D98FC (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

void __fastcall winrt::impl::removed_values<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,void>::~removed_values<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,void>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(v2, *(__int64 **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
