/*
 * XREFs of MiIsRetryIoStatus @ 0x14046DB90
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x14046D748 (MiZeroPageWrite.c)
 *     MiStoreFaultComplete @ 0x140494AA8 (MiStoreFaultComplete.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiReadPagefilePage @ 0x1406E4AA0 (MiReadPagefilePage.c)
 *     MiReadImageHeaders @ 0x140A577D8 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x14046DC60 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741801 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
