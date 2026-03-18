/*
 * XREFs of sub_1409E0F38 @ 0x1409E0F38
 * Callers:
 *     sub_1409E10A8 @ 0x1409E10A8 (sub_1409E10A8.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 *     sub_1409E0B70 @ 0x1409E0B70 (sub_1409E0B70.c)
 *     sub_1409E1224 @ 0x1409E1224 (sub_1409E1224.c)
 *     sub_1409E1478 @ 0x1409E1478 (sub_1409E1478.c)
 *     sub_1409E1494 @ 0x1409E1494 (sub_1409E1494.c)
 */

__int64 __fastcall sub_1409E0F38(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rbx
  __int64 *v8; // rdi
  int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rsi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 176);
  v19 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v17 = 0LL;
  v8 = KeAbPreAcquire(a1 + 176, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (unsigned __int64)v4);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v16 = 0LL;
  v9 = sub_140909110(a1 + 136, a2, 0x10u, &v16, &v18);
  if ( v9 >= 0 )
  {
    v10 = sub_1409E1478(v16);
    v11 = v19;
    v9 = v10;
    if ( v10 >= 0 )
      v11 = v16;
    v19 = v11;
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    v13 = sub_1409E1494(a2, &v19);
    v12 = v19;
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_16;
    v9 = sub_1409E0B70(a1, v19, (__int64)&v17);
    if ( v9 < 0 )
      goto LABEL_16;
    v15 = v17;
    if ( v17 )
    {
      sub_1409E1224(v12);
      v12 = v15;
    }
  }
  else
  {
    v12 = v19;
    if ( v9 < 0 )
      goto LABEL_16;
  }
  if ( a3 )
  {
    *a3 = v12;
    v12 = 0LL;
  }
LABEL_16:
  sub_1409E1224(v12);
  sub_1409E1224(v17);
  return (unsigned int)v9;
}
