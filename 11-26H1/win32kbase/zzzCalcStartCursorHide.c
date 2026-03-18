/*
 * XREFs of zzzCalcStartCursorHide @ 0x14015746C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall zzzCalcStartCursorHide(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 872LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
