/*
 * XREFs of EditionPostMouseWheelToForeground @ 0x1401425BC
 * Callers:
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1400BA3AC (ApiSetEditionPostMouseWheelToForeground.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall EditionPostMouseWheelToForeground(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9))(_QWORD, __int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64)
{
  unsigned int v12; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64); // rax

  v12 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4888LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64, __int64, int, __int64, __int64))result(v12, a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
