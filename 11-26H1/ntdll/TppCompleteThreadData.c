/*
 * XREFs of TppCompleteThreadData @ 0x180016200
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800149B0 (TppSimplepExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180015CD0 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180086430 (RtlpTpTimerCallback.c)
 *     RtlpTpIoCallback @ 0x180086610 (RtlpTpIoCallback.c)
 *     RtlpTpWorkCallback @ 0x1800870E0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x1800BDBE0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800BDDD0 (TppJobpExecuteCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  __int64 v1; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v1 )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - v1;
  }
}
