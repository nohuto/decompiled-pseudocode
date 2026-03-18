/*
 * XREFs of GetFirmwareGranularity @ 0x14001AEA4
 * Callers:
 *     NVMeWriteBufferFirmwareDownload @ 0x140002A30 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000FEA0 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     BootPartitionDownload @ 0x140019764 (BootPartitionDownload.c)
 *     BootPartitionGetInfo @ 0x140019B50 (BootPartitionGetInfo.c)
 *     FirmwareDownload @ 0x14001A63C (FirmwareDownload.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFirmwareGranularity(__int64 a1)
{
  int v1; // ecx

  v1 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1560) + 319LL);
  if ( (_BYTE)v1 == 0xFF )
    return 4LL;
  else
    return (unsigned int)(v1 << 12);
}
