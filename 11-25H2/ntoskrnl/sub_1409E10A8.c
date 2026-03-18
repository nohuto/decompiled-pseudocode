/*
 * XREFs of sub_1409E10A8 @ 0x1409E10A8
 * Callers:
 *     sub_1409E0D78 @ 0x1409E0D78 (sub_1409E0D78.c)
 *     sub_1409E0E58 @ 0x1409E0E58 (sub_1409E0E58.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 *     sub_1409E1224 @ 0x1409E1224 (sub_1409E1224.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1409E1258 (WbValidateEncryptionSegmentArguments.c)
 *     sub_1409E28D4 @ 0x1409E28D4 (sub_1409E28D4.c)
 */

__int64 __fastcall sub_1409E10A8(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // r15
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v8 = WbValidateEncryptionSegmentArguments(a2, a3, &v16, &v18);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = sub_1409E0F38(a1, (__int64)&v18, &v15);
  if ( v8 < 0 )
    goto LABEL_17;
  v7 = v15;
  if ( !*(_DWORD *)(v15 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = (unsigned __int64 *)(v15 + 8);
    v12 = v15 + 8;
    --CurrentThread->SpecialApcDisable;
    v13 = KeAbPreAcquire(v12, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v17 = v16;
      v8 = sub_1409E28D4(&v17, a2, v15);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveGuardedRegion();
    if ( v8 >= 0 )
    {
      v7 = v15;
      goto LABEL_4;
    }
LABEL_17:
    v7 = v15;
    goto LABEL_7;
  }
LABEL_4:
  v8 = *(_DWORD *)(v7 + 20);
  if ( v8 >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_1409E1224(v7);
  SddlpFree(*((void **)&v16 + 1));
  return (unsigned int)v8;
}
