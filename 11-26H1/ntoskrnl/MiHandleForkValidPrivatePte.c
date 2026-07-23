/*
 * XREFs of MiHandleForkValidPrivatePte @ 0x1402ECE40
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1402D01D0 (MiUpdateWorkingSetPrivateSize.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1402ED5D4 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiTransferPageFileOwnership @ 0x1402ED5EC (MiTransferPageFileOwnership.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiWriteUselessChildPte @ 0x1402EF15C (MiWriteUselessChildPte.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiSetPfnContainingFrame @ 0x14033DC90 (MiSetPfnContainingFrame.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiSetWsleProtection @ 0x14036DE30 (MiSetWsleProtection.c)
 *     MiReturnCloneCharges @ 0x14036E844 (MiReturnCloneCharges.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiHandleForkValidPrivatePte(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  ULONG_PTR v5; // r14
  char WsleContents; // al
  unsigned __int64 *v7; // r12
  char v8; // si
  __int64 v9; // rdi
  ULONG_PTR v10; // r13
  __int64 v11; // rax
  struct _KEVENT *v12; // rbp
  int v13; // ecx
  unsigned __int64 v14; // r13
  __int64 *v15; // rsi
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 ProcessorFlushList; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdi
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 *v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+40h] [rbp-58h]
  unsigned __int64 ContainingPageTable; // [rsp+48h] [rbp-50h]
  struct _KEVENT *v34; // [rsp+A0h] [rbp+8h] BYREF
  int v35; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+18h]
  __int64 *v37; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v32 = *a1;
  v30 = *a1 + 1024;
  v4 = a1[1];
  v31 = (__int64 *)a1[39];
  v5 = 48 * ((a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v37 = (__int64 *)a1[38];
  v36 = (__int64)((_QWORD)v37 << 25) >> 16;
  WsleContents = MiGetWsleContents(v36, v36);
  v7 = (unsigned __int64 *)a1[40];
  v8 = WsleContents;
  ContainingPageTable = MiGetContainingPageTable((ULONG_PTR)v7);
  v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v10 = 48 * ContainingPageTable - 0x220000000000LL;
  v34 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  v11 = *(unsigned __int16 *)(v4 + 1198);
  v12 = v34;
  v13 = (v34 != *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v11) ? 5 : 0) | 2;
  if ( (a1[31] & 1) == 0 )
    v13 = v34 != *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * v11) ? 5 : 0;
  LODWORD(v34) = v13;
  if ( !v13 || (unsigned int)MiGetCloneCharges(v12) )
  {
    if ( (v8 & 0xF) != 8 || (unsigned int)MiLockPageTablePage(v10) )
    {
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v35);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + 1LL) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v3 & 0x42) != 0 )
      {
        v14 = v36;
        if ( (*(_DWORD *)(a1[33] + 48) & 0x100000) != 0
          && (*(_DWORD *)(a1[33] + 48) & 0x80000) != 0
          && *(__int64 *)(v5 + 40) >= 0 )
        {
          MiCaptureWriteWatchDirtyBit(v32, v36, a1[33]);
        }
        v35 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( *(__int64 *)(v5 + 24) < 0 );
        }
        v9 = MiCaptureDirtyBitToPfn(v5);
        v3 &= 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        v35 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( *(__int64 *)(v5 + 24) < 0 );
        }
        v14 = v36;
      }
      v15 = (__int64 *)(v5 + 16);
      v16 = *(_QWORD *)(v5 + 16);
      if ( (v16 & 4) != 0 )
      {
        if ( qword_140E2D8C0 && (v16 & 0x10) == 0 )
          HIDWORD(v16) &= HIDWORD(qword_140E2D8C8);
        v9 = MiTransferSoftwarePte(
               *v15,
               *((_QWORD *)&v12[929].Header.WaitListHead.Flink + ((unsigned __int16)v16 >> 12)),
               HIDWORD(v16),
               (v9 != 0) + 2);
        *(_QWORD *)(v5 + 16) &= ~4uLL;
      }
      if ( ((unsigned __int8)v34 & 5) != 0 )
        v7[1] = 1LL;
      *(_QWORD *)(v5 + 8) = v7;
      *(_QWORD *)(v5 + 40) |= 0x8000000000000000uLL;
      MiSetPfnContainingFrame(v5, ContainingPageTable);
      MI_MAKE_PROTECT_WRITE_COPY(v5 + 16);
      v17 = (unsigned __int64)*v15 >> 5;
      MiTransferPageFileOwnership(v5, v37);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiReleasePageFileInfo(v12, v9, 1LL);
      if ( (v3 & 0x800) != 0 )
        v3 = v3 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
      MiWriteValidPteNewProtection(v37, v3);
      if ( a1[44] )
      {
        v21 = v30;
      }
      else
      {
        ProcessorFlushList = MiGetProcessorFlushList(v19, v18);
        v21 = v30;
        a1[44] = ProcessorFlushList;
        MiInitializeTbFlushList(ProcessorFlushList, v30, *(_DWORD *)(ProcessorFlushList + 12), 0, 32);
      }
      MiInsertTbFlushEntry(a1[44], v14, 1LL);
      *v7 = v3;
      MiSetWsleProtection(v22, v14, 0LL);
      PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v5 + 8) | 0x8000000000000000uLL);
      v26 = v7[2];
      v27 = PrototypePteDirect;
      if ( (a1[31] & 1) != 0 )
      {
        ++a1[32];
        v26 = v26 & 0xF00000000000001FuLL | 0x20;
        v27 = PrototypePteDirect | 8;
      }
      LODWORD(v34) = 0;
      v7[2] = (unsigned int)v17 ^ (v26 ^ (unsigned int)v17) & 0xFFFFFFFFFFFFFFE0uLL;
      a1[40] += 32LL;
      v7[3] = 2LL;
      v28 = a1[41];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v28 + 24) < 0 );
      }
      *v31 = v27;
      MiIncreaseUsedPtesInPfn(a1[41], 1LL, v24, v25);
      _InterlockedAnd64((volatile signed __int64 *)(a1[41] + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedDecrement64((volatile signed __int64 *)(v32 + 648));
      MiUpdateWorkingSetPrivateSize(v21, v14, 0xFFFFFFFFFFFFFFFFuLL, 0);
      return 0LL;
    }
    else
    {
      MiReturnCloneCharges(v12, (unsigned int)v34);
      return 3221226029LL;
    }
  }
  else
  {
    MiWriteUselessChildPte(a1, v31);
    return 3221225626LL;
  }
}
