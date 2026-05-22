/*
 * XREFs of ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x180062E4C
 * Callers:
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$4 @ 0x1801D417C (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$4.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_PointerInputMediator::ContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__PointerInputMediator::ContactData____0___::_Hash_std::_Umap_traits_unsigned_int_PointerInputMediator::ContactData_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__PointerInputMediator::ContactData____0____::_1_::dtor$0 @ 0x1801D7761 (_std--_Hash_std--_Umap_traits_unsigned_int_PointerInputMediator--ContactData_std--__ea_1801D7761.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$4_0 @ 0x1801D7FC1 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$4_0.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::~list<std::pair<unsigned int const,PointerInputMediator::ContactData>>(
        _QWORD *a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx

  v1 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(v3 + 5);
      std::_Deallocate<16>(v3, 56LL);
      v3 = v5;
    }
    while ( v5 );
  }
  return std::_Deallocate<16>(*a1, 56LL);
}
