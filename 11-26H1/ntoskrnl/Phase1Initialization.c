/*
 * XREFs of Phase1Initialization @ 0x1407829A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 *     InbvSetProgressBarSubset @ 0x140533100 (InbvSetProgressBarSubset.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140CC0C78 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  int inited; // eax
  __int64 v4; // rdx

  qword_140FFC8F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  KeInitializeEvent(&KiPhase1InitializationComplete, NotificationEvent, 0);
  InbvSetProgressBarSubset(25LL, 75LL);
  inited = IoInitSystem(StartContext);
  if ( inited < 0 )
    KeBugCheckEx(0x69u, (unsigned int)IopInitFailCode, (unsigned int)inited, 0LL, 0LL);
  LOBYTE(v4) = v2;
  Phase1InitializationIoReady(StartContext, v4);
  if ( !KiDeferFreeInitCode )
  {
    MmEnumerateSystemImages((__int64)MiFreeBootDriverInitializationCode, 0LL);
    stru_140E2D2D0.SchedulerApcFill3[9] = 1;
  }
  KeSetEvent(&KiPhase1InitializationComplete, 0, 0);
}
