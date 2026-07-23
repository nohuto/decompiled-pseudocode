/*
 * XREFs of LdrpCgRoutineCallback @ 0x180112B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall LdrpCgRoutineCallback(unsigned __int64 *a1, int a2)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)LdrpCgLogFailure & -(__int64)((a2 & 0x1000000) != 0);
  *a1 = result;
  return result;
}
