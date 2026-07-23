/*
 * XREFs of MiWalkPtesForWriteWatchState @ 0x140319928
 * Callers:
 *     NtGetWriteWatch @ 0x140A927B0 (NtGetWriteWatch.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetVadMandatoryPageSize @ 0x140319EC0 (MiGetVadMandatoryPageSize.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiMakePteClean @ 0x14031C2D0 (MiMakePteClean.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiWalkPtesForWriteWatchState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 ProcessorFlushList; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  char v17; // bp
  __int64 v18; // rdx
  int v19; // r8d
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r9
  _QWORD *v24; // r15
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rbp
  __int64 LeafVa; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  _QWORD *v30; // r14
  __int64 v31; // rdx
  const signed __int64 *v32; // rcx
  unsigned int j; // ebp
  int v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  __int64 *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned __int64 v48; // rcx
  _QWORD *i; // r15
  __int64 v50; // rdx
  __int64 *v51; // [rsp+30h] [rbp-78h]
  unsigned __int64 v52; // [rsp+38h] [rbp-70h]
  __int64 v53; // [rsp+40h] [rbp-68h]
  __int64 v54; // [rsp+48h] [rbp-60h]
  volatile LONG *SpinLock; // [rsp+50h] [rbp-58h]
  unsigned __int64 v56; // [rsp+58h] [rbp-50h]
  char v57; // [rsp+B0h] [rbp+8h]
  int v58; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v59; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v60; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 120);
  v58 = 0;
  ProcessorFlushList = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 184);
  v53 = v2;
  v59 = v5;
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(
                           *(unsigned int *)(v6 + 48),
                           a2,
                           *(unsigned __int8 *)(v6 + 32),
                           *(unsigned int *)(v6 + 24));
  v8 = *(_QWORD *)(a1 + 72);
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 104) + 1024LL;
  v14 = (v13 >> 12) - (v12 | ((unsigned __int64)(unsigned int)v9 << 32));
  v56 = v8;
  v15 = 0LL;
  v52 = v14 / VadMandatoryPageSize;
  v51 = *(__int64 **)(a1 + 192);
  v57 = MiLockWorkingSetShared(v11, v14 % VadMandatoryPageSize, v9);
  v17 = v57;
  if ( v10 > v8 )
    goto LABEL_45;
  SpinLock = (volatile LONG *)(v2 + 40);
LABEL_3:
  if ( v15 )
  {
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList);
      MiReleaseProcessorFlushList(v44, v43, v45);
      ProcessorFlushList = 0LL;
    }
    MiUnlockPageTableInternal(v11, v15);
    v15 = 0LL;
  }
  if ( (unsigned int)MiWorkingSetIsContended(v11) || KeShouldYieldProcessor() )
  {
    LOBYTE(v18) = v17;
    MiUnlockWorkingSetShared(v11, v18);
    MiLockWorkingSetShared(v11, v46, v47);
  }
  LOBYTE(v19) = v17;
  NextPageTable = MiGetNextPageTable(v10, v8, v19, 1, (__int64)&v58);
  v21 = NextPageTable;
  if ( NextPageTable )
    v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  else
    v21 = v8 + 8;
  *(_DWORD *)(a1 + 128) |= 8u;
  v22 = (unsigned __int64)((__int64)(v21 - v10) >> 3) / *(_QWORD *)(a1 + 112);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 40));
  v23 = v52;
  while ( 1 )
  {
    if ( !v22 )
    {
      if ( v10 > v8 )
        break;
      v24 = (_QWORD *)v8;
      if ( v58 )
      {
        v10 = v15;
        v48 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = 512LL;
        if ( v58 > 1 )
        {
          v50 = (unsigned int)(v58 - 1);
          do
          {
            v25 <<= 9;
            v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v48 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v50;
          }
          while ( v50 );
        }
        v15 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        for ( i = (_QWORD *)(v10 + 8);
              ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v48 && (*i & 0x81) == 0x81;
              ++i )
        {
          ;
        }
        v24 = i - 1;
      }
      else
      {
        v25 = v59;
      }
      v26 = v25 / *(_QWORD *)(a1 + 112);
      v60 = v26;
      while ( 1 )
      {
        if ( v10 > (unsigned __int64)v24 )
        {
LABEL_20:
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          *(_DWORD *)(a1 + 128) &= ~8u;
          v8 = v56;
          v10 = (((unsigned __int64)MiGetLeafVa(v10) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v2 = v53;
          v17 = v57;
          if ( v10 > v56 )
            goto LABEL_42;
          goto LABEL_3;
        }
        LeafVa = MiGetLeafVa(v10);
        v30 = (_QWORD *)v10;
        v31 = *(_DWORD *)(a1 + 128) & 0xFFFFFFFB;
        *(_DWORD *)(a1 + 128) = v31;
        v54 = LeafVa;
        v32 = *(const signed __int64 **)(v53 + 32);
        if ( _bittest64(v32, v28) == 1 )
        {
          v34 = *(_DWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 128) = v31 | 4;
          if ( (v34 & 1) == 0 )
            goto LABEL_18;
          v35 = *(_QWORD *)(v53 + 32);
          v36 = 0;
          v37 = (unsigned int)*(char *)((v28 >> 3) + v35);
          LODWORD(v37) = v37 & ~(1 << (v28 & 7));
          for ( *(_BYTE *)((v28 >> 3) + v35) = v37; v36 < v29; ++v30 )
          {
            if ( (*v30 & 1) != 0 && (*v30 & 0x42) != 0 )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v37, v35);
                MiInitializeTbFlushList(ProcessorFlushList, v11, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
              }
              MiMakePteClean(v37, v30, ProcessorFlushList);
              v29 = v59;
            }
            ++v36;
          }
        }
        else
        {
          for ( j = 0; j < v29; ++v30 )
          {
            if ( (*v30 & 1) != 0 && (*v30 & 0x42) != 0 )
            {
              *(_DWORD *)(a1 + 128) |= 4u;
              if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
                break;
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v32, v31);
                MiInitializeTbFlushList(ProcessorFlushList, v11, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
              }
              MiMakePteClean(v32, v30, ProcessorFlushList);
              v29 = v59;
            }
            ++j;
          }
        }
        v26 = v60;
LABEL_18:
        if ( (*(_DWORD *)(a1 + 128) & 4) != 0 )
        {
          v16 = v54;
          v41 = 0LL;
          v42 = v51;
          while ( v41 < v26 )
          {
            *v42++ = v54 + ((*(_QWORD *)(a1 + 112) * v41) << 12);
            ++*(_QWORD *)(a1 + 80);
            v51 = v42;
            if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 88) )
            {
              v2 = v53;
              goto LABEL_42;
            }
            ++v41;
          }
        }
        v10 += 8 * v29;
        v52 += v26;
        if ( (v10 & 0xFFF) == 0 )
          goto LABEL_20;
      }
    }
    if ( _bittest64(*(const signed __int64 **)(v2 + 32), v23) == 1 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
      {
        v16 = v23 >> 3;
        *(_BYTE *)((v23 >> 3) + *(_QWORD *)(v2 + 32)) &= ~(1 << (v23 & 7));
      }
      *v51 = (__int64)(v10 << 25) >> 16;
      ++*(_QWORD *)(a1 + 80);
      ++v51;
      if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)(a1 + 88) )
        break;
    }
    v52 = ++v23;
    --v22;
    v10 += 8LL * *(_QWORD *)(a1 + 112);
  }
LABEL_42:
  if ( ProcessorFlushList )
  {
    MiFlushTbList(ProcessorFlushList);
    MiReleaseProcessorFlushList(v39, v38, v40);
  }
  v17 = v57;
LABEL_45:
  if ( (*(_DWORD *)(a1 + 128) & 8) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 40));
  if ( v15 )
    MiUnlockPageTableInternal(v11, v15);
  LOBYTE(v16) = v17;
  MiUnlockWorkingSetShared(v11, v16);
}
