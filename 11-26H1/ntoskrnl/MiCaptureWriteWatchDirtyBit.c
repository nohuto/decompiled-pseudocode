/*
 * XREFs of MiCaptureWriteWatchDirtyBit @ 0x14049754C
 * Callers:
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiDeleteRotateVa @ 0x140312450 (MiDeleteRotateVa.c)
 *     MiUnmapFrameBuffer @ 0x140312AA4 (MiUnmapFrameBuffer.c)
 *     MiMakeCombineCandidateClean @ 0x1403193BC (MiMakeCombineCandidateClean.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetVadMandatoryPageSize @ 0x140317E90 (MiGetVadMandatoryPageSize.c)
 *     MiLockVadTree @ 0x1403265D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140326730 (MiLocateAddress.c)
 *     MiLocateLockedVadEvent @ 0x1403BCC30 (MiLocateLockedVadEvent.c)
 */

void __fastcall MiCaptureWriteWatchDirtyBit(__int64 a1, unsigned __int64 a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *Address; // rdi
  unsigned __int64 LockedVadEvent; // rsi
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned int v7; // r8d
  __int64 v8; // r9
  unsigned __int64 v9; // rbx

  Address = a3;
  if ( (*(_DWORD *)(a1 + 500) & 0x20) == 0 )
  {
    if ( a3
      || (MiLockVadTree(1u, a2, 0LL),
          Address = MiLocateAddress(a2),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1),
          Address) )
    {
      if ( ((__int64)Address[3].Flink & 0x180000) == 0x180000 )
      {
        ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&Address[4]);
        LockedVadEvent = MiLocateLockedVadEvent((__int64)Address, 4u);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&Address[4]);
        VadMandatoryPageSize = MiGetVadMandatoryPageSize((unsigned int)Address[3].Flink);
        v9 = ((a2 >> 12) - (v8 | ((unsigned __int64)v7 << 32))) / VadMandatoryPageSize;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 40));
        *(_BYTE *)((v9 >> 3) + *(_QWORD *)(LockedVadEvent + 32)) |= 1 << (v9 & 7);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 40));
      }
    }
  }
}
