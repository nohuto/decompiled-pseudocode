/*
 * XREFs of HUBPDO_NotifyDeviceDisconnected @ 0x140019864
 * Callers:
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x140021DD0 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 *     HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile @ 0x140023400 (HUBDSM_NotifyingDeviceDisconnectedOnDetachWithSpecialFile.c)
 *     HUBDSM_PurgingDeviceIoOnDetachInConfigured @ 0x1400234F0 (HUBDSM_PurgingDeviceIoOnDetachInConfigured.c)
 *     HUBDSM_ReportingDeviceMissing @ 0x1400239B0 (HUBDSM_ReportingDeviceMissing.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x140026160 (HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured.c)
 * Callees:
 *     HUBREG_DeleteUxdSettings @ 0x140087A9C (HUBREG_DeleteUxdSettings.c)
 */

__int64 __fastcall HUBPDO_NotifyDeviceDisconnected(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0x200u);
  **(_BYTE **)(a1 + 16) = 1;
  v1 = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(v1 + 32);
  if ( (result & 0x20) == 0 && !*(_DWORD *)(v1 + 4) )
    return HUBREG_DeleteUxdSettings(*(_QWORD *)(v1 + 24), 2LL);
  return result;
}
