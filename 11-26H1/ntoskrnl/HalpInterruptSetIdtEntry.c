/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x140594700
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14057D1EC (HalpInitializeInterruptsPn.c)
 *     HalpTimerClockActivate @ 0x1405810E0 (HalpTimerClockActivate.c)
 *     HalpTimerInitializeClock @ 0x14058144C (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x140581638 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x1405819FC (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x1405844A8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x140584B0C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x14058FBA0 (HalpConnectThermalInterrupt.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059D61C (IommuHvInitializeSvmLibrary.c)
 *     HalpIommuInitInterrupts @ 0x140BEBBD8 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140CADD98 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x140594620 (HalpCreateInterrupt.c)
 */

_DWORD *__fastcall HalpInterruptSetIdtEntry(
        unsigned __int8 a1,
        __int64 (__fastcall *a2)(struct _KINTERRUPT *a1, void *a2),
        char a3,
        __int64 a4,
        __int64 a5)
{
  if ( !a3 )
    a3 = a1 >> 4;
  return HalpCreateInterrupt(a2, a1, a3, (__int64)a2, a5);
}
