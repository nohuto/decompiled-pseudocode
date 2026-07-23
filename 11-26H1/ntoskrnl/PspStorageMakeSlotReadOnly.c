/*
 * XREFs of PspStorageMakeSlotReadOnly @ 0x140A4BE8C
 * Callers:
 *     PsMakeSiloContextPermanent @ 0x140A4B440 (PsMakeSiloContextPermanent.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140A4C160 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageMakeSlotReadOnly(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  unsigned int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbp
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 0LL;
  result = PspGetStorageArray(a1, a2, &v10, &v11);
  v4 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (unsigned __int64 *)(v11 + 16LL * v10);
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)v6, 0LL, 0LL, v3);
    v9 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v9, v8);
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    if ( (v6[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      v6[1] = v6[1] & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      v4 = -1073741811;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    KeLeaveCriticalRegion();
    return v4;
  }
  return result;
}
