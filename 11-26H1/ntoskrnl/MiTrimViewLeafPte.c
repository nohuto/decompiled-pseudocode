/*
 * XREFs of MiTrimViewLeafPte @ 0x14046C164
 * Callers:
 *     MiTrimSharedPageFromView @ 0x14046BEB4 (MiTrimSharedPageFromView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiGetWsleContents @ 0x140297070 (MiGetWsleContents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall MiTrimViewLeafPte(__int64 a1)
{
  unsigned __int64 v1; // r12
  int v3; // r10d
  __int64 *v4; // r13
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  char v8; // al
  __int16 v9; // r10
  __int64 v10; // r11
  __int64 *v11; // rdi
  __int64 v12; // rcx
  ULONG *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // rbx
  __int64 *v16; // rbp
  __int64 *ProcessorFlushList; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  int v21; // ebx
  int v22; // r8d
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v24; // rax
  _DWORD *v25; // r15
  __int64 v26; // rbp
  int v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 272);
  v3 = *(_DWORD *)(a1 + 4);
  v4 = (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  if ( (*v4 & 1) != 0 )
  {
    v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = *v4 & 0x42;
    if ( ((v3 & 8) == 0 || (v5 & 0x42) == 0 && (*(_BYTE *)(v6 + 34) & 0x10) == 0) && *(__int64 *)(v6 + 40) < 0 )
    {
      if ( (v3 & 1) != 0 )
      {
        if ( (v5 & 0x42) != 0 )
        {
          v28 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v28);
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
          {
            v21 = *(_DWORD *)(v6 + 32);
            v22 = 1024;
            if ( *(__int64 *)(v6 + 40) < 0 && (*(_QWORD *)(v6 + 16) & 0x400000000000400LL) == 0x400 )
            {
              SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
              if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
                && (SubsectionFromPte[8] & 0x20000) == 0 )
              {
                KeBugCheckEx(0x1Au, 0x8840uLL, 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 0LL, 1uLL);
              }
            }
            if ( *(__int64 *)(v6 + 40) < 0
              && (*(_DWORD *)(v6 + 16) & v22) != 0
              && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
            {
              v24 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
              v25 = v24;
              if ( (*(_DWORD *)(*(_QWORD *)v24 + 56LL) & 0x20) == 0 && (v24[38] & 1) == 0 )
              {
                v26 = *(_QWORD *)v24;
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v24 + 72LL));
                v27 = v25[38];
                if ( (v27 & 1) == 0 )
                  v25[38] = v27 | 1;
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 72));
              }
            }
            if ( (v21 & 0x80000) != 0
              && MiCanPfnOriginalPteBeLost(48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL)
              && (*(_QWORD *)(v6 + 16) & 8LL) != 0
              && (v21 & 0x100000) == 0 )
            {
              *(_QWORD *)(v6 + 16) &= ~8uLL;
            }
            *(_DWORD *)(v6 + 32) = v21 | 0x100000;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiWriteValidPteNewProtection(v4, v5 & 0xFFFFFFFFFFFFFFBDuLL);
          MiInsertTbFlushEntry(*(_QWORD *)(a1 + 40), v1, 1LL, 0);
        }
      }
      else if ( (*(_QWORD *)(v6 + 16) & 0x400LL) != 0
             || (v7 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 56LL), (v7 & 0x80u) == 0LL) )
      {
        v8 = MiGetWsleContents(v7, v1) & 0xF;
        if ( *(_DWORD *)(v10 + 40) != 3 || v8 != 9 )
        {
          if ( v8 == 8 || (v9 & 0x10) != 0 )
          {
            v20 = ((v9 & 0x40) << 9) | 0x801;
            if ( (v9 & 0x80u) == 0 )
              v20 = ((v9 & 0x40) << 9) | 1;
            if ( (v9 & 0x108) != 0x100
              || (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 184LL) & 0xF) == 1
              || !(unsigned int)MiReplaceLockedPage(
                                  48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                  v1,
                                  v20,
                                  *(_DWORD *)(a1 + 296)) )
            {
              *(_DWORD *)a1 = 277;
            }
          }
          else
          {
            v11 = (__int64 *)(a1 + 24);
            v12 = *(_QWORD *)(a1 + 24);
            if ( (*(_DWORD *)(v12 + 184) & 0xF) == 1 )
              v13 = &MiSystemPartition;
            else
              v13 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v12 + 174));
            v14 = (__int64 *)(a1 + 24);
            if ( v13[4539] )
            {
              MI_WSLE_LOG_ACCESS(*v11, (unsigned __int64)v4);
              v14 = (__int64 *)(a1 + 24);
            }
            v15 = (__int64 *)(a1 + 32);
            v16 = (__int64 *)(a1 + 32);
            if ( !*(_QWORD *)(a1 + 32) )
            {
              ProcessorFlushList = *(__int64 **)(a1 + 48);
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                *(_QWORD *)(a1 + 48) = ProcessorFlushList;
                v16 = (__int64 *)(a1 + 32);
                v11 = v14;
              }
              v18 = *v11;
              *v15 = (__int64)(ProcessorFlushList + 517);
              MiInitializeTbFlushList(
                (__int64)(ProcessorFlushList + 517),
                v18,
                *((_DWORD *)ProcessorFlushList + 1037),
                2,
                1);
              v14 = v11;
            }
            MiInsertTbFlushEntry(*v15, v1, 1LL, 0);
            if ( *(_DWORD *)(*v15 + 28) == *(_DWORD *)(*v15 + 12) )
            {
              if ( MiFreeWsleList(*v14, v19, *v15, 0) )
              {
                *(_DWORD *)a1 = 277;
                v15 = v16;
              }
              *v15 = 0LL;
            }
          }
        }
      }
    }
  }
}
