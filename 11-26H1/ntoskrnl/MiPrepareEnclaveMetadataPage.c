/*
 * XREFs of MiPrepareEnclaveMetadataPage @ 0x140700050
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocateEnclavePages @ 0x1403378DC (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140341F44 (MiReturnEnclavePage.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiUnlinkPageChainHead @ 0x140365EF0 (MiUnlinkPageChainHead.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405EE900 (KeCreateEnclaveMetadataPage.c)
 */

__int64 __fastcall MiPrepareEnclaveMetadataPage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  KIRQL v7; // bp
  int EnclaveMetadataPage; // ebx
  __int64 v9; // rdx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( !stru_140E36558.StackLimit )
  {
    v5 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, 1u, a3, a4);
    if ( v5 )
    {
      v6 = -1LL;
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E36558.CycleTime);
      if ( stru_140E36558.StackLimit )
      {
        EnclaveMetadataPage = 0;
      }
      else
      {
        MiAllocateEnclavePages(
          (__int64)&MiSystemPartition,
          *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
          0,
          1LL,
          &v10);
        if ( v11 )
        {
          v6 = (__int64)(MiUnlinkPageChainHead((__int64)&v10) + 0x44000000000LL) / 48;
          *(_QWORD *)v5 = MiMakeValidPte(v5, v6, -1073741820);
          EnclaveMetadataPage = KeCreateEnclaveMetadataPage((__int64)(v5 << 25) >> 16);
          if ( EnclaveMetadataPage >= 0 )
          {
            v6 = -1LL;
            stru_140E36558.StackLimit = (void *volatile)((__int64)(v5 << 25) >> 16);
            v5 = 0LL;
          }
        }
        else
        {
          EnclaveMetadataPage = -1073741670;
        }
      }
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&stru_140E36558.CycleTime);
      else
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&stru_140E36558.CycleTime, v7);
      if ( v5 )
        MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, (unsigned __int64 *)v5, 1u);
      if ( v6 != -1 )
        MiReturnEnclavePage(v6, v9);
      return (unsigned int)EnclaveMetadataPage;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
