/*
 * XREFs of MiLogPageAccess @ 0x140320930
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x14029C4C8 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029C890 (MiResetAccessBitPte.c)
 *     MiClearPteAccessed @ 0x1402FF9B0 (MiClearPteAccessed.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140320BF0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiCopyOnWrite @ 0x14036AD38 (MiCopyOnWrite.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140264A20 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 *     MiAllocateAccessLog @ 0x140495568 (MiAllocateAccessLog.c)
 *     MiMakeAccessEntryForProtoPte @ 0x140495934 (MiMakeAccessEntryForProtoPte.c)
 */

_DWORD *__fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned int v5; // r14d
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rsi
  __int64 AccessLog; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  _QWORD *i; // rdx
  unsigned __int64 v13; // rcx
  __int64 SubsectionFromPte; // rbx
  unsigned __int64 v15; // r12
  __int64 AccessEntryForProtoPte; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  __int64 *v19; // r8
  _KPROCESS *v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  ULONG_PTR v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+50h] [rbp+8h]

  v27 = 0x300000000LL;
  v2 = (__int64 *)&unk_140E37828;
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v2 = (__int64 *)(a1 + 232);
  v5 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v20 = MiPteHasShadow();
    if ( v20 )
    {
      KernelWaitTime = v20[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v23 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
        if ( (v23 & 0x20) != 0 )
          v21 |= 0x20uLL;
        v6 = v21 | 0x42;
        if ( (v23 & 0x42) == 0 )
          v6 = v21;
      }
    }
  }
  v7 = (_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  MiLockWorkingSetCoreExclusive(a1);
  AccessLog = *v2;
  if ( AccessLog && (unsigned __int64)(*(_QWORD *)(AccessLog + 32) + 8LL) <= *(_QWORD *)(AccessLog + 40)
    || (AccessLog = MiAllocateAccessLog(a1)) != 0 )
  {
    if ( (__int64)v7[5] >= 0 || (v13 = v7[2], (v13 & 0x400) == 0) )
    {
      v9 = v3 >> 3 << 10;
      v10 = (unsigned __int64)v5 << 9;
LABEL_16:
      **(_QWORD **)(AccessLog + 32) = v10 | v9;
      *(_QWORD *)(AccessLog + 32) += 8LL;
      return MiUnlockWorkingSetCoreExclusive(a1);
    }
    SubsectionFromPte = MiGetSubsectionFromPte(v13);
    v15 = v7[1] | 0x8000000000000000uLL;
    AccessEntryForProtoPte = MiMakeAccessEntryForProtoPte(v15);
    v17 = *(_QWORD *)(AccessLog + 48);
    if ( *(_QWORD *)(AccessLog + 56) > 1uLL )
    {
      v18 = SubsectionFromPte;
      goto LABEL_21;
    }
    v24 = *(_QWORD *)SubsectionFromPte;
    if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) == 0
      || (*(_DWORD *)(v24 + 56) & 8) == 0
      || (*(_DWORD *)(v24 + 56) & 0x20) == 0 )
    {
      v25 = MiReferenceControlAreaFileWithTag(*(_QWORD *)SubsectionFromPte, 1666411853LL, 1LL);
      v18 = *(_QWORD *)(v25 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v24 + 64), v25, 0x63536D4Du);
      v26 = MiStartingOffset(SubsectionFromPte, v15, 0xFFFFFFFFLL) << *((_DWORD *)&v27
                                                                      + ((*(_DWORD *)(v24 + 56) >> 5) & 1));
      v27 = __PAIR64__(HIDWORD(v26), v26 & 0xFFFFFBFF | (32 * (*(_DWORD *)(v24 + 56) & 0x20)));
      v17 -= 8LL;
      AccessEntryForProtoPte = v27;
LABEL_21:
      v19 = *(__int64 **)(AccessLog + 40);
      for ( i = v19 + 1; (unsigned __int64)i <= v17; ++i )
      {
        if ( *i == v18 )
          goto LABEL_15;
      }
      i = *(_QWORD **)(AccessLog + 40);
      *(_QWORD *)(AccessLog + 40) = v19 - 1;
      *v19 = v18;
LABEL_15:
      v9 = ((unsigned __int64)v5 << 9) | ((__int64)(*(_QWORD *)(AccessLog + 48) - (_QWORD)i) >> 3) & 0x1FF;
      v10 = AccessEntryForProtoPte & 0xFFFFFFFFFFFFFC00uLL;
      goto LABEL_16;
    }
  }
  return MiUnlockWorkingSetCoreExclusive(a1);
}
