/*
 * XREFs of RtlStackDbStackAdd @ 0x14043BB88
 * Callers:
 *     ObpPushRefDerefInfoNoLock @ 0x1407732BC (ObpPushRefDerefInfoNoLock.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpStackDbEntryIsEqual @ 0x14043C208 (RtlpStackDbEntryIsEqual.c)
 *     RtlpStackDbRefCountIncrement @ 0x14043C2B8 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbEntryCreate @ 0x14043C31C (RtlpStackDbEntryCreate.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     RtlpStackDbEntryCleanup @ 0x140626640 (RtlpStackDbEntryCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, struct _KLOCK_ENTRIES *a2, unsigned int a3)
{
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 Thread_high; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v12; // rsi
  unsigned int v13; // r12d
  struct _LIST_ENTRY ***v14; // r14
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  _QWORD *v24; // r12
  struct _KTHREAD *v25; // rax
  AutoBoost *v26; // rax
  volatile unsigned __int8 *v27; // rdx
  unsigned int v28; // r9d
  signed __int8 v29; // cf
  AutoBoost *v30; // rsi
  unsigned int v31; // r13d
  __int64 v32; // r15
  __int64 v33; // r14
  PVOID SystemArgument1; // r15
  __int64 v35; // rsi
  struct _LIST_ENTRY *v36; // rcx
  __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // r8
  char v39; // cl
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // dl
  unsigned int v42; // edi
  __int64 v43; // r9
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY *v45; // rcx
  _QWORD *v46; // r10
  __int64 v47; // rdx
  _DWORD v48[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _KLOCK_ENTRIES *v49; // [rsp+28h] [rbp-8h]
  __int64 v50; // [rsp+60h] [rbp+30h]
  __int64 v51; // [rsp+60h] [rbp+30h]
  __int64 v52; // [rsp+60h] [rbp+30h]
  __int64 v53; // [rsp+60h] [rbp+30h]

  v3 = a2;
  v48[1] = 0;
  if ( !a3 || !a2 )
    return 0LL;
  v4 = a3;
  v5 = 314159LL;
  v48[0] = a3;
  v49 = a2;
  v6 = 8LL * a3;
  if ( v6 >= 8 )
  {
    v6 -= 8LL * (unsigned int)v4;
    do
    {
      v7 = BYTE6(v3->Thread)
         + 37
         * (BYTE5(v3->Thread)
          + 37
          * (BYTE4(v3->Thread)
           + 37
           * (BYTE3(v3->Thread)
            + 37 * (BYTE2(v3->Thread) + 37 * (BYTE1(v3->Thread) + 37 * (LOBYTE(v3->Thread) + 37 * v5))))));
      Thread_high = HIBYTE(v3->Thread);
      v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 8);
      v5 = Thread_high + 37 * v7;
      --v4;
    }
    while ( v4 );
  }
  v9 = v6 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v19 = v10 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_10;
              v5 = LOBYTE(v3->Thread) + 37 * v5;
              v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
            }
            v5 = LOBYTE(v3->Thread) + 37 * v5;
            v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
          }
          v5 = LOBYTE(v3->Thread) + 37 * v5;
          v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
        }
        v5 = LOBYTE(v3->Thread) + 37 * v5;
        v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
      }
      v5 = LOBYTE(v3->Thread) + 37 * v5;
      v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
    }
    v5 = LOBYTE(v3->Thread) + 37 * v5;
    v3 = (struct _KLOCK_ENTRIES *)((char *)v3 + 1);
  }
  v5 = LOBYTE(v3->Thread) + 37 * v5;
LABEL_10:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)ObpStackTraceLock.SchedulerApc.Reserved, 0LL, 0LL, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
      0,
      v12,
      (struct _KTHREAD *)&ObpStackTraceLock.SchedulerApcFill5[32]);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v12 + 33) |= 2u;
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20];
  v14 = 0LL;
  v15 = -1LL << (ObpStackTraceLock.SchedulerApcFill3[20] & 0x1F);
  v16 = v5 & v15;
LABEL_16:
  if ( v14 )
    goto LABEL_19;
  if ( v13 >> 5 )
  {
    v50 = v5 & v15;
    v14 = (struct _LIST_ENTRY ***)ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink
        + (((v13 >> 5) - 1) & (HIBYTE(v50)
                             - 877075889
                             + 442596621 * (unsigned __int8)v16
                             + 37
                             * (BYTE6(v50)
                              + 37
                              * (BYTE5(v50) + 37
                                            * (BYTE4(v50) + 37 * (BYTE3(v50) + 37 * (BYTE2(v50) + 37 * BYTE1(v50))))))));
LABEL_19:
    while ( 1 )
    {
      v14 = (struct _LIST_ENTRY ***)*v14;
      if ( ((unsigned __int8)v14 & 1) != 0 )
        break;
      if ( v16 == (v15 & (unsigned __int64)v14[1]) )
      {
        if ( !v14 )
          break;
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v14, v48) )
        {
          v17 = (unsigned __int64)v14 & -(__int64)((unsigned int)RtlpStackDbRefCountIncrement(v14 + 2) != 0);
          if ( _InterlockedCompareExchange64(
                 (volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
                 0LL,
                 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
          KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
          KeLeaveGuardedRegion();
          return (_QWORD *)v17;
        }
        goto LABEL_16;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
  KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
  KeLeaveGuardedRegion();
  v24 = (_QWORD *)RtlpStackDbEntryCreate(&ObpStackTraceLock.648, v48, v5);
  if ( !v24 )
    return 0LL;
  v25 = KeGetCurrentThread();
  --v25->SpecialApcDisable;
  v26 = (AutoBoost *)KeAbPreAcquire((__int64)ObpStackTraceLock.SchedulerApc.Reserved, 0LL, 0LL, v23);
  v29 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock.SchedulerApcFill5[32], 0LL);
  v30 = v26;
  if ( v29 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
      v26,
      (__int64)ObpStackTraceLock.SchedulerApc.Reserved);
  if ( v30 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v27) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v30 + 33), v27, 1u, v28);
    }
    else
    {
      *((_BYTE *)v30 + 10) = 1;
    }
  }
  v17 = 0LL;
  v31 = *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20];
  v32 = -1LL << (ObpStackTraceLock.SchedulerApcFill3[20] & 0x1F);
  v33 = v5 & v32;
LABEL_45:
  if ( v17 )
    goto LABEL_48;
  if ( v31 >> 5 )
  {
    v51 = v5 & v32;
    v17 = (__int64)ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink
        + 8
        * (((v31 >> 5) - 1) & (HIBYTE(v51)
                             - 877075889
                             + 442596621 * (unsigned __int8)v33
                             + 37
                             * (BYTE6(v51)
                              + 37
                              * (BYTE5(v51) + 37
                                            * (BYTE4(v51) + 37 * (BYTE3(v51) + 37 * (BYTE2(v51) + 37 * BYTE1(v51))))))));
LABEL_48:
    while ( 1 )
    {
      v17 = *(_QWORD *)v17;
      if ( (v17 & 1) != 0 )
        break;
      if ( v33 == (v32 & *(_QWORD *)(v17 + 8)) )
      {
        if ( !v17 )
          break;
        if ( (unsigned int)RtlpStackDbEntryIsEqual(v17, v48) )
        {
          if ( !(unsigned int)RtlpStackDbRefCountIncrement(v17 + 16) )
            v17 = 0LL;
          goto LABEL_84;
        }
        goto LABEL_45;
      }
    }
  }
  SystemArgument1 = ObpStackTraceLock.SchedulerApc.SystemArgument1;
  v35 = (unsigned int)(2 * (*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] >> 5));
  if ( *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[16] < (unsigned int)v35 )
    goto LABEL_55;
  if ( (unsigned int)v35 < 4 )
    v35 = 4LL;
  v38 = (struct _LIST_ENTRY *)guard_dispatch_icall_no_overrides(
                                8LL * (unsigned int)v35,
                                ObpStackTraceLock.SchedulerApc.SystemArgument1);
  if ( v38 )
  {
    if ( (((_DWORD)v35 - 1) & (unsigned int)v35) != 0 )
    {
      v39 = -1;
      do
      {
        ++v39;
        LODWORD(v35) = (unsigned int)v35 >> 1;
      }
      while ( (_DWORD)v35 );
      v35 = (unsigned int)(1 << v39);
    }
    if ( (unsigned int)v35 > 0x4000000 )
      v35 = 0x4000000LL;
    v40 = (unsigned int)v35;
    if ( v38 > (struct _LIST_ENTRY *)((char *)v38 + 8 * v35) )
      v40 = 0LL;
    if ( v40 )
      memset64(v38, (unsigned __int64)&ObpStackTraceLock.SchedulerApcFill5[17], v40);
    v41 = ObpStackTraceLock.SchedulerApcFill3[20];
    v42 = 0;
    v43 = -1LL << (ObpStackTraceLock.SchedulerApcFill3[20] & 0x1F);
    if ( (*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] & 0xFFFFFFE0) != 0 )
    {
      do
      {
        Blink = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
        while ( 1 )
        {
          v46 = (_QWORD *)*((_QWORD *)&Blink->Flink + v42);
          if ( ((unsigned __int8)v46 & 1) != 0 )
            break;
          *((_QWORD *)&Blink->Flink + v42) = *v46;
          v53 = v43 & v46[1];
          v47 = ((_DWORD)v35 - 1) & (HIBYTE(v53)
                                   + 37
                                   * (BYTE6(v53)
                                    + 37
                                    * (BYTE5(v53)
                                     + 37
                                     * (BYTE4(v53)
                                      + 37
                                      * (BYTE3(v53)
                                       + 374026047
                                       + 37 * (BYTE2(v53) + 37 * (BYTE1(v53) + 37 * (unsigned int)(unsigned __int8)v53)))))));
          *v46 = *((_QWORD *)&v38->Flink + v47);
          *((_QWORD *)&v38->Flink + v47) = v46;
        }
        v41 = ObpStackTraceLock.SchedulerApcFill3[20];
        ++v42;
      }
      while ( v42 < *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] >> 5 );
    }
    v45 = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
    ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink = v38;
    *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] = v41 & 0x1F | (32 * v35);
    if ( v45 )
      guard_dispatch_icall_no_overrides(v45, SystemArgument1);
    goto LABEL_55;
  }
  if ( *(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] >= 0x20u )
  {
LABEL_55:
    v52 = v24[1] & (-1LL << (ObpStackTraceLock.SchedulerApcFill3[20] & 0x1F));
    v36 = ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink;
    v37 = ((*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[20] >> 5) - 1) & (HIBYTE(v52)
                                                                            + 37
                                                                            * (BYTE6(v52)
                                                                             + 37
                                                                             * (BYTE5(v52)
                                                                              + 37
                                                                              * (BYTE4(v52)
                                                                               + 37
                                                                               * (BYTE3(v52)
                                                                                + 374026047
                                                                                + 37
                                                                                * (BYTE2(v52)
                                                                                 + 37
                                                                                 * (BYTE1(v52)
                                                                                  + 37
                                                                                  * (unsigned int)(unsigned __int8)v52)))))));
    *v24 = *((_QWORD *)&ObpStackTraceLock.SchedulerApc.ApcListEntry.Blink->Flink + v37);
    *((_QWORD *)&v36->Flink + v37) = v24;
    ++*(_DWORD *)&ObpStackTraceLock.SchedulerApcFill5[16];
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
    KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
    KeLeaveGuardedRegion();
    return v24;
  }
  v17 = 0LL;
LABEL_84:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)ObpStackTraceLock.SchedulerApc.Reserved);
  KeAbPostRelease((unsigned __int64)ObpStackTraceLock.SchedulerApc.Reserved);
  KeLeaveGuardedRegion();
  RtlpStackDbEntryCleanup(&ObpStackTraceLock.648, v24);
  return (_QWORD *)v17;
}
