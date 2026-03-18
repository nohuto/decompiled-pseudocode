/*
 * XREFs of HalpInterruptFindLines @ 0x1404265EC
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057C19C (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057D340 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptIsCmciSupported @ 0x14057D4A4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14057D4EC (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptRestoreClock @ 0x14057D8C8 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x14058FBA0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x14058FDB4 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x14058FE70 (HalpInitializeDeferredErrorVector.c)
 *     HalpApicInitializeIoUnit @ 0x1405A1690 (HalpApicInitializeIoUnit.c)
 *     HalpInterruptUnmap @ 0x140781218 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140C08BC0 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140426C98 (HalpInterruptLookupController.c)
 */

_QWORD *__fastcall HalpInterruptFindLines(unsigned int *a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r10
  __int64 v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // ecx
  _QWORD *result; // rax
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
  {
    v4 = (_QWORD *)(v1 + 264);
    v5 = *(_QWORD **)(v1 + 264);
    while ( v5 != v4 )
    {
      v6 = *(_DWORD *)(v3 + 4);
      result = v5;
      v5 = (_QWORD *)*v5;
      v8 = *((_DWORD *)result + 5);
      if ( v8 <= v6 && *((_DWORD *)result + 6) > v6 )
      {
        if ( v2 )
          *v2 = v6 - v8;
        return result;
      }
    }
  }
  return 0LL;
}
