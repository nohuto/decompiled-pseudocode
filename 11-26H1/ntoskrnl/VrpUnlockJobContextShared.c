/*
 * XREFs of VrpUnlockJobContextShared @ 0x14097690C
 * Callers:
 *     VrpTranslatePath @ 0x140976010 (VrpTranslatePath.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall VrpUnlockJobContextShared(__int64 a1)
{
  signed __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = (signed __int64 *)(a1 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((unsigned __int64)v1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3);
}
