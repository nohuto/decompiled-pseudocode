/*
 * XREFs of ExpSaPageGroupAllocateMemory @ 0x14049319C
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140492F8C (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSetEx @ 0x1404932B0 (RtlFindClearBitsAndSetEx.c)
 */

__int64 __fastcall ExpSaPageGroupAllocateMemory(_DWORD *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rbp
  unsigned __int64 *v6; // rsi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx
  __int64 ClearBitsAndSet; // rax
  __int64 v11; // rdi

  v5 = a2;
  if ( a1[9] < a2 )
    return -1LL;
  v6 = (unsigned __int64 *)(a1 + 6);
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 6), 0LL, 0LL, a4);
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
  if ( a1[9] < (unsigned int)v5
    || (ClearBitsAndSet = RtlFindClearBitsAndSetEx(a1 + 12, v5, (unsigned int)a1[11]), ClearBitsAndSet == -1) )
  {
    v11 = -1LL;
  }
  else
  {
    a1[9] -= v5;
    a1[11] = ClearBitsAndSet + v5;
    v11 = 16 * (ClearBitsAndSet & 0x1FF | ((a1[8] & 0x3FFFFu) << 9));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((unsigned __int64)v6);
  return v11;
}
