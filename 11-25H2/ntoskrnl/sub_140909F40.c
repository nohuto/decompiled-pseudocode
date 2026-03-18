/*
 * XREFs of sub_140909F40 @ 0x140909F40
 * Callers:
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall sub_140909F40(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rbp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( (a2[2] & 1) != 0 )
  {
    v8 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v9 = (__int64 **)a2[1], *v9 != a2)
      || (*v9 = v8, v8[1] = (__int64)v9, v10 = *(__int64 ***)(a1 + 72), *v10 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *a2 = a1 + 64;
    a2[1] = (__int64)v10;
    *v10 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
}
