/*
 * XREFs of _GetTopLevelWindow @ 0x140062E7C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     EtwTraceInputProcessDelay @ 0x14016D040 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x14016D900 (EtwTraceMessageCheckDelay.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401741B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetTopLevelWindow(__int64 a1))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3560LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
