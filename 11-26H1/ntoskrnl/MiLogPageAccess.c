/*
 * XREFs of MiLogPageAccess @ 0x140322960
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     MiAllocateAccessLog @ 0x14048F0B8 (MiAllocateAccessLog.c)
 *     MiMakeAccessEntryForProtoPte @ 0x14048F484 (MiMakeAccessEntryForProtoPte.c)
 */

_DWORD *__fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 AccessLog; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *i; // rdx
  unsigned __int64 v15; // rcx
  __int64 SubsectionFromPte; // rbx
  unsigned __int64 v17; // r12
  __int64 AccessEntryForProtoPte; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // r15
  __int64 *v21; // r8
  _KPROCESS *v22; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  ULONG_PTR v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+50h] [rbp+8h]

  v28 = 0x300000000LL;
  v3 = (__int64 *)&unk_140E379A8;
  v4 = a2;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 1 )
    v3 = (__int64 *)(a1 + 232);
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v4 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = *(_QWORD *)v4;
  if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    a3 = *(_QWORD *)v4;
    if ( (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      v22 = MiPteHasShadow();
      if ( v22 )
      {
        KernelWaitTime = v22[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v24 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
          if ( (v24 & 0x20) != 0 )
            a3 |= 0x20uLL;
          v7 = a3 | 0x42;
          if ( (v24 & 0x42) == 0 )
            v7 = a3;
        }
      }
    }
  }
  v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  v9 = (_QWORD *)(48 * v8 - 0x220000000000LL);
  MiLockWorkingSetCoreExclusive(a1, v8, a3);
  AccessLog = *v3;
  if ( AccessLog && (unsigned __int64)(*(_QWORD *)(AccessLog + 32) + 8LL) <= *(_QWORD *)(AccessLog + 40)
    || (AccessLog = MiAllocateAccessLog(a1)) != 0 )
  {
    if ( (__int64)v9[5] >= 0 || (v15 = v9[2], (v15 & 0x400) == 0) )
    {
      v11 = v4 >> 3 << 10;
      v12 = (unsigned __int64)v6 << 9;
LABEL_16:
      **(_QWORD **)(AccessLog + 32) = v12 | v11;
      *(_QWORD *)(AccessLog + 32) += 8LL;
      return MiUnlockWorkingSetCoreExclusive(a1);
    }
    SubsectionFromPte = MiGetSubsectionFromPte(v15);
    v17 = v9[1] | 0x8000000000000000uLL;
    AccessEntryForProtoPte = MiMakeAccessEntryForProtoPte(v17);
    v19 = *(_QWORD *)(AccessLog + 48);
    if ( *(_QWORD *)(AccessLog + 56) > 1uLL )
    {
      v20 = SubsectionFromPte;
      goto LABEL_21;
    }
    v25 = *(_QWORD *)SubsectionFromPte;
    if ( (*(_DWORD *)(SubsectionFromPte + 32) & 0x20000) == 0
      || (*(_DWORD *)(v25 + 56) & 8) == 0
      || (*(_DWORD *)(v25 + 56) & 0x20) == 0 )
    {
      v26 = MiReferenceControlAreaFileWithTag(*(_QWORD *)SubsectionFromPte, 1666411853LL, 1LL);
      v20 = *(_QWORD *)(v26 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v25 + 64), v26, 0x63536D4Du);
      v27 = MiStartingOffset(SubsectionFromPte, v17, 0xFFFFFFFFLL) << *((_DWORD *)&v28
                                                                      + ((*(_DWORD *)(v25 + 56) >> 5) & 1));
      v28 = __PAIR64__(HIDWORD(v27), v27 & 0xFFFFFBFF | (32 * (*(_DWORD *)(v25 + 56) & 0x20)));
      v19 -= 8LL;
      AccessEntryForProtoPte = v28;
LABEL_21:
      v21 = *(__int64 **)(AccessLog + 40);
      for ( i = v21 + 1; (unsigned __int64)i <= v19; ++i )
      {
        if ( *i == v20 )
          goto LABEL_15;
      }
      i = *(_QWORD **)(AccessLog + 40);
      *(_QWORD *)(AccessLog + 40) = v21 - 1;
      *v21 = v20;
LABEL_15:
      v11 = ((unsigned __int64)v6 << 9) | ((__int64)(*(_QWORD *)(AccessLog + 48) - (_QWORD)i) >> 3) & 0x1FF;
      v12 = AccessEntryForProtoPte & 0xFFFFFFFFFFFFFC00uLL;
      goto LABEL_16;
    }
  }
  return MiUnlockWorkingSetCoreExclusive(a1);
}
