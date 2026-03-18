/*
 * XREFs of ExAllocateTimer @ 0x140456CE0
 * Callers:
 *     DifExAllocateTimerWrapper @ 0x140650170 (DifExAllocateTimerWrapper.c)
 *     ExpHeapInitPhase1 @ 0x1406D2FE8 (ExpHeapInitPhase1.c)
 *     WdipSemStartTimeoutCheck @ 0x140821190 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14082D210 (EtwpUpdatePeriodicCaptureState.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x140846D5C (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CreateTlgAggregateSession @ 0x1408A020C (CreateTlgAggregateSession.c)
 *     WdtpAllocateTimer @ 0x140AA403C (WdtpAllocateTimer.c)
 *     HalpPmuArbiterStartPeriodicTimer @ 0x140B11650 (HalpPmuArbiterStartPeriodicTimer.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x140456D20 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
