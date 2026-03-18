/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x14002131C
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x14001FC90 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIEcUnmaskInterrupt @ 0x14002023C (ACPIEcUnmaskInterrupt.c)
 *     ACPIVectorEnable @ 0x140020340 (ACPIVectorEnable.c)
 *     ACPIEcMaskInterrupt @ 0x140020410 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable @ 0x140020520 (ACPIVectorDisable.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x140033D60 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051218 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorClear @ 0x14006AC10 (ACPIVectorClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdx
  int v2; // r9d
  unsigned int v3; // ecx
  unsigned int v4; // eax

  v1 = (unsigned int)BugCheckParameter2;
  v2 = *((unsigned __int16 *)AcpiInformation + 43);
  if ( (unsigned int)BugCheckParameter2 >= 8 * v2 )
  {
    v3 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( (unsigned int)v1 < v3 || (unsigned int)v1 >= v3 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
      KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  }
  v4 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)v1 >= v4 )
    return v2 + (((unsigned int)v1 - v4) >> 3);
  else
    return (unsigned int)v1 >> 3;
}
