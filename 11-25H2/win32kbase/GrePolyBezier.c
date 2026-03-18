/*
 * XREFs of GrePolyBezier @ 0x14019F7A4
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x140097BD0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GrePolyBezier(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24)
                                                              + 2224LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, a2, a3);
  return result;
}
