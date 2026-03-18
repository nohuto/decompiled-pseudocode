/*
 * XREFs of FreezeThawProcessTimers @ 0x14023ECF0
 * Callers:
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401A656C (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401A6EA8 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FreezeThawProcessTimers(__int64 a1, __int64 a2))(__int64, _QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v2 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1240LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, v2);
  return result;
}
