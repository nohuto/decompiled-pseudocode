/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140431900
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     DifExConvertExclusiveToSharedLiteWrapper @ 0x1406502F0 (DifExConvertExclusiveToSharedLiteWrapper.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14091129C (PnpUnlinkDeviceRemovalRelations.c)
 *     PpDevNodeUnlockTree @ 0x140A921A4 (PpDevNodeUnlockTree.c)
 *     PnpRestartDeviceNode @ 0x140B218FC (PnpRestartDeviceNode.c)
 * Callees:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1404319B8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpConvertExclusiveToSharedLite @ 0x140431ADC (ExpConvertExclusiveToSharedLite.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx

  if ( (Resource->ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Resource->ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    ExpFastResourceLegacyConvertExclusiveToShared((ULONG_PTR)Resource);
  else
    ExpConvertExclusiveToSharedLite();
}
