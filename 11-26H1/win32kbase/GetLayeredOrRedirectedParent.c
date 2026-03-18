/*
 * XREFs of GetLayeredOrRedirectedParent @ 0x140120CC4
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetLayeredOrRedirectedParent(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2208LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
