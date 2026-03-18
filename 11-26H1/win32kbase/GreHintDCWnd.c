/*
 * XREFs of GreHintDCWnd @ 0x14011769C
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreHintDCWnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6))(__int64, __int64, __int64, __int64, int, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, int, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                              + 24)
                                                                                  + 2648LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int))result(a1, a2, a3, a4, a5, a6);
  return result;
}
