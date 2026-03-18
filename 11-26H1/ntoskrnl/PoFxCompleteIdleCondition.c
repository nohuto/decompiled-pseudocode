/*
 * XREFs of PoFxCompleteIdleCondition @ 0x140489250
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x140582CE0 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x1405910D0 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x140693010 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021A640 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 */

void __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // edi
  int v4; // eax

  v3 = BugCheckParameter3;
  v4 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter2[109]
                                                                   + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( v4 )
  {
    if ( v4 < 0 )
      PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    PopFxIdleWorkerTail(BugCheckParameter2, v3, 0LL);
  }
}
