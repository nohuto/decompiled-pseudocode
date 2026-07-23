/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1404560EC
 * Callers:
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rdx
  char v7; // di
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 *ProcessorFlushList; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  int v14; // ebx
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // r13d
  int v24; // ebx
  _DWORD *SubsectionFromPte; // rax
  _DWORD *v26; // rax
  _DWORD *v27; // rsi
  __int64 v28; // rbp
  int v29; // eax
  int v30; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+34h] [rbp-44h] BYREF
  __int64 v32; // [rsp+38h] [rbp-40h]
  unsigned __int64 v33; // [rsp+88h] [rbp+10h]
  char i; // [rsp+98h] [rbp+20h]

  v30 = 0;
  if ( !byte_140E2D899 )
  {
    v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = v4;
    v32 = *(_QWORD *)(a3 + 184) + 1024LL;
    v5 = v32;
    v7 = MiLockWorkingSetShared(v32, a2, a3);
    for ( i = v7; (unsigned __int64)v3 <= v4; v7 = i )
    {
      NextPageTable = MiGetNextPageTable((__int64)v3, v4, v7, 0, &v30);
      v3 = (__int64 *)NextPageTable;
      if ( !NextPageTable )
        break;
      v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v30 )
      {
        v17 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v30 > 0 )
        {
          v18 = (unsigned int)v30;
          do
          {
            v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v18;
          }
          while ( v18 );
        }
        v19 = 0x200000LL;
        if ( v30 > 1 )
        {
          v20 = (unsigned int)(v30 - 1);
          do
          {
            v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v19 <<= 9;
            --v20;
          }
          while ( v20 );
        }
        v21 = *(_QWORD *)v17;
        if ( (*(_QWORD *)v17 & 1) != 0 && (v21 & 0x42) != 0 )
        {
          v22 = 48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v23 = 0;
          if ( v19 )
          {
            do
            {
              v31 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v31);
                while ( *(__int64 *)(v22 + 24) < 0 );
              }
              v24 = *(_DWORD *)(v22 + 32);
              if ( *(__int64 *)(v22 + 40) < 0 && (*(_QWORD *)(v22 + 16) & 0x400000000000400LL) == 0x400 )
              {
                SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v22 + 16));
                if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20
                  && (SubsectionFromPte[8] & 0x20000) == 0 )
                {
                  KeBugCheckEx(0x1Au, 0x8840uLL, v22, 0LL, 1uLL);
                }
              }
              if ( *(__int64 *)(v22 + 40) < 0
                && (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
                && (*(_QWORD *)(v22 + 24) & 0x4000000000000000LL) == 0 )
              {
                v26 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v22 + 16));
                v27 = v26;
                if ( (*(_DWORD *)(*(_QWORD *)v26 + 56LL) & 0x20) == 0 && (v26[38] & 1) == 0 )
                {
                  v28 = *(_QWORD *)v26;
                  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v26 + 72LL));
                  v29 = v27[38];
                  if ( (v29 & 1) == 0 )
                    v27[38] = v29 | 1;
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v28 + 72));
                }
              }
              if ( (v24 & 0x80000) != 0
                && MiCanPfnOriginalPteBeLost(v22)
                && (v24 & 0x100000) == 0
                && (*(_DWORD *)(v22 + 16) & 8) != 0 )
              {
                *(_QWORD *)(v22 + 16) &= ~8uLL;
              }
              *(_DWORD *)(v22 + 32) = v24 | 0x100000;
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v23 += 4096;
              v22 += 48LL;
            }
            while ( v23 < v19 );
            v4 = v33;
          }
          v5 = v32;
        }
        v3 = (__int64 *)(((MiGetLeafVa(v17 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      else
      {
        v10 = (__int64)(NextPageTable << 25) >> 16;
        ProcessorFlushList = 0LL;
        do
        {
          v12 = *v3;
          if ( (*v3 & 1) != 0 && (v12 & 0x42) != 0 )
          {
            v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v31 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v31);
              while ( *(__int64 *)(v13 + 24) < 0 );
            }
            v14 = *(_DWORD *)(v13 + 32);
            if ( *(__int64 *)(v13 + 40) < 0 && (*(_QWORD *)(v13 + 16) & 0x400000000000400LL) == 0x400 )
            {
              v16 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v13 + 16));
              if ( (*(_DWORD *)(*(_QWORD *)v16 + 56LL) & 0x820) == 0x20 && (v16[8] & 0x20000) == 0 )
                KeBugCheckEx(0x1Au, 0x8840uLL, v13, 0LL, 1uLL);
            }
            if ( *(__int64 *)(v13 + 40) < 0
              && (*(_DWORD *)(v13 + 16) & 0x400LL) != 0
              && (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) == 0 )
            {
              v15 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v13 + 16));
              if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x20) == 0 && (v15[38] & 1) == 0 )
                MiSetSubsectionModified(v15, 0LL);
            }
            if ( (v14 & 0x80000) != 0
              && MiCanPfnOriginalPteBeLost(v13)
              && (v14 & 0x100000) == 0
              && (*(_DWORD *)(v13 + 16) & 8) != 0 )
            {
              *(_QWORD *)(v13 + 16) &= ~8uLL;
            }
            *(_DWORD *)(v13 + 32) = v14 | 0x100000;
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection(v3, v12 & 0xFFFFFFFFFFFFFFBDuLL);
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
            }
            MiInsertTbFlushEntry((__int64)ProcessorFlushList, v10, 1LL, 0);
            v4 = v33;
          }
          v10 += 4096LL;
          ++v3;
        }
        while ( (v10 & 0x1FFFFF) != 0 && (unsigned __int64)v3 <= v4 );
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
        }
      }
      MiUnlockPageTableInternal(v5, v9);
    }
    LOBYTE(v6) = v7;
    MiUnlockWorkingSetShared(v5, v6);
  }
}
