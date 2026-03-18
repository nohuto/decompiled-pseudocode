/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x140A7E80C
 * Callers:
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = (unsigned __int64 *)(a1 + 456);
  --*(_WORD *)(a2 + 484);
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( *(_DWORD *)(a1 + 904) != a3 )
  {
    *(_DWORD *)(a1 + 904) = a3;
    if ( *(_QWORD *)(a1 + 784) || (a3 & 4) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 136), 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  return KeLeaveCriticalRegionThread(a2, v11, v12);
}
