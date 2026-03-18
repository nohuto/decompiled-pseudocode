/*
 * XREFs of _CmIsRootDevice @ 0x140932574
 * Callers:
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     _CmGetDeviceParent @ 0x1409322F8 (_CmGetDeviceParent.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409342F0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmSetDeviceMappedProperty @ 0x14094EA4C (_CmSetDeviceMappedProperty.c)
 *     _CmSetDeviceRegPropWorker @ 0x140951084 (_CmSetDeviceRegPropWorker.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     _CmUpdateDevicePanel @ 0x140A45108 (_CmUpdateDevicePanel.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &stru_1400026F0, 1u);
}
