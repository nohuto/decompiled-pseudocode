/*
 * XREFs of MiProbeLeafPteAccess @ 0x1402D1510
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiCanPageMove @ 0x1402DFD1C (MiCanPageMove.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14038DDEC (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiProcessCommitIntact @ 0x140445A40 (MiProcessCommitIntact.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiLockProbePacketWorkingSet @ 0x140484AEC (MiLockProbePacketWorkingSet.c)
 *     MiIsDriverPage @ 0x1404B6920 (MiIsDriverPage.c)
 *     MiLogSystemImageReadOnlyPageViolation @ 0x1404BCA70 (MiLogSystemImageReadOnlyPageViolation.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 */

__int64 __fastcall MiProbeLeafPteAccess(__int64 a1, unsigned __int64 a2)
{
  int v2; // r12d
  __int64 v4; // rbx
  ULONG_PTR v5; // rsi
  int v6; // r14d
  int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  int v11; // edi
  int v12; // ecx
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // r8
  int v16; // esi
  __int64 result; // rax
  ULONG_PTR v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  __int64 CloneAddress; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  _QWORD *InitialStack; // rax
  unsigned __int64 v28; // r8
  int v29; // ebx
  __int64 IsDriverPage; // rdi
  int v31; // ebx
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp+10h]

  v33 = (_DWORD *)a2;
  v2 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (*(_DWORD *)(a1 + 96) >> 1) & 3;
  v7 = (*(_DWORD *)(a1 + 104) >> 1) & 0xF;
  *(_DWORD *)a2 = 0;
  BugCheckParameter1 = v5;
  if ( (v4 & 4) == 0 && v7 == 1 )
  {
    ++LODWORD(stru_140E2ED08.QueueListEntry.Flink);
    return 3221225477LL;
  }
  v8 = ((unsigned __int64)v4 >> 12) & 0xFFFFFFFFFFLL;
  v9 = 48 * v8;
  if ( v8 <= qword_140E2D920 && (*(_QWORD *)(v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    v10 = v9 - 0x220000000000LL;
    if ( stru_140E366D8.InitialStack )
    {
      if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 1 )
      {
        InitialStack = stru_140E366D8.InitialStack;
        a2 = v9 / 0x30;
        if ( stru_140E366D8.InitialStack )
        {
          do
          {
            v28 = InitialStack[3];
            if ( a2 < v28 )
            {
              InitialStack = (_QWORD *)*InitialStack;
            }
            else
            {
              if ( a2 - v28 < InitialStack[4] )
              {
                ++*(_DWORD *)&stru_140E2ED08.SharedComputeUnitsUsed;
                return 3221225477LL;
              }
              InitialStack = (_QWORD *)InitialStack[1];
            }
          }
          while ( InitialStack );
        }
      }
    }
    if ( (int)MiLegitimatePageForDriversToMap(v10, a2) < 0 )
    {
      ++*(_DWORD *)&stru_140E2ED08.UserAffinityPrimaryGroup;
      return 3221225477LL;
    }
    a2 = (unsigned __int64)v33;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = 0;
  if ( v5 < 0xFFFF800000000000uLL )
    v12 = 0;
  else
    v12 = (unsigned __int8)byte_140E37BF0[((v5 >> 39) & 0x1FF) - 256];
  if ( v7 == 6 && v12 == 11 )
    v11 = 1;
  v13 = 0x10000000000LL;
  v14 = 0x8000000000000000uLL;
  v15 = 0x1000000000000000LL;
  if ( v6 == 3 )
  {
    if ( v5 >= 0x7FFFFFFF0000LL )
      return 3221225477LL;
    if ( v4 < 0 && (v4 & 0x800) != 0 )
      return 3221225496LL;
    if ( v10 )
    {
      v23 = *(_QWORD *)(v10 + 8);
      if ( v23 > 0
        && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0
        && (*(_QWORD *)((v23 | 0x8000000000000000uLL) + 0x10) & 0x1000000000000000LL) != 0 )
      {
        return 3221225477LL;
      }
      v16 = 0;
      goto LABEL_10;
    }
  }
  v16 = 0;
  if ( v6 )
  {
LABEL_10:
    if ( (v4 & 0x800) == 0 )
    {
      if ( v6 != 3 && (v7 != 6 || !v11) )
      {
        result = 0LL;
        *(_DWORD *)a2 = 2;
        return result;
      }
      if ( v10 && *(__int64 *)(v10 + 40) >= 0 )
      {
        if ( (MiFlags & 0x10000) != 0 && ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
          MiClearPfnImageVerified(v10, 73LL);
        if ( (MiFlags & 0x20000) != 0 && v11 && v4 < 0 )
        {
          MiLogSystemImageReadOnlyPageViolation(BugCheckParameter1, 0LL, v15, v13);
          return 0LL;
        }
        return 0LL;
      }
      v18 = BugCheckParameter1;
      goto LABEL_58;
    }
    v18 = BugCheckParameter1;
    if ( (v4 & 0x42) == 0
      && v7 == 1
      && !(unsigned int)MiOkToSetPteDirtyForNotValidFault(v4, BugCheckParameter1, 0x1000000000000000LL, 0x10000000000LL) )
    {
      MiUnlockProbePacketWorkingSet(a1);
      v29 = MmAccessFault(2uLL, v18);
      MiLockProbePacketWorkingSet(a1);
      if ( v29 >= 0 )
        goto LABEL_74;
      ++stru_140E2ED08.ThreadFlags2;
      return (unsigned int)v29;
    }
    goto LABEL_26;
  }
  if ( v11 )
  {
    if ( !v10 )
      return 0LL;
    if ( *(__int64 *)(v10 + 40) < 0 )
    {
      if ( ((unsigned int)MiCanPageMove(v10) || (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0)
        && ((*(_DWORD *)(v10 + 16) & 0x400LL) == 0
         || (*(_DWORD *)(*(_QWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v10 + 16)) + 56LL) & 0x20) != 0) )
      {
        IsDriverPage = MiIsDriverPage(*(_QWORD *)(a1 + 24), 0LL);
        if ( IsDriverPage )
        {
          MiUnlockProbePacketWorkingSet(a1);
          v31 = MiSplitDriverPage(IsDriverPage, *(_QWORD *)(a1 + 24));
          MiLockProbePacketWorkingSet(a1);
          if ( v31 >= 0 )
            goto LABEL_74;
          ++HIDWORD(stru_140E2ED08.UserAffinity);
          return (unsigned int)v31;
        }
        v13 = 0x10000000000LL;
        v14 = 0x8000000000000000uLL;
      }
      v15 = 0x1000000000000000LL;
    }
    v18 = BugCheckParameter1;
    goto LABEL_27;
  }
  v18 = BugCheckParameter1;
LABEL_26:
  if ( !v10 )
    return 0LL;
LABEL_27:
  v19 = *(_DWORD *)(v10 + 32);
  if ( (v19 & 0x200000) != 0 && (v19 & 0x80000) == 0 && (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0LL;
  if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) != 1 && *(__int64 *)(v10 + 8) > 0 && (*(_QWORD *)(v10 + 40) & v13) == 0 )
  {
    v22 = *(_QWORD *)(v10 + 8);
    if ( v22 <= 0 || (*(_QWORD *)(v10 + 40) & v13) != 0 || (*(_QWORD *)((v14 | v22) + 0x10) & v15) != 0 )
      return 0LL;
    goto LABEL_58;
  }
  if ( v6 || *(__int64 *)(v10 + 40) >= 0 )
    return 0LL;
  v20 = *(_QWORD *)(a1 + 88);
  if ( v20 && *(_QWORD *)(v20 + 640) )
  {
    CloneAddress = MiLocateCloneAddress(v20, v14 | *(_QWORD *)(v10 + 8));
    if ( CloneAddress )
    {
      a2 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 1040LL);
      if ( *(_QWORD *)(a2 + 1192) > *(_QWORD *)(CloneAddress + 96) )
        goto LABEL_78;
      v16 = 1;
    }
    v14 = 0x8000000000000000uLL;
  }
  if ( !_bittest64((const signed __int64 *)(a1 + 96), 0x39u) )
  {
    if ( v16 )
      goto LABEL_58;
    return 0LL;
  }
  if ( !v16 )
  {
    if ( (v4 & 0x200) == 0 )
      return 0LL;
    BugCheckParameter1 = 0LL;
    goto LABEL_73;
  }
LABEL_58:
  BugCheckParameter1 = 0LL;
  if ( v6 == 3 )
  {
    if ( v4 < 0 )
      return 3221225541LL;
    v24 = *(_QWORD *)(a1 + 88);
    if ( v24 )
    {
      if ( *(_QWORD *)(v24 + 640) )
      {
        v26 = MiLocateCloneAddress(v24, v14 | *(_QWORD *)(v10 + 8));
        if ( v26 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1040LL) + 1192LL) > *(_QWORD *)(v26 + 96) )
          {
LABEL_78:
            result = MiSplitReducedCommitClonePage(a1);
            if ( (int)result < 0 )
            {
              ++LODWORD(stru_140E2ED08.UserAffinity);
              return result;
            }
            goto LABEL_74;
          }
          goto LABEL_73;
        }
      }
    }
    if ( (v4 & 0x200) == 0 && (*(__int64 *)(v10 + 8) <= 0 || (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0) )
    {
      if ( !(unsigned int)MiProcessCommitIntact(v18, a2, v15, v13) )
        return 3221225477LL;
      ++*(_QWORD *)(a1 + 120);
      v2 = 1;
    }
  }
LABEL_73:
  v25 = MiCopyOnWrite(v18, *(_QWORD *)(a1 + 24), -1, 2, (__int64)&BugCheckParameter1);
  if ( v25 >= 0 )
  {
LABEL_74:
    *v33 = 1;
    return 0LL;
  }
  if ( v2 )
    --*(_QWORD *)(a1 + 120);
  if ( *(_BYTE *)(a1 + 72) != 2
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 1444LL) & 0xC) == 0 )
  {
    MiUnlockProbePacketWorkingSet(a1);
    MiCopyOnWriteCheckConditions(*(_QWORD *)(a1 + 112), (unsigned int)v25, BugCheckParameter1);
    MiLockProbePacketWorkingSet(a1);
    *v33 = 1;
    return 0LL;
  }
  ++HIDWORD(stru_140E2ED08.UserAffinity);
  return 3221225495LL;
}
