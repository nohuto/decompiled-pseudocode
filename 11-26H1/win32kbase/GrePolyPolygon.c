/*
 * XREFs of GrePolyPolygon @ 0x140156254
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x140010C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GrePolyPolygon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5))(__int64, __int64, __int64, _QWORD, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1)
                                                                                        + 24)
                                                                            + 2168LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))result(a1, a2, a3, a4, a5);
  return result;
}
