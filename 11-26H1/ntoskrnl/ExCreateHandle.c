/*
 * XREFs of ExCreateHandle @ 0x140AAACB4
 * Callers:
 *     PsAssignThreadId @ 0x14049C08C (PsAssignThreadId.c)
 * Callees:
 *     ExCreateHandleEx @ 0x140907CD0 (ExCreateHandleEx.c)
 */

__int64 __fastcall ExCreateHandle(unsigned int *a1, __int64 a2)
{
  return ExCreateHandleEx(a1, a2, 0, 0LL, 0LL);
}
