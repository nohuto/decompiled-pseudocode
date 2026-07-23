/*
 * XREFs of PiControlCopyUserModeCallersBuffer @ 0x1409675B8
 * Callers:
 *     PiCMCaptureRegistryInputData @ 0x14091CC68 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140958558 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x14095A1C0 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140966DF0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1409672B0 (NtPlugPlayControl.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1409674D0 (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetSetDeviceStatus @ 0x140967F20 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetRelatedDevice @ 0x140969210 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140A93360 (PiControlGetPropertyData.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
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
