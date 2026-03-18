/*
 * XREFs of sub_1408E0EF8 @ 0x1408E0EF8
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     sub_140908780 @ 0x140908780 (sub_140908780.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     sub_1409089F0 @ 0x1409089F0 (sub_1409089F0.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 *     sub_140909DB8 @ 0x140909DB8 (sub_140909DB8.c)
 */

__int64 __fastcall sub_1408E0EF8(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdi
  int v4; // edi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rdi
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140E3E728, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E728, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E3E728, 0, v3, (unsigned __int64)&qword_140E3E728);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = sub_1409089F0(a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E3E728, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E3E728);
  KeAbPostRelease((ULONG_PTR)&qword_140E3E728);
  KeLeaveGuardedRegion();
  if ( v4 >= 0 )
  {
    v5 = KeGetCurrentThread();
    --v5->SpecialApcDisable;
    v6 = KeAbPreAcquire((__int64)&qword_140E3E728, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E3E728, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E3E728, v6, (__int64)&qword_140E3E728);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v10 = -1;
    v4 = sub_140909110((unsigned int)&qword_140E3E700, a1, 8, (unsigned int)&v11, (__int64)&v10);
    if ( v4 >= 0 )
    {
      memmove(
        (void *)(qword_140E3E710 + (unsigned int)(v10 * qword_140E3E700)),
        (const void *)(qword_140E3E710 + (unsigned int)(qword_140E3E700 * (v10 + 1))),
        (unsigned int)(qword_140E3E700 * (HIDWORD(qword_140E3E700) - v10 - 1)));
      --HIDWORD(qword_140E3E700);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E3E728, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E3E728);
    KeAbPostRelease((ULONG_PTR)&qword_140E3E728);
    KeLeaveGuardedRegion();
    sub_140909DB8(v11);
  }
  return (unsigned int)v4;
}
