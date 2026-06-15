/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x180046834
 * Callers:
 *     ?PruneStaleEntries@@YAXAEAV?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@Z @ 0x180046918 (-PruneStaleEntries@@YAXAEAV-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x1800467A8 (std--find_if_Microsoft--WRL--WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___(
        __int64 **a1,
        _QWORD *a2,
        char *a3)
{
  char *v5; // rdi
  __int64 *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // bp
  __int64 v10; // rax
  __int64 v11; // rcx
  char v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (char *)std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___(a2, a3);
  v6 = (__int64 *)v5;
  if ( v5 != a3 )
  {
    while ( 1 )
    {
      v5 += 8;
      if ( v5 == a3 )
        break;
      v14 = 0LL;
      v7 = Microsoft::WRL::WeakRef::As<IInspectable>(v5, &v14);
      v8 = v14;
      v9 = v7 < 0 || !v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( !v9 )
      {
        v10 = 0LL;
        if ( &v13 != v5 )
        {
          v10 = *(_QWORD *)v5;
          *(_QWORD *)v5 = 0LL;
        }
        v11 = *v6;
        *v6 = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        ++v6;
      }
    }
  }
  *a1 = v6;
  return a1;
}
