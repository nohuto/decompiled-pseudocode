/*
 * XREFs of Phase1Initialization @ 0x14077FEA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     MmEnumerateSystemImages @ 0x1404E5150 (MmEnumerateSystemImages.c)
 *     InbvSetProgressBarSubset @ 0x140530C00 (InbvSetProgressBarSubset.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140CBAC00 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  int inited; // eax
  __int64 v4; // rdx

  qword_140FFB8F0 = KeQueryPerformanceCounter(0LL).QuadPart;
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
    stru_140E2D150.SchedulerApcFill3[9] = 1;
  }
  KeSetEvent(&KiPhase1InitializationComplete, 0, 0);
}
