/*
 * XREFs of UserRemoveWindowedSwapChain @ 0x140185F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UserRemoveWindowedSwapChain(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3688LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
