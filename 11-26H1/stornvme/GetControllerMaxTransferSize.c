/*
 * XREFs of GetControllerMaxTransferSize @ 0x140001580
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x140001010 (FormInquiryBlockLimitsData.c)
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000FEA0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     BootPartitionGetInfo @ 0x140019B50 (BootPartitionGetInfo.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x140025D48 (NVMeGetControllerInitiatedTelemetryLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // edx

  result = (unsigned int)a1[52];
  if ( (unsigned int)result > 0x200000 )
    result = 0x200000LL;
  v2 = a1[8];
  if ( v2 && (unsigned int)result >= v2 )
    result = v2;
  v3 = a1[13];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
