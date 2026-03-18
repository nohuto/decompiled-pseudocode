/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x140AEDAC4
 * Callers:
 *     sub_14088046C @ 0x14088046C (sub_14088046C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     sub_1409ED1D0 @ 0x1409ED1D0 (sub_1409ED1D0.c)
 *     sub_1409EEB04 @ 0x1409EEB04 (sub_1409EEB04.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  int v8; // r12d
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  unsigned int i; // esi
  __int64 v13; // r14

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v8 = 0;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v13 = *(_QWORD *)(*(_DWORD *)(a1 + 8) * i + *(_QWORD *)(a1 + 24));
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 64) == a2 )
      {
        v8 = sub_1409EEB04(a1 + 8, 0, 0, i, 0LL);
        if ( v8 >= 0 )
        {
          sub_1409ED1D0(a1, v13);
          --i;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveGuardedRegion();
  return (unsigned int)v8;
}
