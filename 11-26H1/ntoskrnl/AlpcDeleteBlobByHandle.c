/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x140A73588
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140A734A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140A73510 (AlpcReserveDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140AACFB0 (AlpcSectionDestroyProcedure.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(_QWORD *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  unsigned __int64 *v7; // rbx
  unsigned int v8; // ebp
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi

  v4 = 0;
  if ( !a1 )
    return 0;
  v7 = a1 + 1;
  v8 = a2 - 16;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 1), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v9, (__int64)v7);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (unsigned __int64)v8 < a1[2] && *(_QWORD *)(*a1 + 8LL * v8) == a3 )
  {
    *(_QWORD *)(*a1 + 8LL * v8) = 0LL;
    v4 = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  return v4;
}
