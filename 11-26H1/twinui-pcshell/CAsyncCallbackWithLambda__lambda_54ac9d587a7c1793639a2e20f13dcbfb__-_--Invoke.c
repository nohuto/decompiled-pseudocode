/*
 * XREFs of CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&_::Invoke @ 0x180202BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb____::Invoke(__int64 a1)
{
  __int64 v2; // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v2 + 168) )
    (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(v2 + 160) + 72LL))(**(_QWORD **)(v2 + 160));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
