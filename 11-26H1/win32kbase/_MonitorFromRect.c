/*
 * XREFs of _MonitorFromRect @ 0x140082058
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall MonitorFromRect(__int64 a1, __int64 a2, unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48)
                                                              + 3512LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD))result(a1, 2LL, a3);
  return result;
}
