/*
 * XREFs of ExCreateHandle @ 0x140AACBF8
 * Callers:
 *     PsAssignThreadId @ 0x1404A266C (PsAssignThreadId.c)
 * Callees:
 *     ExCreateHandleEx @ 0x14092C1A0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(unsigned int *a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0LL, 0LL);
}
