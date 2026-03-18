/*
 * XREFs of GreSelectRedirectionBitmap @ 0x14012A6F0
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 *     DestroyMonitorDCs @ 0x14007F970 (DestroyMonitorDCs.c)
 *     DestroyCacheDC @ 0x1401D9EE0 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreSelectRedirectionBitmap(__int64 a1, __int64 a2))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2616LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(a1, a2);
  return result;
}
