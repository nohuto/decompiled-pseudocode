/*
 * XREFs of HalpInterruptFindLines @ 0x1404336FC
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140435DF0 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404360DC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14057F860 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptIsCmciSupported @ 0x14057F9C4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14057FA0C (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptRestoreClock @ 0x14057FDE8 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x140592320 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140592534 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x1405925F0 (HalpInitializeDeferredErrorVector.c)
 *     HalpApicInitializeIoUnit @ 0x1405A3EA0 (HalpApicInitializeIoUnit.c)
 *     HalpInterruptUnmap @ 0x140783D18 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140C0EDD0 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
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
