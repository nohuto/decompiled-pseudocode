/*
 * XREFs of ExAllocateTimer @ 0x14044E550
 * Callers:
 *     DifExAllocateTimerWrapper @ 0x140653D50 (DifExAllocateTimerWrapper.c)
 *     ExpHeapInitPhase1 @ 0x1406D7018 (ExpHeapInitPhase1.c)
 *     WdipSemStartTimeoutCheck @ 0x1408273A0 (WdipSemStartTimeoutCheck.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     ?ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z @ 0x14084CFBC (-ExpLookasideMgrStart@@YAJPEAU_EXP_LOOKASIDE_MGR@@@Z.c)
 *     CreateTlgAggregateSession @ 0x1408A661C (CreateTlgAggregateSession.c)
 *     WdtpAllocateTimer @ 0x140AA4D68 (WdtpAllocateTimer.c)
 *     HalpPmuArbiterStartPeriodicTimer @ 0x140B133D0 (HalpPmuArbiterStartPeriodicTimer.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAllocateTimer(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 2) != 0 )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, a3, 0LL);
  return ExAllocateTimerInternal2(a1, a2, 0LL, a3);
}
