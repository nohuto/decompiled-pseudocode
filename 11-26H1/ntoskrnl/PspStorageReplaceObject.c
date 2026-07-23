/*
 * XREFs of PspStorageReplaceObject @ 0x140805770
 * Callers:
 *     PsReplaceSiloContext @ 0x1407F4300 (PsReplaceSiloContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x140A4C160 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, __int64 a2, void *a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v9; // rdi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rsi
  unsigned __int64 v14; // rsi
  void *v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17[4]; // [rsp+28h] [rbp-20h] BYREF

  v16 = 0;
  v17[0] = 0LL;
  result = PspGetStorageArray(a1, a2, &v16, v17);
  v7 = result;
  if ( (int)result >= 0 )
  {
    PsReferenceSiloContext(a3);
    CurrentThread = KeGetCurrentThread();
    v9 = (unsigned __int64 *)(v17[0] + 16LL * v16);
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v9, 0LL, 0LL, v10);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v11, (__int64)v9);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = v9[1];
    if ( (v14 & 1) != 0 )
    {
      v14 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      v9[1] = (unsigned __int64)a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((unsigned __int64)v9);
    KeLeaveCriticalRegion();
    if ( (v7 & 0x80000000) != 0 )
    {
      v15 = a3;
    }
    else
    {
      if ( !v14 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v14;
        return v7;
      }
      v15 = (void *)v14;
    }
    ObfDereferenceObject(v15);
    return v7;
  }
  return result;
}
