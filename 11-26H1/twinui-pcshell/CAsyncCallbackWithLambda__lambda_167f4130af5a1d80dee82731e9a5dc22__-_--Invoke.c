/*
 * XREFs of CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22__&_::Invoke @ 0x180211A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_167f4130af5a1d80dee82731e9a5dc22____::Invoke(__int64 a1)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL) + 488LL))(*(_QWORD *)(a1 + 48) + 112LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
