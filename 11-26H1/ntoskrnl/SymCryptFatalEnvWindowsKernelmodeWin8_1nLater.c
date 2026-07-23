/*
 * XREFs of SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x140555744
 * Callers:
 *     SymCryptFatal @ 0x1405E7EE8 (SymCryptFatal.c)
 *     SymCryptCallbackRandom_HashlibDefault @ 0x1407274B4 (SymCryptCallbackRandom_HashlibDefault.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall __noreturn SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx

  v1 = BugCheckParameter1;
  xHalTimerWatchdogStop();
  KeBugCheckEx(0x171u, v1, 0LL, 0LL, 0LL);
}
