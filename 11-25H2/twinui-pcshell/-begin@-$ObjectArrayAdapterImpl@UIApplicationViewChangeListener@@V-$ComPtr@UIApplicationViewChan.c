/*
 * XREFs of ?begin@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180174810
 * Callers:
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x180598F20 (_lambda_f3af541e54fed362ec31214e5f0f3de2_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
unsigned int *__fastcall details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::begin(
        _DWORD *a1,
        unsigned int *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbp
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v3 = (__int64 *)(a2 + 2);
  *((_QWORD *)a2 + 1) = 0LL;
  for ( *((_QWORD *)a2 + 2) = a1; *a2 < a1[2]; a1 = (_DWORD *)*((_QWORD *)a2 + 2) )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
    v6 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = v5(v4, *a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v3);
    if ( v7 >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v7);
    ++*a2;
  }
  return a2;
}
