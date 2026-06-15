/*
 * XREFs of _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator() @ 0x1800FA254
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Do_call @ 0x1801006A0 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Do_call.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180043A48 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180101B14 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_cbfc2ac73cdc91d5edb18bccca546a72_::operator()()
{
  __int64 *v0; // rbx
  __int64 *v1; // rdi
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v2);
  v1 = (__int64 *)*((_QWORD *)&v2 + 1);
  v0 = (__int64 *)v2;
  if ( (_QWORD)v2 != *((_QWORD *)&v2 + 1) )
  {
    do
      (*(void (**)(void))(*(_QWORD *)*v0++ + 384LL))();
    while ( v0 != v1 );
    v1 = (__int64 *)*((_QWORD *)&v2 + 1);
    v0 = (__int64 *)v2;
  }
  if ( v0 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v0, v1);
    std::_Deallocate<16>((void *)v2, (struct std::nothrow_t *)((v3 - v2) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
