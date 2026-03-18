/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1409A6B58
 * Callers:
 *     PiCMCaptureRegistryPropertyInputData @ 0x140997AF8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1409994A8 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140999760 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1409A6390 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1409A6850 (NtPlugPlayControl.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409A6A70 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetSetDeviceStatus @ 0x1409A74C0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetRelatedDevice @ 0x1409A8800 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureRegistryInputData @ 0x1409FFECC (PiCMCaptureRegistryInputData.c)
 *     PiControlGetPropertyData @ 0x140A8E690 (PiControlGetPropertyData.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiControlCopyUserModeCallersBuffer(void *a1, void *a2, unsigned int a3, int a4, char a5, int a6)
{
  if ( a5 )
  {
    if ( a6 )
    {
      if ( a3 && ((a4 - 1) & (unsigned int)a2) != 0 )
        goto LABEL_5;
      RtlCopyFromUser(a1, a2, a3);
    }
    else
    {
      if ( a3 && ((a4 - 1) & (unsigned int)a1) != 0 )
LABEL_5:
        ExRaiseDatatypeMisalignment();
      RtlCopyToUser(a1, a2, a3);
    }
    return 0LL;
  }
  else
  {
    memmove(a1, a2, a3);
    return 0LL;
  }
}
