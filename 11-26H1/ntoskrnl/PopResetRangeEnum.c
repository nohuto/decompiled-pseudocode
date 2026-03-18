/*
 * XREFs of PopResetRangeEnum @ 0x1406074D8
 * Callers:
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetRangeEnum(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[10];
  a1[15] = result;
  a1[16] = 0LL;
  return result;
}
