/*
 * XREFs of HalpInterruptSetIdtEntry @ 0x140596E80
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14057F70C (HalpInitializeInterruptsPn.c)
 *     HalpTimerClockActivate @ 0x140583600 (HalpTimerClockActivate.c)
 *     HalpTimerInitializeClock @ 0x14058396C (HalpTimerInitializeClock.c)
 *     HalpTimerInitializeClockPn @ 0x140583B58 (HalpTimerInitializeClockPn.c)
 *     HalpTimerConfigureInterrupt @ 0x140583F1C (HalpTimerConfigureInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x1405869C8 (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x14058702C (HalpTimerTestHypervisorTimer.c)
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     IommuHvInitializeSvmLibrary @ 0x14059FD9C (IommuHvInitializeSvmLibrary.c)
 *     HalpIommuInitInterrupts @ 0x140BF1BD8 (HalpIommuInitInterrupts.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpCreateInterrupt @ 0x140596DA0 (HalpCreateInterrupt.c)
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
