/*
 * XREFs of FreezeThawProcessTimers @ 0x14015E1A0
 * Callers:
 *     ?Freeze@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9914 (-Freeze@tagPROCESSINFO@@AEAAXXZ.c)
 *     ?Thaw@tagPROCESSINFO@@AEAAXXZ @ 0x1401B9A48 (-Thaw@tagPROCESSINFO@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall FreezeThawProcessTimers(__int64 a1, unsigned int a2))(__int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 1016LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, a2);
  return result;
}
