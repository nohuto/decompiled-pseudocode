/*
 * XREFs of ?SendDeviceCommand@InputStateManager@@UEAAJKPEAUDeviceCommandMessage@@@Z @ 0x180075520
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18003FE48 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@AEAAXAEA_K@Z @ 0x1800CC880 (--$_Reallocate@$0A@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V-$all.c)
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800CC960 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@std@@@std@@@2@AEBW4InputType@@@Z @ 0x1800CD1C0 (-find@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4InputType@@U-$hash@W4I.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::SendDeviceCommand(RTL_SRWLOCK *this, int a2, struct DeviceCommandMessage *a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned __int64 Ptr; // rcx
  _QWORD **v8; // rsi
  _QWORD *i; // rbx
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  char *v15; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF
  RTL_SRWLOCK *v17; // [rsp+88h] [rbp+48h]

  v16 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v6 = this + 20;
  AcquireSRWLockShared(this + 20);
  v17 = v6;
  if ( a2 )
  {
    std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::find(
      &this[12],
      &v15,
      &v16);
    if ( v15 != this[13].Ptr )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        &v13,
        v15 + 16,
        v15 + 24);
  }
  else
  {
    Ptr = (unsigned __int64)this[14].Ptr;
    v15 = (char *)Ptr;
    if ( Ptr > (v14 - (__int64)v13) >> 4 )
    {
      if ( Ptr > 0xFFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::_Reallocate<0>(&v13, &v15);
    }
    v8 = (_QWORD **)this[13].Ptr;
    for ( i = *v8; i != v8; i = (_QWORD *)*i )
      std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::emplace_back<unsigned long const &,IRawInputProvider * &>(
        &v13,
        i + 2,
        i + 3);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  v11 = *((_QWORD *)&v13 + 1);
  v10 = (unsigned int *)v13;
  if ( (_QWORD)v13 != *((_QWORD *)&v13 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, struct DeviceCommandMessage *))(**((_QWORD **)v10 + 1) + 24LL))(
        *((_QWORD *)v10 + 1),
        *v10,
        a3);
      v10 += 4;
    }
    while ( v10 != (unsigned int *)v11 );
    v11 = *((_QWORD *)&v13 + 1);
    v10 = (unsigned int *)v13;
  }
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      (__int64)v10,
      v11);
    std::_Deallocate<16>(v13, (v14 - v13) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return 0LL;
}
