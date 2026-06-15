/*
 * XREFs of _lambda_9971db2eae47a9fe5413ed8c1598f1b0_::operator() @ 0x180046B84
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_9971db2eae47a9fe5413ed8c1598f1b0___ @ 0x1800D1B98 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800D1B98.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_9971db2eae47a9fe5413ed8c1598f1b0_::operator()(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v6);
  v3 = v6;
  v4 = v2 < 0 || !v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
