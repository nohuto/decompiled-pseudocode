/*
 * XREFs of std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x1800467A8
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_92c40f897d3a9c7e927f302002ea2ff3___ @ 0x180046834 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_Microsoft::WRL::WeakRef____lambda_92c40f897d3a9c7e927f302002ea2ff3___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *i; // rbx
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // di
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a1; i != a2; ++i )
  {
    v8 = 0LL;
    v4 = Microsoft::WRL::WeakRef::As<IInspectable>(i, &v8);
    v5 = v8;
    v6 = v4 < 0 || !v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    if ( v6 )
      break;
  }
  return i;
}
