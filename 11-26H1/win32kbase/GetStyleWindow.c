/*
 * XREFs of GetStyleWindow @ 0x14008250C
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x140081BD0 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x140082180 (UserSetDCVisRgn.c)
 *     xxxEnumDisplayMonitors @ 0x140086930 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetStyleWindow(__int64 a1))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2256LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(a1, 2848LL);
  return result;
}
