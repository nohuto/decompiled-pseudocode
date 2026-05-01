/*
 * XREFs of CAsyncCallbackWithLambda__lambda_61eb9ea7c91726b5f7f26d1710998484___::Invoke @ 0x18047C5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_61eb9ea7c91726b5f7f26d1710998484___::Invoke(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 408LL);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, *(unsigned int *)(a1 + 56));
  return 0LL;
}
