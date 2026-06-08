/*
 * XREFs of CpcReadFeedback @ 0x1400089F0
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x140003EBC (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation((void (__fastcall *)(__int64 *, int *))CpcSubspaceReadFeedback, a1, 1);
}
