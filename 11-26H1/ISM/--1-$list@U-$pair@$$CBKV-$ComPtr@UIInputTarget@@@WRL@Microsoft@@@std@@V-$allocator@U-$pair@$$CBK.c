/*
 * XREFs of ??1?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180052F08
 * Callers:
 *     _InputContext::Create_::_1_::dtor$7 @ 0x1801D4350 (_InputContext--Create_--_1_--dtor$7.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0____::_1_::dtor$0 @ 0x1801D47F0 (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__std--_Uhash_com.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$13 @ 0x1801D61B0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::~list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>(
        _QWORD *a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rcx

  v2 = (_QWORD **)*a1;
  **(_QWORD **)(*a1 + 8LL) = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      v6 = v3[3];
      if ( v6 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      std::_Deallocate<16>(v3, 32LL);
      v3 = v5;
    }
    while ( v5 );
  }
  return std::_Deallocate<16>(*a1, 32LL);
}
