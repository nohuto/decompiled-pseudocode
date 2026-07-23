/*
 * XREFs of RtlpStackDbSegmentFindOrCreate @ 0x14043C888
 * Callers:
 *     RtlpStackDbEntryCreate @ 0x14043C31C (RtlpStackDbEntryCreate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpStackDbRefCountIncrement @ 0x14043C2B8 (RtlpStackDbRefCountIncrement.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     RtlpStackDbSegmentComparitor @ 0x1406266C4 (RtlpStackDbSegmentComparitor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlpStackDbSegmentFindOrCreate(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r10
  unsigned __int8 *v4; // r8
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rbp
  volatile unsigned __int8 *v13; // rdx
  _BYTE *v14; // rsi
  signed __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // r15
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r12
  struct _KTHREAD *v25; // rax
  struct _KLOCK_ENTRIES *v26; // r9
  AutoBoost *v27; // rax
  volatile unsigned __int8 *v28; // rdx
  unsigned int v29; // r9d
  AutoBoost *v30; // rsi
  _QWORD *v31; // r10
  unsigned int v32; // esi
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // r13
  __int64 v38; // rsi
  char *v39; // rax
  char v40; // cl
  unsigned __int64 v41; // rcx
  unsigned int v42; // edi
  __int64 v43; // r9
  __int64 v44; // r15
  _QWORD *v45; // r10
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rdx
  unsigned int v51; // [rsp+60h] [rbp+8h]
  __int64 v52; // [rsp+60h] [rbp+8h]
  __int64 v53; // [rsp+60h] [rbp+8h]
  __int64 v54; // [rsp+60h] [rbp+8h]
  __int64 v55; // [rsp+68h] [rbp+10h]
  __int64 v56; // [rsp+68h] [rbp+10h]

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v6 = 314159LL;
  v7 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) >= 8 )
  {
    v7 -= 8LL * (unsigned int)v2;
    do
    {
      v8 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[7];
      v4 += 8;
      v6 = v9 + 37 * v8;
      --v2;
    }
    while ( v2 );
  }
  v10 = (struct _KLOCK_ENTRIES *)(v7 - 1);
  if ( !v10 )
    goto LABEL_17;
  v10 = (struct _KLOCK_ENTRIES *)((char *)v10 - 1);
  if ( !v10 )
  {
LABEL_16:
    v6 = *v4++ + 37 * v6;
LABEL_17:
    v6 = *v4 + 37 * v6;
    goto LABEL_18;
  }
  v10 = (struct _KLOCK_ENTRIES *)((char *)v10 - 1);
  if ( !v10 )
  {
LABEL_15:
    v6 = *v4++ + 37 * v6;
    goto LABEL_16;
  }
  v10 = (struct _KLOCK_ENTRIES *)((char *)v10 - 1);
  if ( !v10 )
  {
LABEL_14:
    v6 = *v4++ + 37 * v6;
    goto LABEL_15;
  }
  v10 = (struct _KLOCK_ENTRIES *)((char *)v10 - 1);
  if ( !v10 )
  {
LABEL_13:
    v6 = *v4++ + 37 * v6;
    goto LABEL_14;
  }
  v10 = (struct _KLOCK_ENTRIES *)((char *)v10 - 1);
  if ( !v10 )
  {
LABEL_12:
    v6 = *v4++ + 37 * v6;
    goto LABEL_13;
  }
  if ( v10 == (struct _KLOCK_ENTRIES *)1 )
  {
    v6 = *v4++ + 37 * v6;
    goto LABEL_12;
  }
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  v12 = (volatile signed __int64 *)(a1 + 40);
  --CurrentThread->SpecialApcDisable;
  v14 = (_BYTE *)KeAbPreAcquire(a1 + 40, 0LL, 0LL, v10);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 40), 0, (LegacyAutoBoost *)v14, (struct _KTHREAD *)(a1 + 40));
  v15 = 0LL;
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v13) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v14 + 33), v13, 1u, 0);
    }
    else
    {
      v14[10] = 1;
    }
  }
  v16 = *(_DWORD *)(a1 + 4);
  v51 = v16;
  v17 = v15;
  v18 = -1LL << (v16 & 0x1F);
  v19 = v6 & v18;
LABEL_25:
  if ( v17 )
    goto LABEL_28;
  if ( v16 >> 5 )
  {
    v55 = v6 & v18;
    v17 = *(_QWORD *)(a1 + 8)
        + 8LL
        * (((v16 >> 5) - 1) & (HIBYTE(v55)
                             - 877075889
                             + 442596621 * (unsigned __int8)v19
                             + 37
                             * (BYTE6(v55)
                              + 37
                              * (BYTE5(v55) + 37
                                            * (BYTE4(v55) + 37 * (BYTE3(v55) + 37 * (BYTE2(v55) + 37 * BYTE1(v55))))))));
LABEL_28:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        v20 = RtlpStackDbSegmentComparitor(v17, a2);
        v15 = 0LL;
        v21 = v20 == 0;
        v16 = v51;
        if ( !v21 )
        {
          v22 = v17 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int64 *)(v17 + 16)) != 0);
          if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 40));
          KeAbPostRelease(a1 + 40);
          KeLeaveGuardedRegion();
          return v22;
        }
        goto LABEL_25;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v12, v15, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 40));
  KeAbPostRelease(a1 + 40);
  KeLeaveGuardedRegion();
  v23 = guard_dispatch_icall_no_overrides(8 * *a2 + 24, *(_QWORD *)(a1 + 64));
  v24 = (_QWORD *)v23;
  if ( !v23 )
    return 0LL;
  *(_OWORD *)v23 = 0LL;
  *(_QWORD *)(v23 + 16) = 0LL;
  *(_QWORD *)(v23 + 16) = 1LL;
  *(_BYTE *)(v23 + 23) = *(_BYTE *)a2;
  *(_QWORD *)(v23 + 8) = v6;
  memmove((void *)(v23 + 24), *((const void **)a2 + 1), 8LL * *a2);
  v25 = KeGetCurrentThread();
  --v25->SpecialApcDisable;
  v27 = (AutoBoost *)KeAbPreAcquire(a1 + 40, 0LL, 0LL, v26);
  v30 = v27;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 40), v27, a1 + 40);
  v31 = 0LL;
  if ( v30 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v28) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v30 + 33), v28, 1u, v29);
    }
    else
    {
      *((_BYTE *)v30 + 10) = 1;
    }
  }
  v32 = *(_DWORD *)(a1 + 4);
  v33 = (__int64)v31;
  v56 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
  v34 = v56;
  v35 = v6 & v56;
LABEL_46:
  if ( v33 )
    goto LABEL_49;
  if ( v32 >> 5 )
  {
    v52 = v6 & v56;
    v33 = *(_QWORD *)(a1 + 8)
        + 8LL
        * (((v32 >> 5) - 1) & (HIBYTE(v52)
                             - 877075889
                             + 442596621 * (unsigned __int8)v35
                             + 37
                             * (BYTE6(v52)
                              + 37
                              * (BYTE5(v52) + 37
                                            * (BYTE4(v52) + 37 * (BYTE3(v52) + 37 * (BYTE2(v52) + 37 * BYTE1(v52))))))));
    v34 = v56;
LABEL_49:
    while ( 1 )
    {
      v33 = *(_QWORD *)v33;
      if ( (v33 & 1) != 0 )
        break;
      if ( v35 == (v34 & *(_QWORD *)(v33 + 8)) )
      {
        if ( !v33 )
          break;
        v36 = RtlpStackDbSegmentComparitor(v33, a2);
        v35 = v6 & v56;
        v31 = 0LL;
        v34 = v56;
        if ( v36 )
        {
          v22 = v33 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement((volatile signed __int64 *)(v33 + 16)) != 0);
          goto LABEL_77;
        }
        goto LABEL_46;
      }
    }
  }
  v37 = *(_QWORD *)(a1 + 64);
  v38 = 2 * (v32 >> 5);
  if ( *(_DWORD *)a1 >= (unsigned int)v38 )
  {
    if ( (unsigned int)v38 < 4 )
      v38 = 4LL;
    v39 = (char *)guard_dispatch_icall_no_overrides(8LL * (unsigned int)v38, v37);
    v31 = 0LL;
    if ( v39 )
    {
      if ( (((_DWORD)v38 - 1) & (unsigned int)v38) != 0 )
      {
        v40 = -1;
        do
        {
          ++v40;
          LODWORD(v38) = (unsigned int)v38 >> 1;
        }
        while ( (_DWORD)v38 );
        v38 = (unsigned int)(1 << v40);
      }
      if ( (unsigned int)v38 > 0x4000000 )
        v38 = 0x4000000LL;
      v41 = (unsigned int)v38;
      if ( v39 > &v39[8 * v38] )
        v41 = 0LL;
      if ( v41 )
        memset64(v39, a1 | 1, v41);
      v42 = 0;
      v43 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v44 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v45 = *(_QWORD **)(v44 + 8LL * v42);
            if ( ((unsigned __int8)v45 & 1) != 0 )
              break;
            *(_QWORD *)(v44 + 8LL * v42) = *v45;
            v53 = v43 & v45[1];
            v46 = ((_DWORD)v38 - 1) & (HIBYTE(v53)
                                     + 37
                                     * (BYTE6(v53)
                                      + 37
                                      * (BYTE5(v53)
                                       + 37
                                       * (BYTE4(v53)
                                        + 37
                                        * (BYTE3(v53)
                                         + 374026047
                                         + 37
                                         * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * (unsigned int)(unsigned __int8)v53)))))));
            *v45 = *(_QWORD *)&v39[8 * v46];
            *(_QWORD *)&v39[8 * v46] = v45;
          }
          ++v42;
        }
        while ( v42 < *(_DWORD *)(a1 + 4) >> 5 );
        v31 = 0LL;
      }
      v47 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v39;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v38);
      if ( v47 )
      {
        guard_dispatch_icall_no_overrides(v47, v37);
        v31 = 0LL;
      }
    }
    else if ( *(_DWORD *)(a1 + 4) < 0x20u )
    {
      v22 = 0LL;
      goto LABEL_77;
    }
  }
  v54 = v24[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
  v48 = *(_QWORD *)(a1 + 8);
  v49 = ((*(_DWORD *)(a1 + 4) >> 5) - 1) & (HIBYTE(v54)
                                          + 37
                                          * (BYTE6(v54)
                                           + 37
                                           * (BYTE5(v54)
                                            + 37
                                            * (BYTE4(v54)
                                             + 37
                                             * (BYTE3(v54)
                                              + 374026047
                                              + 37
                                              * (BYTE2(v54) + 37
                                                            * (BYTE1(v54) + 37 * (unsigned int)(unsigned __int8)v54)))))));
  v22 = (__int64)v24;
  *v24 = *(_QWORD *)(v48 + 8 * v49);
  *(_QWORD *)(v48 + 8 * v49) = v24;
  v24 = v31;
  ++*(_DWORD *)a1;
LABEL_77:
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  KeAbPostRelease(a1 + 40);
  KeLeaveGuardedRegion();
  if ( v24 )
    guard_dispatch_icall_no_overrides(v24, *(_QWORD *)(a1 + 64));
  return v22;
}
