/*
 * XREFs of KsepIsModuleShimmed @ 0x140A25854
 * Callers:
 *     KseDriverUnloadImage @ 0x140A2501C (KseDriverUnloadImage.c)
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A25750 (KsepGetShimCallbacksForDriver.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  signed __int8 v11; // cf
  AutoBoost *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v15; // rdx

  v4 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E66B30, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64(&stru_140E66B30.Header.Lock, 0LL);
  v12 = v9;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E66B30, v9, (__int64)&stru_140E66B30);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v10);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  v13 = *(_QWORD **)(a1 + 32);
  if ( v13 != (_QWORD *)(a1 + 32) )
  {
    while ( v13 != (_QWORD *)(a1 + 32) )
    {
      v15 = v13;
      v13 = (_QWORD *)*v13;
      if ( v15[2] == a2 )
      {
        *a3 = v15;
        v4 = 1;
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E66B30, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E66B30.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E66B30);
  KeLeaveCriticalRegion();
  return v4;
}
