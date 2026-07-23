/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x1409C7984
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
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, const void *a2, __int64 a3, __int64 a4, int a5)
{
  struct _EX_RUNDOWN_REF *v7; // r15
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  signed __int64 *v11; // r14
  void *v12; // rdx
  LegacyAutoBoost *v13; // rbx
  struct _KLOCK_ENTRIES *v14; // r9
  volatile signed __int64 *v15; // rbp
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *i; // rsi
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v26[0] = 0LL;
  v7 = 0LL;
  RtlCopyVolatileMemory(v26, a2, 8uLL);
  v9 = v26[0] ^ 0x41C64E6DA3BC0074LL;
  if ( ((LOBYTE(v26[0]) ^ 0x74) & 0xF) != 1 )
    return 3221225485LL;
  v10 = (v9 >> 6) & 0xF;
  if ( ((v9 >> 4) & 3) >= 2 && ((v9 >> 4) & 3) - 2 > 1 )
    return 3221225485LL;
  if ( (unsigned int)v10 >= 4 && (unsigned int)(v10 - 4) > 1
    || ((v9 >> 10) & 1) != 0 && (((v9 >> 6) & 9) != 0 || (_DWORD)v10 == 6) )
  {
    return 3221225485LL;
  }
  v11 = a1 + 10;
  v13 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 10), 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, 0, v13, (struct _KTHREAD *)(a1 + 10));
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v15 = a1 + 13;
  v16 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 13), 0LL, 0LL, v14);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v16, (__int64)(a1 + 13));
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = a1 + 14;
  for ( i = (_QWORD *)a1[14]; i != v19; i = (_QWORD *)*i )
  {
    if ( *(i - 11) == a3 && v9 == *(i - 6) )
    {
      if ( *((_DWORD *)i + 4) == 2 || *((_DWORD *)i + 4) == 3 )
      {
        v21 = *((_DWORD *)i + 5);
        if ( v21 )
        {
          *((_DWORD *)i + 4) = 1;
          if ( a5 == -1073741267 && (v21 & 1) == 0 )
            *((_DWORD *)i + 5) = v21 | 1;
        }
        else if ( a5 )
        {
          *((_DWORD *)i + 4) = 3;
        }
        else
        {
          *((_DWORD *)i + 4) = 0;
          v22 = *i;
          if ( *(_QWORD **)(*i + 8LL) != i || (v23 = (_QWORD *)i[1], (_QWORD *)*v23 != i) )
            __fastfail(3u);
          *v23 = v22;
          *(_QWORD *)(v22 + 8) = v23;
        }
        if ( *((_DWORD *)i + 4) != 3 )
        {
          if ( (*((_BYTE *)i + 20) & 1) == 0 && (i[3] & 1) != 0 )
          {
            v24 = *(i - 7);
            if ( v24 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 164), 0xFFFFFFFF) == 1
                && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(i - 7) + 8LL)) )
              {
                v7 = (struct _EX_RUNDOWN_REF *)*(i - 7);
              }
            }
          }
          *((_DWORD *)i + 6) = 0;
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((unsigned __int64)v15);
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  if ( v7 )
  {
    ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL, 1LL);
    ExReleaseRundownProtection_0(v7 + 1);
  }
  return 0LL;
}
