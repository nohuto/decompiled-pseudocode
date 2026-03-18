/*
 * XREFs of sub_140906960 @ 0x140906960
 * Callers:
 *     sub_140907850 @ 0x140907850 (sub_140907850.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall sub_140906960(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rbp
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE *i; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 1072);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 1072, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  v8 = (unsigned __int64)(a2 - *(_QWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = (_BYTE *)(v9 + a1 + 44);
    do
    {
      if ( *v10 != 2 )
        break;
      --v10;
      --v9;
    }
    while ( v9 >= 0 );
    v11 = v9 + 1;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (unsigned int)v8;
  for ( i = (_BYTE *)((unsigned int)v8 + a1 + 44); *i == 2; ++i )
    ++v12;
  if ( v11 <= v12 )
    memset_0((void *)(a1 + v11 + 44), 0, v12 - v11 + 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return 0LL;
}
