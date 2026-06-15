/*
 * XREFs of _lambda_283a894bf8929531b9ad677e2f0508f5_::operator() @ 0x180100CB8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&_::_Do_call @ 0x180102510 (std--_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft--_ea_180102510.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall lambda_283a894bf8929531b9ad677e2f0508f5_::operator()(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // esi
  unsigned int (*v6)(void); // rax
  char v7; // bl
  _DWORD *v8; // rax

  if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 200LL))(*a2) != **(_DWORD **)a1 )
    return 0;
  v5 = **(_DWORD **)(a1 + 16);
  v6 = *(unsigned int (**)(void))(*(_QWORD *)*a2 + 128LL);
  if ( **(_DWORD **)(a1 + 8) == 3 )
  {
    v7 = 0;
    if ( v6() == v5 || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 136LL))(*a2, v5) )
      return v7;
  }
  else if ( v6() != v5 )
  {
    v8 = *(_DWORD **)(a1 + 8);
    v7 = 0;
    if ( *v8 != 2 || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 136LL))(*a2, v5) )
      return v7;
  }
  return 1;
}
