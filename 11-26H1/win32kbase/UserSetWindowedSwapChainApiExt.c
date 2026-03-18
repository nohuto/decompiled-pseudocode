/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x140183090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UserSetWindowedSwapChainApiExt(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(__int64, _QWORD, __int64)
{
  __int64 (__fastcall *result)(__int64, _QWORD, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                              + 3680LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64))result(a1, a2, a3);
  return result;
}
