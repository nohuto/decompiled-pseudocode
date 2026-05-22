/*
 * XREFs of ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1800FB28C
 * Callers:
 *     ?OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x180068BC0 (-OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 * Callees:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18006B4CC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800AE908 (-clear@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x1800F99C8 (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x1800FC51C (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CustomCursorApplication2::Cleanup(CustomCursorApplication2 *this)
{
  SystemCursor2 *v2; // rbp
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  SystemCursor2 *v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]

  std::weak_ptr<SystemCursorService2>::lock((__int64)this, &v7);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, SystemCursor2 **))(*(_QWORD *)(v7 + 8) + 104LL))(v7 + 8, &v5);
    v2 = v5;
    if ( v5 )
    {
      v3 = (_QWORD *)*((_QWORD *)this + 3);
      for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
      {
        if ( SystemCursor2::ShapeExists(v2, i[2]) )
        {
          SystemCursor2::RemoveShape(v2, i[2]);
          v2 = v5;
        }
      }
    }
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::clear((_QWORD *)this + 2);
  *((_DWORD *)this + 20) = 0;
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 11);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
