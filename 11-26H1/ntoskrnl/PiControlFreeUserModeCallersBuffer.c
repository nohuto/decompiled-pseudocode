/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x140474950
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140773764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077386C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140773A24 (PiCMDeleteDevice.c)
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     PiCMRegisterDeviceInterface @ 0x14098C74C (PiCMRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14098C8E8 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140997AF8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1409994A8 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140999760 (PiCMCapturePropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1409DA8FC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1409DAB30 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1409FFECC (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140AA05E0 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140AB1EA4 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetObjectPropertyKeys @ 0x140AB3DA8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiControlQueryDeviceRelations @ 0x140AC9CB0 (PiControlQueryDeviceRelations.c)
 *     PiCMGetDeviceDepth @ 0x140AD6DD0 (PiCMGetDeviceDepth.c)
 *     PiControlGetDeviceDepth @ 0x140AD6EF0 (PiControlGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5AE0C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6A43C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6B2E8 (PiCMDeleteClassKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
