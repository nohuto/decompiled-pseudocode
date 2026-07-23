/*
 * XREFs of PspStorageInsertObject @ 0x140A4C044
 * Callers:
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PsInsertSiloContext @ 0x140A4BF80 (PsInsertSiloContext.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140A4C160 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageInsertObject(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v15 = 0;
  v16[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v15, v16);
  v8 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (unsigned __int64 *)(v16[0] + 16LL * v15);
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v7);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    if ( v10[1] )
    {
      v8 = -1073741637;
    }
    else
    {
      PsReferenceSiloContext((void *)a4);
      v14 = a4 | 1;
      if ( !a3 )
        v14 = a4;
      v10[1] = v14;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegion();
    return v8;
  }
  return result;
}
