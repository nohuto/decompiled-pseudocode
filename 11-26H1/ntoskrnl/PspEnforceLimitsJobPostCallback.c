/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1407F7D20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     PspSendJobNotification @ 0x1404D0290 (PspSendJobNotification.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1407792A4 (PspGetEffectiveNoWakeCharge.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14077C4E4 (PspSendNoWakeChargeLimitNotification.c)
 *     PspAddAccountingValues @ 0x140952920 (PspAddAccountingValues.c)
 *     PspSendReliableJobNotification @ 0x140958424 (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140A7F6D8 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobShared @ 0x140A81FE8 (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A90020 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A90090 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobShared @ 0x140AAD180 (PspUnlockJobShared.c)
 *     PspRateControlLimitFlag @ 0x140ACA140 (PspRateControlLimitFlag.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(char *Object, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // eax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rcx
  __int8 *v18; // r9
  char *v19; // r10
  _DWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  char *v23; // rax
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
  char **v34; // rdi
  __int64 v35; // rcx
  __int128 v37; // [rsp+20h] [rbp-E0h] BYREF
  __m256i v38; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-80h]
  __int128 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  _BYTE v47[144]; // [rsp+100h] [rbp+0h] BYREF
  int v48; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v49; // [rsp+1A8h] [rbp+A8h]
  __int64 v50; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int64 v51; // [rsp+1B8h] [rbp+B8h] BYREF

  v2 = 0;
  v51 = 0LL;
  v50 = 0LL;
  memset_0(v47, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v47);
  PspLockJobShared(Object, CurrentThread, v47);
  v6 = *((_QWORD *)Object + 152);
  if ( v6 )
  {
    v7 = *(_OWORD *)(v6 + 24);
    v37 = *(_OWORD *)(v6 + 8);
    v8 = *(_OWORD *)(v6 + 40);
    *(_OWORD *)v38.m256i_i8 = v7;
    v9 = *(_OWORD *)(v6 + 56);
    *(_OWORD *)&v38.m256i_u64[2] = v8;
    v39 = v9;
  }
  else
  {
    memset_0(&v37, 0, 0x40uLL);
  }
  v10 = *(_OWORD *)(Object + 1352);
  v11 = *((_QWORD *)Object + 76);
  v12 = *((_QWORD *)Object + 77);
  v40 = *((_QWORD *)Object + 20);
  v41 = *((_QWORD *)Object + 23);
  v13 = *((_DWORD *)Object + 137);
  v45 = v10;
  v48 = v13;
  v14 = *((_DWORD *)Object + 64);
  v46 = *(_OWORD *)(Object + 1416);
  if ( (v14 & 4) != 0 )
    v49 = *((_QWORD *)Object + 29);
  else
    v49 = 0LL;
  PspGetEffectiveNoWakeCharge((__int64)Object, &v51, &v50);
  PspUnlockJobShared(Object, CurrentThread, v47);
  if ( (_QWORD)v37 && v11 + (__int64)v46 > (unsigned __int64)v37 )
    v2 = 0x10000;
  if ( *((_QWORD *)&v37 + 1) && (unsigned __int64)(v12 + *((_QWORD *)&v46 + 1)) > *((_QWORD *)&v37 + 1) )
    v2 |= 0x20000u;
  v15 = v38.m256i_i64[0];
  if ( v38.m256i_i64[0] && (unsigned __int64)(*((_QWORD *)&v45 + 1) + v40) > v38.m256i_i64[0] )
    v2 |= 4u;
  v16 = v38.m256i_i64[2];
  if ( *(_OWORD *)&v38.m256i_u64[1] != 0LL )
  {
    PspLockJobMemoryLimitsShared(Object, CurrentThread);
    v2 |= PspGetJobMemoryUsageNotificationViolations(
            Object,
            *((_QWORD *)Object + 151),
            *((_QWORD *)Object + 151) + *((_QWORD *)Object + 196),
            33280LL);
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
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
    PspLockJobExclusive(Object, CurrentThread);
    v22 = *((_QWORD *)Object + 152);
    if ( v22 )
    {
      *(_DWORD *)(v22 + 4) |= v2;
      v23 = (char *)(*((_QWORD *)Object + 152) + 72LL);
      if ( (v2 & 0x10000) != 0 )
        *(_QWORD *)v23 = v37;
      if ( (v2 & 0x20000) != 0 )
        *((_QWORD *)v23 + 1) = *((_QWORD *)&v37 + 1);
      if ( (v2 & 4) != 0 )
        *((_QWORD *)v23 + 2) = v15;
      if ( (v2 & 0x200) != 0 )
        *((_QWORD *)v23 + 4) = v16;
      if ( (v2 & 0x8000) != 0 )
        *((_QWORD *)v23 + 3) = v38.m256i_i64[1];
      v24 = 0LL;
      v25 = (char *)((char *)&v38.m256i_u64[3] - v23);
      v26 = (char *)((char *)&v37 - v23);
      v27 = v23 + 52;
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
    if ( *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 0x800) != 0 && (*((_DWORD *)Object + 388) & 4) == 0 )
      PspSendReliableJobNotification(Object);
    PspUnlockJobExclusive(Object, CurrentThread);
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
      Flink = v31[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v31);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 24));
  }
  if ( v49 && v41 + *((_QWORD *)&v45 + 1) > v49 )
  {
    if ( v48 )
    {
      if ( v48 == 1 )
      {
        PspLockJobShared(Object, CurrentThread, v47);
        if ( *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 2) != 0 )
        {
          if ( (int)PspSendJobNotification((__int64)Object, 1LL, 0, 0) >= 0 )
          {
            *((_DWORD *)Object + 64) &= ~4u;
            *((_QWORD *)Object + 29) = 0LL;
          }
          PspUnlockJobShared(Object, CurrentThread, v47);
        }
        else
        {
          PspUnlockJobShared(Object, CurrentThread, v47);
          PspTerminateAllProcessesInJobHierarchy(Object);
        }
      }
    }
    else if ( (unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Object) )
    {
      PspLockJobExclusive(Object, CurrentThread);
      if ( !*((_DWORD *)Object + 54) && *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 2) != 0 )
        PspSendJobNotification((__int64)Object, 1LL, 0, 0);
      PspUnlockJobExclusive(Object, CurrentThread);
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
        PspSendNoWakeChargeLimitNotification(Object);
    }
    else
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 64) = 1;
    }
  }
  v34 = (char **)(Object + 1304);
  v35 = *((_QWORD *)Object + 163);
  if ( !v35 || Object == *(char **)(a2 + 16) )
  {
    PspLockJobExclusive(Object, CurrentThread);
    memset_0(Object + 1352, 0, 0x68uLL);
  }
  else
  {
    PspLockJobExclusive(v35, CurrentThread);
    PspLockJobExclusive(Object, CurrentThread);
    PspAddAccountingValues(*v34 + 1352, Object + 1352);
    memset_0(Object + 1352, 0, 0x68uLL);
    PspUnlockJobExclusive(Object, CurrentThread);
    Object = *v34;
  }
  PspUnlockJobExclusive(Object, CurrentThread);
  return 0LL;
}
