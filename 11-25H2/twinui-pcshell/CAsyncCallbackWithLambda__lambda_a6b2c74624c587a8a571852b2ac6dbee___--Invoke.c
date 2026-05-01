/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::Invoke @ 0x18047C5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_a6b2c74624c587a8a571852b2ac6dbee___::Invoke(__int64 a1)
{
  __int64 v1; // r10

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 408LL);
  if ( v1 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v1 + 56LL))(
      v1,
      *(unsigned int *)(a1 + 56),
      *(unsigned int *)(a1 + 60),
      *(unsigned int *)(a1 + 64),
      *(_DWORD *)(a1 + 68));
  return 0LL;
}
