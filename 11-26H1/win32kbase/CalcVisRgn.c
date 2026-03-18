/*
 * XREFs of CalcVisRgn @ 0x140119088
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall CalcVisRgn(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(__int64, __int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                                       + 2240LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))result(a1, a2, a3, a4);
  return result;
}
