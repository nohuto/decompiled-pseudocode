/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1409C5DB8
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1409C5C50 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlSetUserMemory @ 0x140782108 (RtlSetUserMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(_QWORD *a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // r12
  unsigned int v5; // r13d
  signed __int64 *v6; // r15
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  struct _KLOCK_ENTRIES *v9; // r9
  volatile signed __int64 *v10; // r14
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rsi
  __int64 *v14; // rax
  __int64 *v15; // r12
  __int64 v16; // rsi
  int *v17; // rdx
  int v18; // r13d
  void *v19; // rdx
  unsigned int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  int ULongFromUser; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+34h] [rbp-94h]
  __int64 *v26; // [rsp+40h] [rbp-88h]
  struct _KLOCK_ENTRIES *v27; // [rsp+48h] [rbp-80h]
  _DWORD *v28; // [rsp+60h] [rbp-68h]
  _DWORD *v29; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+E0h] [rbp+18h]
  int StateData; // [rsp+E8h] [rbp+20h]

  v4 = a1;
  v5 = -2147483622;
  v32 = -2147483622;
  StateData = 0;
  v25 = a3 - 48;
  v27 = (struct _KLOCK_ENTRIES *)(a2 + 48);
LABEL_2:
  v6 = v4 + 10;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v4 + 10), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4 + 10, 0, v8, (struct _KTHREAD *)(v4 + 10));
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = v4 + 13;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)(v4 + 13), 0LL, 0LL, v9);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4 + 13, v11, (__int64)(v4 + 13));
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = v4 + 14;
  v26 = v4 + 14;
  v15 = (__int64 *)v4[14];
  while ( 1 )
  {
    v29 = v15;
    if ( v15 == v14 )
      break;
    v28 = v15 + 2;
    if ( *((_DWORD *)v15 + 4) != 1 )
      goto LABEL_43;
    v16 = *(v15 - 7);
    if ( v16 )
      v16 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v16 + 8)) != 0);
    v17 = (int *)v15 + 5;
    v18 = *((_DWORD *)v15 + 5) & *((_DWORD *)v15 - 1) & 0xFFFFFFFE;
    if ( v16 )
      v18 = *((_DWORD *)v15 + 5) & *((_DWORD *)v15 - 1);
    if ( !v18 )
      goto LABEL_39;
    ULongFromUser = 0;
    RtlSetUserMemory((void *)a2, 0, 0x30uLL);
    RtlWriteULong64ToUser((_QWORD *)(a2 + 8), *(v15 - 6) ^ 0x41C64E6DA3BC0074LL);
    RtlWriteULong64ToUser((_QWORD *)a2, *(v15 - 11));
    if ( (v18 & 1) != 0 )
    {
      v19 = *(void **)(v16 + 64);
      if ( v19 )
        RtlCopyToUser((void *)(a2 + 28), v19, 0x10uLL);
      StateData = ExpWnfReadStateData(v16, 1, (int *)(a2 + 16), v27, v25, (int *)(a2 + 20));
      if ( StateData < 0 )
        goto LABEL_26;
      ULongFromUser = RtlReadULongFromUser((unsigned int *)(a2 + 16));
    }
    RtlWriteULongToUser((_DWORD *)(a2 + 44), (_DWORD)v27 - a2);
    RtlWriteULongToUser((_DWORD *)(a2 + 24), v18);
LABEL_26:
    if ( v16 )
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v16 + 8));
      v16 = 0LL;
    }
    if ( StateData < 0 )
    {
      v5 = v32;
      if ( v32 == -2147483622 )
      {
        v5 = StateData;
        v32 = StateData;
      }
      goto LABEL_43;
    }
    v20 = v18 & 0xFFFFFFFE;
    if ( ULongFromUser )
      v20 = v18;
    if ( v20 )
    {
      *((_DWORD *)v15 + 6) = v20;
      *((_DWORD *)v15 + 5) = 0;
      *v28 = 2;
      v5 = 0;
      break;
    }
    v17 = (int *)v15 + 5;
LABEL_39:
    v15 = (__int64 *)v15[1];
    v22 = *(_QWORD *)v29;
    if ( *(_DWORD **)(*(_QWORD *)v29 + 8LL) != v29 || (_DWORD *)*v15 != v29 )
      __fastfail(3u);
    *v15 = v22;
    *(_QWORD *)(v22 + 8) = v15;
    *v28 = 0;
    v23 = *v17;
    *v17 = 0;
    v29[6] = 0;
    if ( v16 )
    {
      if ( (v23 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 164), 0xFFFFFFFF) == 1 )
      {
        if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v10);
        KeAbPostRelease((unsigned __int64)v10);
        if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v6);
        KeAbPostRelease((unsigned __int64)v6);
        ExpWnfNotifyNameSubscribers(v16, 8LL, 1LL, 1LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v16 + 8));
        v5 = v32;
        v4 = a1;
        goto LABEL_2;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v16 + 8));
    }
    v5 = v32;
LABEL_43:
    v15 = (__int64 *)*v15;
    v14 = v26;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((unsigned __int64)v10);
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((unsigned __int64)v6);
  return v5;
}
