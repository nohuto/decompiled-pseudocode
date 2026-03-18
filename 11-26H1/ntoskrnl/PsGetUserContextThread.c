/*
 * XREFs of PsGetUserContextThread @ 0x1409EBE78
 * Callers:
 *     EtwpTraceContextRegisters @ 0x1406C4208 (EtwpTraceContextRegisters.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x1409EC6B0 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetUserContextThread(int a1, int a2)
{
  return PspGetContextThreadInternal(a1, a2, 0, 1, 1);
}
