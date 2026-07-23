/*
 * XREFs of MiAddLockedPageCharge @ 0x1402D7DB0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiHandleTransitionFault @ 0x1402D85D0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiRelockProtoPoolPage @ 0x14031E024 (MiRelockProtoPoolPage.c)
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiHandleCollidedFault @ 0x14038D1C8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14038D338 (MiWaitForCollidedFaultComplete.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMapSystemCachePage @ 0x1404F958C (MiMapSystemCachePage.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiLockMirrorWritePages @ 0x140525140 (MiLockMirrorWritePages.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiSoftFaultClusterTradeReleaseLocks @ 0x14071747C (MiSoftFaultClusterTradeReleaseLocks.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // rbp
  char v15; // r14
  __int64 v16; // rax
  ULONG *v17; // rsi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v20; // ett
  int v21; // eax

  if ( (a2 & 1) != 0 || (unsigned __int16)*(_DWORD *)(a1 + 32) < 0x7FFFu )
  {
    v5 = 1;
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) != 0 )
      goto LABEL_9;
    v6 = *(_DWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v8 = 0;
    if ( (_WORD)v6 )
    {
      if ( (_WORD)v6 == 1 )
      {
        if ( v7 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
          v8 = 1;
        if ( !v8 )
          goto LABEL_9;
      }
      else if ( (_WORD)v6 != 2 || !v7 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
      {
        goto LABEL_9;
      }
    }
    v13 = a2 & 1;
    v14 = (unsigned int)-(v13 != 0);
    v15 = 0;
    if ( *(__int64 *)(a1 + 40) < 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0
      || (a4 = 0xFFFFF68000000000uLL, (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL)
      && (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
      && (*(_BYTE *)(a1 + 35) & 0x20) != 0 )
    {
      v15 = 1;
    }
    v16 = (*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL;
    v17 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v16);
    if ( v15
      && !(unsigned int)MiChargeCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * v16), 1LL, 4 * (v13 ^ 1u) + 4, a4) )
    {
      return 0LL;
    }
    if ( v17 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
      {
        v20 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v20 == CachedResidentAvailable )
        {
          v21 = 1;
          goto LABEL_24;
        }
      }
    }
    v21 = MiChargePartitionResidentAvailable(v17, 1LL, v14);
    if ( !v21 )
    {
      if ( v15 )
      {
        MiReturnCommit(v17, 1LL, 0LL);
        v21 = 0;
      }
    }
LABEL_24:
    v5 = v21;
    if ( !v21 )
      return 0LL;
LABEL_9:
    v9 = *(_DWORD *)(a1 + 32);
    v10 = v9 + 1;
    v11 = v9 ^ (v9 + 1);
    result = v5;
    *(_DWORD *)(a1 + 32) = v10 ^ v11 & 0xFFFF0000;
    return result;
  }
  return 0LL;
}
