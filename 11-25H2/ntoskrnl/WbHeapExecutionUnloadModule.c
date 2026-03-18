/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x140A3DEC0
 * Callers:
 *     sub_140A3DDB4 @ 0x140A3DDB4 (sub_140A3DDB4.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     sub_140A3E0E8 @ 0x140A3E0E8 (sub_140A3E0E8.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  int v6; // r12d
  __int64 *v7; // rax
  __int64 *v8; // rsi
  unsigned int i; // esi
  __int64 v10; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(*(_DWORD *)(a1 + 8) * i + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v6 = sub_140A3E0E8((int)a1 + 8, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_1409077D4(a1, v10);
          --i;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return (unsigned int)v6;
}
