/*
 * XREFs of MiTrimViewLeafPte @ 0x1404658E4
 * Callers:
 *     MiTrimSharedPageFromView @ 0x140465634 (MiTrimSharedPageFromView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035F944 (MI_WSLE_LOG_ACCESS.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
  unsigned __int64 v9; // r8
  __int16 v10; // r10
  __int64 v11; // r11
  __int64 *v12; // rdi
  __int64 v13; // rcx
  ULONG *v14; // rax
  __int64 *v15; // rsi
  __int64 *v16; // rbx
  __int64 *v17; // rbp
  __int64 *ProcessorFlushList; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  int v22; // ebx
  int v23; // r8d
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // r15
  __int64 v27; // rbp
  int v28; // eax
  int v29; // [rsp+60h] [rbp+8h] BYREF

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
          v29 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v29);
            while ( *(__int64 *)(v6 + 24) < 0 );
          }
          if ( (*(_BYTE *)(v6 + 34) & 0x10) == 0 )
          {
            v22 = *(_DWORD *)(v6 + 32);
            v23 = 1024;
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
              && (*(_DWORD *)(v6 + 16) & v23) != 0
              && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 )
            {
              v25 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v6 + 16));
              v26 = v25;
              if ( (*(_DWORD *)(*(_QWORD *)v25 + 56LL) & 0x20) == 0 && (v25[38] & 1) == 0 )
              {
                v27 = *(_QWORD *)v25;
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v25 + 72LL));
                v28 = v26[38];
                if ( (v28 & 1) == 0 )
                  v26[38] = v28 | 1;
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 72));
              }
            }
            if ( (v22 & 0x80000) != 0
              && MiCanPfnOriginalPteBeLost(48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL)
              && (*(_QWORD *)(v6 + 16) & 8LL) != 0
              && (v22 & 0x100000) == 0 )
            {
              *(_QWORD *)(v6 + 16) &= ~8uLL;
            }
            *(_DWORD *)(v6 + 32) = v22 | 0x100000;
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
        if ( *(_DWORD *)(v11 + 40) != 3 || v8 != 9 )
        {
          if ( v8 == 8 || (v10 & 0x10) != 0 )
          {
            v21 = ((v10 & 0x40) << 9) | 0x801;
            if ( (v10 & 0x80u) == 0 )
              v21 = ((v10 & 0x40) << 9) | 1;
            if ( (v10 & 0x108) != 0x100
              || (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 184LL) & 0xF) == 1
              || !(unsigned int)MiReplaceLockedPage(
                                  48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL,
                                  v1,
                                  v21,
                                  *(_DWORD *)(a1 + 296)) )
            {
              *(_DWORD *)a1 = 277;
            }
          }
          else
          {
            v12 = (__int64 *)(a1 + 24);
            v13 = *(_QWORD *)(a1 + 24);
            if ( (*(_DWORD *)(v13 + 184) & 0xF) == 1 )
              v14 = &MiSystemPartition;
            else
              v14 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v13 + 174));
            v15 = (__int64 *)(a1 + 24);
            if ( v14[4539] )
            {
              MI_WSLE_LOG_ACCESS(*v12, (unsigned __int64)v4, v9);
              v15 = (__int64 *)(a1 + 24);
            }
            v16 = (__int64 *)(a1 + 32);
            v17 = (__int64 *)(a1 + 32);
            if ( !*(_QWORD *)(a1 + 32) )
            {
              ProcessorFlushList = *(__int64 **)(a1 + 48);
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                *(_QWORD *)(a1 + 48) = ProcessorFlushList;
                v17 = (__int64 *)(a1 + 32);
                v12 = v15;
              }
              v19 = *v12;
              *v16 = (__int64)(ProcessorFlushList + 517);
              MiInitializeTbFlushList(
                (__int64)(ProcessorFlushList + 517),
                v19,
                *((_DWORD *)ProcessorFlushList + 1037),
                2,
                1);
              v15 = v12;
            }
            MiInsertTbFlushEntry(*v16, v1, 1LL, 0);
            if ( *(_DWORD *)(*v16 + 28) == *(_DWORD *)(*v16 + 12) )
            {
              if ( MiFreeWsleList(*v15, v20, *v16, 0) )
              {
                *(_DWORD *)a1 = 277;
                v16 = v17;
              }
              *v16 = 0LL;
            }
          }
        }
      }
    }
  }
}
