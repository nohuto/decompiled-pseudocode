/*
 * XREFs of CarInitLogging @ 0x14064CD54
 * Callers:
 *     CarInit @ 0x14064D6BC (CarInit.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x14064C674 (CarEtwRegister.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x140650230 (CarWriteEarlyRuleViolationEvents.c)
 *     DifiDbgPrint @ 0x1406503D0 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( CarLogInitialized )
    return 0LL;
  if ( !dword_140E08E50 || !tlgKeywordOn((__int64)&dword_140E08E50, 0x800000000000LL) )
  {
    CarEtwRandomSeed = KeQueryPerformanceCounter(0LL).QuadPart;
    v2 = CarEtwRegister();
    v0 = v2;
    if ( v2 < 0 )
      DifiDbgPrint("CarLogging failed to initialize with %08lx\n", v2);
    CarLogInitialized = 1;
    CarWriteEarlyRuleViolationEvents();
  }
  return v0;
}
