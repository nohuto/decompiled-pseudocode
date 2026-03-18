/*
 * XREFs of UMPD_ldevUnloadImageWrap @ 0x1400930CC
 * Callers:
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UMPD_ldevUnloadImageWrap(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1536LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
