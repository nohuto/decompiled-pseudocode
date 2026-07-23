/*
 * XREFs of PopResetRangeEnum @ 0x14060A034
 * Callers:
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
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
