/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1407FD820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     PspSendJobNotification @ 0x1404C9CC0 (PspSendJobNotification.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspGetEffectiveNoWakeCharge @ 0x14077C1D4 (PspGetEffectiveNoWakeCharge.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14077EFD8 (PspSendNoWakeChargeLimitNotification.c)
 *     PspAddAccountingValues @ 0x1409CE260 (PspAddAccountingValues.c)
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140A0717C (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140A85548 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobShared @ 0x140A87E58 (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A94B70 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 *     PspRateControlLimitFlag @ 0x140ACC250 (PspRateControlLimitFlag.c)
 *     PspSendReliableJobNotification @ 0x140AEB3B4 (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY *Blink; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  LIST_ENTRY WaitListHead; // xmm0
  struct _LIST_ENTRY *Flink; // r12
  struct _LIST_ENTRY *v12; // r13
  int Blink_high; // eax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rcx
  __int8 *v18; // r9
  char *v19; // r10
  _DWORD *v20; // rdx
  __int64 v21; // r8
  struct _LIST_ENTRY *v22; // rax
  char *p_Blink; // rax
  __int64 v24; // rcx
  char *v25; // r8
  char *v26; // r9
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  int v29; // ecx
  __int64 v30; // rcx
  struct _KPROCESS *v31; // rcx
  unsigned __int64 v32; // rdx
  bool v33; // zf
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *v35; // rcx
  __int128 v37; // [rsp+20h] [rbp-E0h] BYREF
  __m256i v38; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-B0h]
  struct _LIST_ENTRY *v40; // [rsp+60h] [rbp-A0h]
  struct _LIST_ENTRY *v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  struct _LIST_ENTRY *v44; // [rsp+80h] [rbp-80h]
  LIST_ENTRY v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  _BYTE v47[144]; // [rsp+100h] [rbp+0h] BYREF
  int v48; // [rsp+1A0h] [rbp+A0h]
  struct _LIST_ENTRY *v49; // [rsp+1A8h] [rbp+A8h]
  __int64 v50; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v51; // [rsp+1B8h] [rbp+B8h] BYREF

  v2 = 0;
  v51 = 0LL;
  v50 = 0LL;
  memset_0(v47, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v47);
  PspLockJobShared(Event, CurrentThread, v47);
  Blink = Event[50].Header.WaitListHead.Blink;
  if ( Blink )
  {
    v7 = *(_OWORD *)&Blink[1].Blink;
    v37 = *(_OWORD *)&Blink->Blink;
    v8 = *(_OWORD *)&Blink[2].Blink;
    *(_OWORD *)v38.m256i_i8 = v7;
    v9 = *(_OWORD *)&Blink[3].Blink;
    *(_OWORD *)&v38.m256i_u64[2] = v8;
    v39 = v9;
  }
  else
  {
    memset_0(&v37, 0, 0x40uLL);
  }
  WaitListHead = Event[56].Header.WaitListHead;
  Flink = Event[25].Header.WaitListHead.Flink;
  v12 = Event[25].Header.WaitListHead.Blink;
  v40 = Event[6].Header.WaitListHead.Blink;
  v41 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[22].Header.WaitListHead.Blink);
  v45 = WaitListHead;
  v48 = Blink_high;
  v14 = (int)Event[10].Header.WaitListHead.Blink;
  v46 = *(_OWORD *)&Event[59].Header.Lock;
  if ( (v14 & 4) != 0 )
    v49 = Event[9].Header.WaitListHead.Blink;
  else
    v49 = 0LL;
  PspGetEffectiveNoWakeCharge((__int64)Event, &v51, &v50);
  PspUnlockJobShared(Event, CurrentThread, v47);
  if ( (_QWORD)v37 && (unsigned __int64)((unsigned __int64)Flink + v46) > (unsigned __int64)v37 )
    v2 = 0x10000;
  if ( *((_QWORD *)&v37 + 1) && (unsigned __int64)v12 + *((_QWORD *)&v46 + 1) > *((_QWORD *)&v37 + 1) )
    v2 |= 0x20000u;
  v15 = v38.m256i_i64[0];
  if ( v38.m256i_i64[0] && (unsigned __int64)v45.Blink + (unsigned __int64)v40 > v38.m256i_i64[0] )
    v2 |= 4u;
  v16 = v38.m256i_i64[2];
  if ( *(_OWORD *)&v38.m256i_u64[1] != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread);
    v2 |= PspGetJobMemoryUsageNotificationViolations(
            Event,
            Event[50].Header.WaitListHead.Flink,
            (char *)Event[50].Header.WaitListHead.Flink + (unsigned __int64)Event[65].Header.WaitListHead.Flink,
            33280LL);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
  }
  v17 = 0LL;
  v18 = &v38.m256i_i8[-a2 + 24];
  v19 = (char *)&v37 - a2;
  v20 = (_DWORD *)(a2 + 52);
  do
  {
    v21 = *(unsigned int *)&v18[(_QWORD)v20 - 52];
    if ( (_DWORD)v21 && *(v20 - 3) == *(_DWORD *)&v19[(_QWORD)v20] && *v20 >= (unsigned int)v21 )
      v2 |= PspRateControlLimitFlag(v17, v20, v21, v18);
    v17 = (unsigned int)(v17 + 1);
    ++v20;
  }
  while ( (int)v17 < 3 );
  if ( v2 )
  {
    PspLockJobExclusive(Event, CurrentThread);
    v22 = Event[50].Header.WaitListHead.Blink;
    if ( v22 )
    {
      HIDWORD(v22->Flink) |= v2;
      p_Blink = (char *)&Event[50].Header.WaitListHead.Blink[4].Blink;
      if ( (v2 & 0x10000) != 0 )
        *(_QWORD *)p_Blink = v37;
      if ( (v2 & 0x20000) != 0 )
        *((_QWORD *)p_Blink + 1) = *((_QWORD *)&v37 + 1);
      if ( (v2 & 4) != 0 )
        *((_QWORD *)p_Blink + 2) = v15;
      if ( (v2 & 0x200) != 0 )
        *((_QWORD *)p_Blink + 4) = v16;
      if ( (v2 & 0x8000) != 0 )
        *((_QWORD *)p_Blink + 3) = v38.m256i_i64[1];
      v24 = 0LL;
      v25 = (char *)((char *)&v38.m256i_u64[3] - p_Blink);
      v26 = (char *)((char *)&v37 - p_Blink);
      v27 = p_Blink + 52;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v24, v27, v25, v26) & v2) != 0 )
        {
          *(v28 - 3) = *(_DWORD *)&v25[(_QWORD)v28 - 52];
          *v28 = *(_DWORD *)((char *)v28 + (_QWORD)v26);
        }
        v24 = (unsigned int)(v29 + 1);
        v27 = v28 + 1;
      }
      while ( (int)v24 < 3 );
    }
    if ( *(_QWORD *)&Event[23].Header.Lock
      && (Event[46].Header.LockNV & 0x800) != 0
      && ((__int64)Event[64].Header.WaitListHead.Blink & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJobExclusive(Event, CurrentThread);
  }
  v30 = *(_QWORD *)(a2 + 24);
  if ( v30 )
  {
    if ( (*(_DWORD *)(v30 + 496) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v30 + 496), 0xFFFFFFDF);
      v31 = *(struct _KPROCESS **)(a2 + 24);
      v42 = *(_QWORD *)(a2 + 8);
      v43 = 2LL;
      v44 = v31[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v31);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 24));
  }
  if ( v49 && (struct _LIST_ENTRY *)((char *)v41 + (unsigned __int64)v45.Blink) > v49 )
  {
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        PspLockJobShared(Event, CurrentThread, v47);
        if ( *(_QWORD *)&Event[23].Header.Lock && (Event[46].Header.LockNV & 2) != 0 )
        {
          if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
          {
            LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
            Event[9].Header.WaitListHead.Blink = 0LL;
          }
          PspUnlockJobShared(Event, CurrentThread, v47);
        }
        else
        {
          PspUnlockJobShared(Event, CurrentThread, v47);
          PspTerminateAllProcessesInJobHierarchy(Event);
        }
      }
    }
    else if ( (unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
    {
      PspLockJobExclusive(Event, CurrentThread);
      if ( !Event[9].Header.LockNV && *(_QWORD *)&Event[23].Header.Lock && (Event[46].Header.LockNV & 2) != 0 )
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      PspUnlockJobExclusive(Event, CurrentThread);
    }
  }
  v32 = v50 + *(_QWORD *)(a2 + 32);
  v33 = *(_BYTE *)(a2 + 64) == 0;
  *(_QWORD *)(a2 + 32) = v32;
  if ( v33 )
  {
    if ( v32 < (unsigned int)PspSystemNoWakeChargeLimit )
    {
      if ( v51 >= (unsigned int)PspJobNoWakeChargeLimit )
        PspSendNoWakeChargeLimitNotification(Event);
    }
    else
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 64) = 1;
    }
  }
  p_WaitListHead = &Event[54].Header.WaitListHead;
  v35 = Event[54].Header.WaitListHead.Flink;
  if ( !v35 || Event == *(PRKEVENT *)(a2 + 16) )
  {
    PspLockJobExclusive(Event, CurrentThread);
    memset_0(&Event[56].Header.WaitListHead, 0, 0x68uLL);
  }
  else
  {
    PspLockJobExclusive(v35, CurrentThread);
    PspLockJobExclusive(Event, CurrentThread);
    PspAddAccountingValues(&p_WaitListHead->Flink[84].Blink, &Event[56].Header.WaitListHead);
    memset_0(&Event[56].Header.WaitListHead, 0, 0x68uLL);
    PspUnlockJobExclusive(Event, CurrentThread);
    Event = (PRKEVENT)p_WaitListHead->Flink;
  }
  PspUnlockJobExclusive(Event, CurrentThread);
  return 0LL;
}
