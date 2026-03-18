/*
 * XREFs of sub_140907850 @ 0x140907850
 * Callers:
 *     sub_140907700 @ 0x140907700 (sub_140907700.c)
 *     sub_1409077D4 @ 0x1409077D4 (sub_1409077D4.c)
 *     sub_140907938 @ 0x140907938 (sub_140907938.c)
 *     sub_140907BA0 @ 0x140907BA0 (sub_140907BA0.c)
 *     sub_14090835C @ 0x14090835C (sub_14090835C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     sub_140906960 @ 0x140906960 (sub_140906960.c)
 *     sub_140909110 @ 0x140909110 (sub_140909110.c)
 */

__int64 __fastcall sub_140907850(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  int v5; // esi
  __int64 *v6; // rdi
  int v7; // eax
  __int64 v8; // rsi
  int v9; // edi
  char v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 224);
  v5 = a1;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v6, (unsigned __int64)v3);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v12 = 0LL;
  v7 = sub_140909110(v5 + 184, a2, 8, (unsigned int)&v12, (__int64)&v11);
  v8 = 0LL;
  v9 = v7;
  if ( v7 >= 0 )
    v8 = v12;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  if ( v9 >= 0 )
    return (unsigned int)sub_140906960(v8, a2);
  return (unsigned int)v9;
}
