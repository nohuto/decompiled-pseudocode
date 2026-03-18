/*
 * XREFs of GreHintDCWnd @ 0x1400D5354
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreHintDCWnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5))(__int64, __int64, __int64, _QWORD, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                            a1,
                                                                                            a2)
                                                                                        + 24)
                                                                            + 2624LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))result(a1, a2, a3, a4, a5);
  return result;
}
