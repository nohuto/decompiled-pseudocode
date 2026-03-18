/*
 * XREFs of sub_140906F68 @ 0x140906F68
 * Callers:
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     sub_140906A80 @ 0x140906A80 (sub_140906A80.c)
 *     sub_140906F0C @ 0x140906F0C (sub_140906F0C.c)
 *     sub_14090863C @ 0x14090863C (sub_14090863C.c)
 *     sub_1409092A8 @ 0x1409092A8 (sub_1409092A8.c)
 */

__int64 __fastcall sub_140906F68(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rdi
  int v10; // eax
  __int64 v11; // r8
  int v12; // edi
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 48);
  v14 = 0;
  v15 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = sub_14090863C(a1, *(_QWORD *)(a2 + 48), &v15, &v14);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v15;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_140906F0C((unsigned int *)(a1 + 8), a2, v11, *(_QWORD *)(a2 + 48), 8, v14);
    if ( v12 >= 0 )
    {
      v12 = sub_1409092A8(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = sub_140906A80(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  return (unsigned int)v12;
}
