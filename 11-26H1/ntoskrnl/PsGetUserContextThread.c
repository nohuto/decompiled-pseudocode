/*
 * XREFs of PsGetUserContextThread @ 0x1409E8648
 * Callers:
 *     EtwpTraceContextRegisters @ 0x1406C7E48 (EtwpTraceContextRegisters.c)
 * Callees:
 *     PspGetContextThreadInternal @ 0x1409E8E80 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetUserContextThread(int a1, int a2)
{
  return PspGetContextThreadInternal(a1, a2, 0, 1, 1);
}
