/*
 * XREFs of KiSetDebuggerOwner @ 0x140530774
 * Callers:
 *     KeSwitchFrozenProcessor @ 0x1404F1C1C (KeSwitchFrozenProcessor.c)
 *     KeFreezeExecution @ 0x140508FA0 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiFreezeTargetExecution @ 0x1405F5E50 (KiFreezeTargetExecution.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405F9B28 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_140FC1DC8;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
