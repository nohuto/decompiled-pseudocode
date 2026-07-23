/*
 * XREFs of sub_1409EB58C @ 0x1409EB58C
 * Callers:
 *     sub_1409E9A1C @ 0x1409E9A1C (sub_1409E9A1C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall sub_1409EB58C(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  _BYTE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE *i; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 1072);
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 1072, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    v13 = (_BYTE *)(v12 + a1 + 44);
    do
    {
      if ( *v13 != 2 )
        break;
      --v13;
      --v12;
    }
    while ( v12 >= 0 );
    v14 = v12 + 1;
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (unsigned int)v11;
  for ( i = (_BYTE *)((unsigned int)v11 + a1 + 44); *i == 2; ++i )
    ++v15;
  if ( v14 <= v15 )
    memset_0((void *)(a1 + v14 + 44), 0, v15 - v14 + 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveGuardedRegion();
  return 0LL;
}
