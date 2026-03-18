/*
 * XREFs of _GetTopLevelWindow @ 0x1400DD720
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x1400DB7E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1400DCB00 (EtwTraceMessageCheckDelay.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1400DD8E0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3136LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
