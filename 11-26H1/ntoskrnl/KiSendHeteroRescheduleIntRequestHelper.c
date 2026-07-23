/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x14021FDA0 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline @ 0x14023F7D0 (Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140247840 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // r12
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r13
  int v9; // r14d
  __int64 v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // ecx
  unsigned int i; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r12
  __int64 v26; // r14
  __int64 v27; // r9
  int v28; // eax
  volatile __int64 *v29; // r15
  __int64 v30; // r12
  char v31; // al
  __int64 v32; // r14
  int IsEnabledNoReportingNoInline; // eax
  __int64 v34; // rcx
  bool v35; // zf
  char v36; // al
  unsigned int v37; // eax
  unsigned __int64 *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned int v44; // eax
  int v45; // [rsp+20h] [rbp-48h]
  int v46; // [rsp+24h] [rbp-44h]
  unsigned __int64 v47; // [rsp+28h] [rbp-40h] BYREF
  __int64 v48; // [rsp+30h] [rbp-38h]
  __int128 v49; // [rsp+38h] [rbp-30h] BYREF
  __int128 v50; // [rsp+48h] [rbp-20h] BYREF
  volatile signed __int64 *v51; // [rsp+58h] [rbp-10h]
  char v52; // [rsp+B0h] [rbp+48h]
  __int64 v55; // [rsp+C8h] [rbp+60h]

  v55 = a4;
  v45 = -1;
  v4 = 0;
  v46 = 0;
  v48 = 0LL;
  v5 = a2;
  v52 = 0;
  v6 = a3;
  v7 = (unsigned __int64)KiProcessorBlock;
  v8 = a1;
  v9 = 0;
  v10 = 0LL;
  if ( !a1 )
    goto LABEL_32;
  while ( 2 )
  {
    v11 = 0;
    _BitScanForward64((unsigned __int64 *)&v12, v8);
    v13 = (unsigned int)v12 + (*(unsigned __int8 *)(a4 + 208) << 6);
    v8 ^= 1LL << v12;
    LODWORD(v47) = 0;
    v14 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink + v13);
    v15 = KiProcessorBlock[v14];
LABEL_3:
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 48), 0LL) )
    {
      while ( 1 )
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_29:
            HvlNotifyLongSpinWait(v11);
            v7 = (unsigned __int64)KiProcessorBlock;
            goto LABEL_6;
          }
          for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
          {
            v19 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v19 + 35) & 1) != 0 )
            {
              v20 = *(_QWORD *)(v19 + 36600);
              if ( !v20 || !*(_BYTE *)(v20 + 65) || !*(_BYTE *)(v20 + 64) )
                goto LABEL_29;
            }
            v7 = (unsigned __int64)KiProcessorBlock;
          }
        }
        _mm_pause();
LABEL_6:
        if ( !*(_QWORD *)(v15 + 48) )
          goto LABEL_3;
      }
    }
    v16 = *(_QWORD *)(v15 + 8);
    if ( (*(_BYTE *)(v15 + 35) & 1) == 0 || *(_QWORD *)(v15 + 16) )
    {
      v47 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
      LODWORD(v7) = 1;
      do
      {
        v7 = (unsigned int)(v7 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(*(&v47 + v7) + 48), 0LL);
      }
      while ( (_DWORD)v7 );
      goto LABEL_18;
    }
    if ( *(_BYTE *)(v15 + 14521) )
      goto LABEL_15;
    v17 = *(_DWORD *)(v16 + 80);
    if ( v17 <= *(_DWORD *)(v16 + 84) )
      v17 = *(_DWORD *)(v16 + 84);
    if ( v17 < KiDynamicHeteroCpuPolicyExpectedCycles
      || !(unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v15 + 8), v15, 0LL) )
    {
      goto LABEL_15;
    }
    if ( v5 )
    {
      if ( (*(_DWORD *)(v16 + 120) & 0x1000) == 0 )
      {
        v7 = (unsigned int)v45;
        v48 |= 1LL << v12;
        if ( v45 == -1 || *(char *)(v16 + 195) > v45 )
        {
          v45 = *(char *)(v16 + 195);
          v46 = v14;
          v52 = 1;
        }
      }
LABEL_15:
      if ( (v15 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v47 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
        LODWORD(v22) = 1;
        do
        {
          v22 = (unsigned int)(v22 - 1);
          v7 = *(&v47 + v22);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
        }
        while ( (_DWORD)v22 );
      }
      goto LABEL_18;
    }
    v49 = 0LL;
    v51 = 0LL;
    v50 = 0LL;
    _InterlockedIncrement16((volatile signed __int16 *)(v16 + 868));
    v47 = v15 & 0xFFFFFFFFFFFFFFFEuLL;
    v38 = &v47;
    LODWORD(v39) = 1;
    do
    {
      v39 = (unsigned int)(v39 - 1);
      v23 = *(&v47 + v39);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 48), 0LL);
    }
    while ( (_DWORD)v39 );
    LODWORD(v47) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v47);
      while ( *(_QWORD *)(v16 + 64) );
    }
LABEL_56:
    while ( 2 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *(unsigned __int8 *)(v16 + 388);
          v26 = 0LL;
          v29 = 0LL;
          v24 = v28;
          if ( v28 == 5 )
          {
            v31 = *(_BYTE *)(v16 + 112) & 7;
            if ( v31 == 1 || (unsigned __int8)(v31 - 3) <= 3u )
              goto LABEL_67;
            v24 = 2;
            goto LABEL_52;
          }
          if ( v28 == 1 )
            break;
          v23 = (unsigned int)(v28 - 2);
          if ( v28 == 2 )
          {
LABEL_52:
            v25 = *(unsigned int *)(v16 + 536);
            if ( (int)v25 >= 0 )
            {
              v26 = KiProcessorBlock[v25];
              KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, (char *)&v49 + 8);
              if ( v16 == *(_QWORD *)(v26 + 8) )
                goto LABEL_67;
              if ( *(_BYTE *)(v16 + 388) == 2 && *(_DWORD *)(v16 + 536) == (_DWORD)v25 )
                __fastfail(0x4Au);
              goto LABEL_55;
            }
          }
          else
          {
            if ( v28 != 3 )
              goto LABEL_67;
            v30 = *(unsigned int *)(v16 + 536);
            if ( (int)v30 >= 0 )
            {
              v26 = KiProcessorBlock[v30];
              KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, (char *)&v49 + 8);
              if ( v16 != *(_QWORD *)(v26 + 16) )
              {
                if ( *(_BYTE *)(v16 + 388) == 3 && *(_DWORD *)(v16 + 536) == (_DWORD)v30 )
                  __fastfail(0x1Eu);
                goto LABEL_55;
              }
              goto LABEL_67;
            }
          }
        }
        v40 = *(unsigned int *)(v16 + 536);
        v23 = (unsigned __int64)KiProcessorBlock;
        if ( (int)v40 >= 0 )
          break;
        v41 = (unsigned int)v40;
        LODWORD(v41) = v40 & 0x7FFFFFFF;
        v42 = KiProcessorBlock[v41];
        v29 = *(volatile __int64 **)(v42 + 36488);
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          v51 = *(volatile signed __int64 **)(v42 + 36488);
          *((_QWORD *)&v50 + 1) = 0LL;
          v39 = _InterlockedExchange64(v29, (__int64)&v50 + 8);
          if ( !v39 )
            goto LABEL_83;
          KxWaitForLockOwnerShip((char *)&v50 + 8);
        }
        else
        {
          LODWORD(v47) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( *v29 );
          }
        }
        v27 = 0LL;
LABEL_83:
        if ( *(_BYTE *)(v16 + 388) == 1 && *(_DWORD *)(v16 + 536) == (_DWORD)v40 )
        {
          v26 = 0LL;
          goto LABEL_67;
        }
        if ( (KiVelocityFlags & 0x200000) != 0 )
        {
          _m_prefetchw((char *)&v50 + 8);
          v43 = *((_QWORD *)&v50 + 1);
          if ( *((_QWORD *)&v50 + 1) )
          {
LABEL_88:
            v23 = v43 + 8;
            *((_QWORD *)&v50 + 1) = 0LL;
            v39 = (__int64)v51;
            if ( (((unsigned __int8)v39 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v43 + 8),
                                                             (__int64)v51)) & 4) != 0 )
            {
              KeWakeAddressAll(v23, v39, v38, 0LL);
              goto LABEL_56;
            }
          }
          else
          {
            v23 = (unsigned __int64)&v50 + 8;
            if ( (__int128 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50 + 8) != (__int128 *)((char *)&v50 + 8) )
            {
              v43 = KxWaitForLockChainValid((char *)&v50 + 8);
              v27 = 0LL;
              goto LABEL_88;
            }
          }
        }
        else
        {
          _InterlockedAnd64(v29, 0LL);
        }
      }
      v26 = KiProcessorBlock[v40];
      KiAcquirePrcbLocksForIsolationUnit(v26, 0LL, (char *)&v49 + 8);
      if ( *(_BYTE *)(v16 + 388) != 1 || *(_DWORD *)(v16 + 536) != (_DWORD)v40 )
      {
LABEL_55:
        KiReleasePrcbLocksForIsolationUnit((char *)&v49 + 8);
        continue;
      }
      break;
    }
LABEL_67:
    *(_QWORD *)&v49 = v26;
    *(_QWORD *)&v50 = v29;
    _InterlockedDecrement16((volatile signed __int16 *)(v16 + 868));
    v32 = v49;
    IsEnabledNoReportingNoInline = Feature_HeteroRescheduleFixes__private_IsEnabledNoReportingNoInline(
                                     v23,
                                     v39,
                                     v38,
                                     v27);
    if ( v24 == 2 && v32 == v15 )
    {
      v35 = IsEnabledNoReportingNoInline == 0;
      v36 = *(_BYTE *)(v16 + 388);
      if ( v35 )
      {
        if ( v36 == 2 && !*(_BYTE *)(v15 + 14521) )
        {
          v34 = *(unsigned int *)(v16 + 80);
          v44 = *(_DWORD *)(v16 + 84);
          if ( (unsigned int)v34 <= v44 )
            v34 = v44;
          if ( (unsigned int)v34 >= KiDynamicHeteroCpuPolicyExpectedCycles
            && (unsigned int)KiCheckPreferredHeteroProcessor(v16, v15, 0LL)
            && !_interlockedbittestandset((volatile signed __int32 *)(v16 + 120), 0xCu) )
          {
LABEL_76:
            *(_BYTE *)(v15 + 14521) = 1;
            KiAddProcessorToSoftwareInterruptBatch(v55 + 13784, v15);
            v52 = 1;
          }
        }
      }
      else if ( v36 == 2 && !*(_BYTE *)(v15 + 14521) )
      {
        v34 = *(unsigned int *)(v16 + 80);
        v37 = *(_DWORD *)(v16 + 84);
        if ( (unsigned int)v34 <= v37 )
          v34 = v37;
        if ( (unsigned int)v34 >= KiDynamicHeteroCpuPolicyExpectedCycles
          && (unsigned int)KiCheckPreferredHeteroProcessor(v16, v15, 0LL) )
        {
          goto LABEL_76;
        }
      }
    }
    KiReleaseThreadStateLock(v34, &v49);
    v5 = a2;
    *(_QWORD *)(v16 + 64) = 0LL;
LABEL_18:
    a4 = v55;
    if ( v8 )
    {
      v7 = (unsigned __int64)KiProcessorBlock;
      continue;
    }
    break;
  }
  v6 = a3;
  v10 = v48;
  v4 = v52;
  v9 = v46;
LABEL_32:
  KiFlushSoftwareInterruptBatch(a4 + 13784, v7);
  if ( v5 )
    *v5 = v10;
  if ( v6 )
    *v6 = KiProcessorBlock[v9];
  return v4;
}
