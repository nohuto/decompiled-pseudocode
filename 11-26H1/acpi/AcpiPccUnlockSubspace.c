/*
 * XREFs of AcpiPccUnlockSubspace @ 0x140040AA8
 * Callers:
 *     AcpiPccCallbackDpc @ 0x140040980 (AcpiPccCallbackDpc.c)
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

void __fastcall AcpiPccUnlockSubspace(__int64 a1, KIRQL a2)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 808) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 800), a2);
  }
}
