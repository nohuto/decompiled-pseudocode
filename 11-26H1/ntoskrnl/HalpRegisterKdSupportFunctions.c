/*
 * XREFs of HalpRegisterKdSupportFunctions @ 0x140CBA954
 * Callers:
 *     HalpDbgInitSystem @ 0x140BF1610 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *HalpRegisterKdSupportFunctions()
{
  unsigned __int8 *result; // rax

  off_140E00870[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140E00858[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140E00868[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140E00880[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140E00888 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140E00890 = (__int64)HalpKdReadPCIConfig;
  qword_140E00898 = (__int64)HalpKdWritePCIConfig;
  off_140E00A88[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140E00860[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140E00968 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140E00BB8[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &IommuInterfaceStateChangeCallbackPushLock.ApcState.InProgressFlags;
  IommuInterfaceStateChangeCallbackPushLock.WaitStatus = (volatile __int64)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40];
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40] = &IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40];
  off_140E00960[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
