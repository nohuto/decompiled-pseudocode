/*
 * XREFs of AcpiPccLockSubspace @ 0x14004B9A0
 * Callers:
 *     AcpiPccAcquireSubspaceCore @ 0x140043D58 (AcpiPccAcquireSubspaceCore.c)
 *     AcpiPccEjectInterface @ 0x1400500C8 (AcpiPccEjectInterface.c)
 *     ACPIPccProcessSci @ 0x14005226C (ACPIPccProcessSci.c)
 *     AcpiPccCommandComplete @ 0x14006492C (AcpiPccCommandComplete.c)
 *     AcpiPccExecuteCommandAsync @ 0x140064B50 (AcpiPccExecuteCommandAsync.c)
 *     AcpiPccPlatformInterruptServiceRoutineDpc @ 0x140064D20 (AcpiPccPlatformInterruptServiceRoutineDpc.c)
 *     AcpiPccReleaseSubspace @ 0x140064EC0 (AcpiPccReleaseSubspace.c)
 *     AcpiPccRingDoorbell @ 0x140065000 (AcpiPccRingDoorbell.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccLockSubspace(__int64 a1, KIRQL *a2)
{
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 800));
      *(_QWORD *)(a1 + 808) = KeGetCurrentThread();
    }
  }
}
