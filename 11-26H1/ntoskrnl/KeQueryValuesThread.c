/*
 * XREFs of KeQueryValuesThread @ 0x140305730
 * Callers:
 *     ExpCopyProcessInfo @ 0x14091E820 (ExpCopyProcessInfo.c)
 *     PsQueryStatisticsProcess @ 0x1409CDFC0 (PsQueryStatisticsProcess.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 CurrentIrql; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rbx
  volatile __int64 *v9; // r14
  int v10; // r12d
  __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned int k; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // r8
  char v18; // al
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25; // dl
  __int64 result; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int i; // ecx
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // dl
  unsigned __int64 *v36; // r8
  __int64 v37; // rdx
  unsigned __int8 *v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // edi
  unsigned int j; // ecx
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 *v44; // r8
  __int64 v45; // rdx
  unsigned __int8 *v46; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v48; // [rsp+20h] [rbp-38h] BYREF
  __int128 v49; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v50; // [rsp+40h] [rbp-18h]
  unsigned __int64 v51; // [rsp+90h] [rbp+38h] BYREF
  __int64 v52; // [rsp+98h] [rbp+40h]

  *(_DWORD *)a2 = 0;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  v6 = 0;
LABEL_6:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    while ( 1 )
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_85:
          HvlNotifyLongSpinWait(v6);
          goto LABEL_9;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v31 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v31 + 35) & 1) != 0 )
          {
            v32 = *(_QWORD *)(v31 + 36600);
            if ( !v32 || !*(_BYTE *)(v32 + 65) || !*(_BYTE *)(v32 + 64) )
              goto LABEL_85;
          }
        }
      }
      _mm_pause();
LABEL_9:
      if ( !*(_QWORD *)(a1 + 64) )
        goto LABEL_6;
    }
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &unk_140FC9F40 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_63;
  }
  v48 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(unsigned __int8 *)(a1 + 388);
        v8 = 0LL;
        v9 = 0LL;
        v10 = v7;
        if ( v7 == 5 )
        {
          v16 = *(_BYTE *)(a1 + 112) & 7;
          if ( v16 == 1 || (unsigned __int8)(v16 - 3) <= 3u )
            goto LABEL_40;
          v10 = 2;
          goto LABEL_106;
        }
        if ( v7 == 1 )
          break;
        if ( v7 == 2 )
        {
LABEL_106:
          v39 = *(unsigned int *)(a1 + 536);
          if ( (int)v39 >= 0 )
          {
            v8 = KiProcessorBlock[v39];
            v40 = 0;
            *((_QWORD *)&v48 + 1) = v8 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_108:
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            {
              while ( 1 )
              {
                if ( (++v40 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                  {
LABEL_122:
                    HvlNotifyLongSpinWait(v40);
                    goto LABEL_111;
                  }
                  for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
                  {
                    v42 = KiProcessorBlock[j];
                    if ( (*(_BYTE *)(v42 + 35) & 1) != 0 )
                    {
                      v43 = *(_QWORD *)(v42 + 36600);
                      if ( !v43 || !*(_BYTE *)(v43 + 65) || !*(_BYTE *)(v43 + 64) )
                        goto LABEL_122;
                    }
                  }
                }
                _mm_pause();
LABEL_111:
                if ( !*(_QWORD *)(v8 + 48) )
                  goto LABEL_108;
              }
            }
            if ( a1 == *(_QWORD *)(v8 + 8) )
              goto LABEL_40;
            if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v39 )
              __fastfail(0x4Au);
            v36 = 0LL;
            LODWORD(v37) = 0;
            v51 = *((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (BYTE8(v48) & 1) == 0 )
            {
              v36 = &v51;
              LODWORD(v37) = 1;
              do
              {
LABEL_102:
                v37 = (unsigned int)(v37 - 1);
                _InterlockedAnd64((volatile signed __int64 *)(v36[v37] + 48), 0LL);
              }
              while ( (_DWORD)v37 );
              goto LABEL_103;
            }
            if ( (BYTE8(v48) & 1) == 1 )
            {
              v38 = *(unsigned __int8 **)((*((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
              LODWORD(v37) = *v38;
              v36 = (unsigned __int64 *)(v38 + 8);
            }
            if ( (_DWORD)v37 )
              goto LABEL_102;
LABEL_103:
            *((_QWORD *)&v48 + 1) = 0LL;
          }
        }
        else
        {
          if ( v7 != 3 )
            goto LABEL_40;
          v11 = *(unsigned int *)(a1 + 536);
          if ( (int)v11 >= 0 )
          {
            v8 = KiProcessorBlock[v11];
            v12 = 0;
            *((_QWORD *)&v48 + 1) = v8 & 0xFFFFFFFFFFFFFFFEuLL;
LABEL_19:
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            {
              while ( 1 )
              {
                if ( (++v12 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
                  {
LABEL_37:
                    HvlNotifyLongSpinWait(v12);
                    goto LABEL_22;
                  }
                  for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
                  {
                    v14 = KiProcessorBlock[k];
                    if ( (*(_BYTE *)(v14 + 35) & 1) != 0 )
                    {
                      v15 = *(_QWORD *)(v14 + 36600);
                      if ( !v15 || !*(_BYTE *)(v15 + 65) || !*(_BYTE *)(v15 + 64) )
                        goto LABEL_37;
                    }
                  }
                }
                _mm_pause();
LABEL_22:
                if ( !*(_QWORD *)(v8 + 48) )
                  goto LABEL_19;
              }
            }
            if ( a1 == *(_QWORD *)(v8 + 16) )
              goto LABEL_40;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
              __fastfail(0x1Eu);
            KiReleasePrcbLocksForIsolationUnit((__int64 *)&v48 + 1);
          }
        }
      }
      v27 = *(unsigned int *)(a1 + 536);
      if ( (int)v27 < 0 )
        break;
      v8 = KiProcessorBlock[v27];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, (char *)&v48 + 8);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
        goto LABEL_40;
      v44 = 0LL;
      LODWORD(v45) = 0;
      v51 = *((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (BYTE8(v48) & 1) != 0 )
      {
        if ( (BYTE8(v48) & 1) == 1 )
        {
          v46 = *(unsigned __int8 **)((*((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
          LODWORD(v45) = *v46;
          v44 = (unsigned __int64 *)(v46 + 8);
        }
        if ( !(_DWORD)v45 )
          goto LABEL_103;
      }
      else
      {
        v44 = &v51;
        LODWORD(v45) = 1;
      }
      do
      {
        v45 = (unsigned int)(v45 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v44[v45] + 48), 0LL);
      }
      while ( (_DWORD)v45 );
      *((_QWORD *)&v48 + 1) = 0LL;
    }
    v28 = (unsigned int)v27;
    LODWORD(v28) = v27 & 0x7FFFFFFF;
    v29 = KiProcessorBlock[v28];
    v9 = *(volatile __int64 **)(v29 + 36488);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v50 = *(volatile signed __int64 **)(v29 + 36488);
      *((_QWORD *)&v49 + 1) = 0LL;
      v33 = _InterlockedExchange64(v9, (__int64)&v49 + 8);
      if ( v33 )
        KxWaitForLockOwnerShip((signed __int64)&v49 + 8, v33, 2LL);
    }
    else
    {
      LODWORD(v51) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
          KeYieldProcessorEx(&v51);
        while ( *v9 );
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v49 + 8);
      v34 = *((_QWORD *)&v49 + 1);
      if ( *((_QWORD *)&v49 + 1) )
      {
LABEL_93:
        *((_QWORD *)&v49 + 1) = 0LL;
        v35 = (unsigned __int8)v50;
        if ( ((v35 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v34 + 8), (__int64)v50)) & 4) != 0 )
        {
          _InterlockedOr(v47, 0);
          KiWakeAddressAll();
        }
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(v50, 0LL, (signed __int64)&v49 + 8) != (__int128 *)((char *)&v49 + 8) )
      {
        v34 = KxWaitForLockChainValid((__int64 *)&v49 + 1, (__int64)KiProcessorBlock, 2LL);
        goto LABEL_93;
      }
    }
    else
    {
      _InterlockedAnd64(v9, 0LL);
    }
  }
  v8 = 0LL;
LABEL_40:
  v17 = 0xFFFFF78000000320uLL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  v18 = *(_BYTE *)(a1 + 388);
  v19 = *(_DWORD *)(a1 + 132);
  *(_QWORD *)&v48 = v8;
  *(_QWORD *)&v49 = v9;
  if ( v18 == 1 || v18 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v19 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = v19;
  v20 = *(_QWORD *)(a1 + 992);
  v21 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v22 = *(_BYTE *)(a1 + 112) & 7;
    if ( v22 == 1 || (unsigned __int8)(v22 - 3) <= 3u )
    {
      v17 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v21 += v17;
      else
        v20 += v17;
    }
  }
  *(_QWORD *)(a2 + 16) = v20;
  *(_QWORD *)(a2 + 24) = v21;
  if ( v8 )
  {
    v17 = 0LL;
    LODWORD(v23) = 0;
    v51 = *((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v21 = BYTE8(v48) & 1;
    if ( (BYTE8(v48) & 1) == 0 )
    {
      v17 = (__int64)&v51;
      LODWORD(v23) = 1;
      goto LABEL_51;
    }
    if ( (_DWORD)v21 == 1 )
    {
      v23 = *(_QWORD *)((*((_QWORD *)&v48 + 1) & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      v17 = v23 + 8;
      LODWORD(v23) = *(unsigned __int8 *)v23;
    }
    while ( (_DWORD)v23 )
    {
LABEL_51:
      v23 = (unsigned int)(v23 - 1);
      v21 = *(_QWORD *)(v17 + 8 * v23);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 48), 0LL);
    }
    *((_QWORD *)&v48 + 1) = 0LL;
  }
  if ( (_QWORD)v49 )
  {
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw((char *)&v49 + 8);
      v24 = *((_QWORD *)&v49 + 1);
      if ( *((_QWORD *)&v49 + 1) )
      {
LABEL_58:
        *((_QWORD *)&v49 + 1) = 0LL;
        v25 = (unsigned __int8)v50;
        if ( ((v25 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v24 + 8), (__int64)v50)) & 4) != 0 )
        {
          _InterlockedOr(v47, 0);
          KiWakeAddressAll();
        }
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(v50, 0LL, (signed __int64)&v49 + 8) != (__int128 *)((char *)&v49 + 8) )
      {
        v24 = KxWaitForLockChainValid((__int64 *)&v49 + 1, v21, v17);
        goto LABEL_58;
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v49, 0LL);
    }
  }
  v3 = *(_BYTE *)(a1 + 643);
  LOBYTE(CurrentIrql) = v52;
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( v10 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_63:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  *(_BYTE *)(a2 + 8) = v10;
  *(_BYTE *)(a2 + 9) = v3;
  return result;
}
