/*
 * XREFs of CarInitLogging @ 0x140649174
 * Callers:
 *     CarInit @ 0x140649ADC (CarInit.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x140648A94 (CarEtwRegister.c)
 *     CarWriteEarlyRuleViolationEvents @ 0x14064C650 (CarWriteEarlyRuleViolationEvents.c)
 *     DifiDbgPrint @ 0x14064C7F0 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v2; // eax

  v0 = 0;
  if ( CarLogInitialized )
    return 0LL;
  if ( !dword_140E08EA8 || !tlgKeywordOn((__int64)&dword_140E08EA8, 0x800000000000LL) )
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
