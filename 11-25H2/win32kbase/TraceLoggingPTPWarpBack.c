/*
 * XREFs of TraceLoggingPTPWarpBack @ 0x14023F320
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x14018B3D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall TraceLoggingPTPWarpBack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4))(_QWORD, __int64, __int64, _QWORD)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, _QWORD); // rax

  v7 = a1;
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                  + 48)
                                                                      + 7176LL);
  if ( result )
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))result(v7, a2, a3, a4);
  return result;
}
