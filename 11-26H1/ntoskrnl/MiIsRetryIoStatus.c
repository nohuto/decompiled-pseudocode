/*
 * XREFs of MiIsRetryIoStatus @ 0x140467310
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     MiStoreFaultComplete @ 0x14048E5F8 (MiStoreFaultComplete.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 *     MiReadImageHeaders @ 0x140A64D58 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1404673E0 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741801 || a1 == -1073741663 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
