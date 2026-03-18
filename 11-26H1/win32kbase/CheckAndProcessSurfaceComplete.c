/*
 * XREFs of CheckAndProcessSurfaceComplete @ 0x14018F380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall CheckAndProcessSurfaceComplete(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2728LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
