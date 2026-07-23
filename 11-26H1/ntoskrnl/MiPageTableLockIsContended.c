/*
 * XREFs of MiPageTableLockIsContended @ 0x1402E88A0
 * Callers:
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiProbePacketContended @ 0x1402E87F0 (MiProbePacketContended.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiInsertViewOfPhysicalSection @ 0x140317984 (MiInsertViewOfPhysicalSection.c)
 *     MiDecommitRemoveEnclaveAcquireLocks @ 0x1403431A8 (MiDecommitRemoveEnclaveAcquireLocks.c)
 *     MiCommitEnclavePages @ 0x140343308 (MiCommitEnclavePages.c)
 *     MiAddPagesToEnclave @ 0x14034355C (MiAddPagesToEnclave.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1403684CC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiVadRangeIsIoSpace @ 0x1404EE0D0 (MiVadRangeIsIoSpace.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v10 )
    {
      if ( v10 == 7 )
      {
        v11 = 1LL;
      }
      else
      {
        v11 = 3LL;
        if ( v10 == 5 )
          v11 = 0LL;
      }
    }
    else
    {
      v11 = 2LL;
    }
    result = (__int64)CurrentPrcb->SelfmapLockHandle[v11].LockQueue.Next;
    if ( result )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      return (*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4
                                                           * ((unsigned __int64)(2
                                                                               * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5)
                                                           + 4] >> ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F) >> 1) & 1;
    }
    else
    {
      v3 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (v3 & 1) != 0
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0)
        && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          if ( Process )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v7 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
              if ( (v7 & 0x20) != 0 )
                v3 |= 0x20uLL;
              v8 = v3;
              v3 |= 0x42uLL;
              if ( (v7 & 0x42) == 0 )
                v3 = v8;
            }
          }
        }
      }
      return (v3 >> 60) & 2;
    }
  }
  else
  {
    return (*(_DWORD *)(v12 + 4 * ((a2 >> 3) & 0x1FF)) & 0x40000000) != 0;
  }
  return result;
}
