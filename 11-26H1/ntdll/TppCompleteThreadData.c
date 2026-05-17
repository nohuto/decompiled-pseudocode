/*
 * XREFs of TppCompleteThreadData @ 0x18002B100
 * Callers:
 *     TppSimplepExecuteCallback @ 0x1800298E0 (TppSimplepExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18002ABD0 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180065FE0 (RtlpTpTimerCallback.c)
 *     RtlpTpIoCallback @ 0x1800661C0 (RtlpTpIoCallback.c)
 *     RtlpTpWorkCallback @ 0x180066C90 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x1800C0450 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800C0640 (TppJobpExecuteCallback.c)
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
