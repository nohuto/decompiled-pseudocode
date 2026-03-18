/*
 * XREFs of KeInitializeTriageDumpDataArray @ 0x1404F12A0
 * Callers:
 *     PopBSDiagBugcheckCallback @ 0x14060D990 (PopBSDiagBugcheckCallback.c)
 *     PopWatchdogDumpControlRoutine @ 0x1406137A0 (PopWatchdogDumpControlRoutine.c)
 *     IopInitializeTriageDumpData @ 0x140793B40 (IopInitializeTriageDumpData.c)
 *     PspCriticalProcessDeathInfoCollect @ 0x1407FAC80 (PspCriticalProcessDeathInfoCollect.c)
 *     PopWatchdogInit @ 0x140CD5E24 (PopWatchdogInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeInitializeTriageDumpDataArray(PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray, ULONG Size)
{
  NTSTATUS result; // eax

  if ( !KtriageDumpDataArray )
    return -1073741811;
  if ( Size < 0x40 )
    return -1073741789;
  KtriageDumpDataArray->List.Blink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->List.Flink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->NumBlocksTotal = (Size - 48) >> 4;
  result = 0;
  KtriageDumpDataArray->NumBlocksUsed = 0;
  KtriageDumpDataArray->VirtMemSize = 0;
  *(_QWORD *)&KtriageDumpDataArray->ComponentNameBufferLength = 0x2000000LL;
  KtriageDumpDataArray->Blocks[0].Address = 0LL;
  return result;
}
