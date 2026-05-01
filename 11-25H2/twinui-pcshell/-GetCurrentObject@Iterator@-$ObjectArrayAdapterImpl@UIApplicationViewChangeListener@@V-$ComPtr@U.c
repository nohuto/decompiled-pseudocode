/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180038AE8
 * Callers:
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x180598F20 (_lambda_f3af541e54fed362ec31214e5f0f3de2_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::GetCurrentObject(
        unsigned int *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbp
  __int64 v8; // rcx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (unsigned int *)*((_QWORD *)a1 + 2);
  result = v4[2];
  if ( *a1 < (unsigned int)result )
  {
    do
    {
      v6 = *(_QWORD *)v4;
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)v4 + 32LL);
      v8 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      result = v7(v6, *a1, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v2);
      if ( (int)result >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x35,
        (unsigned int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
        (const char *)(unsigned int)result,
        v9);
      result = ++*a1;
      v4 = (unsigned int *)*((_QWORD *)a1 + 2);
    }
    while ( (unsigned int)result < v4[2] );
  }
  return result;
}
