/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14046E0D0
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140776764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14091B4B8 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiControlGetDeviceDepth @ 0x14094CEB0 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceDepth @ 0x14094D0A0 (PiCMGetDeviceDepth.c)
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14094D350 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140958558 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x14095A1C0 (PiCMCapturePropertyInputData.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140A17B4C (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140A17D80 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140AA1F70 (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB5148 (PiCMGetObjectPropertyKeys.c)
 *     PiControlQueryDeviceRelations @ 0x140ACBDC0 (PiControlQueryDeviceRelations.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5E128 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140B73060 (PiCMCaptureInterfaceListInputData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
