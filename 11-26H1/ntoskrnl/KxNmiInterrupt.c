/*
 * XREFs of KxNmiInterrupt @ 0x140733F80
 * Callers:
 *     KiNmiInterruptStart @ 0x140733AC0 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x1405FD570 (KiSaveProcessorState.c)
 */

char __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)v2);
  return KiProcessNMI(v0 - 128, (__int64)v2);
}
