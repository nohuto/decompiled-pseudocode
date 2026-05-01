/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___::Invoke @ 0x1802271F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d26a2e546f8ac9cdcd5c14dc0e8aed0a___::Invoke(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 408);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v2 + 64LL))(
      v2,
      *(unsigned int *)(v1 + 448),
      *(unsigned int *)(v1 + 456),
      *(unsigned int *)(v1 + 452),
      *(_DWORD *)(v1 + 460));
  return 0LL;
}
