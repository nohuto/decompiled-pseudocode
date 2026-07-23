/*
 * XREFs of ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFC7AC
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x14084D268 (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfWriteStateData @ 0x1409C7434 (ExpWnfWriteStateData.c)
 *     ExpWnfPopulateStateData @ 0x1409CB9C8 (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140AFC924 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfAcquirePermanentDataStoreHandle(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v4 = (signed __int64 *)(a1 + 8);
  while ( 1 )
  {
    v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, 0, v8, (struct _KTHREAD *)v4);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      *a2 = v9;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((unsigned __int64)v4);
    if ( *(_DWORD *)(a1 + 40) != 2 )
      break;
    Handle = 0LL;
    result = ExpWnfGetPermanentPerUserDataStoreHandle((PSID)(a1 + 48), &Handle);
    if ( (int)result < 0 )
      return result;
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, v11);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v12, (__int64)v4);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    if ( !*(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 16) = Handle;
      _InterlockedCompareExchange64(v4, 17LL, 1LL);
      *a2 = *(_QWORD *)(a1 + 16);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((unsigned __int64)v4);
    ZwClose(Handle);
  }
  return 3221225524LL;
}
