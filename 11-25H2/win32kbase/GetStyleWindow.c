/*
 * XREFs of GetStyleWindow @ 0x14008A0B8
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x14003FE60 (xxxEnumDisplayMonitors.c)
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetStyleWindow(__int64 a1))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2616LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(a1, 2848LL);
  return result;
}
