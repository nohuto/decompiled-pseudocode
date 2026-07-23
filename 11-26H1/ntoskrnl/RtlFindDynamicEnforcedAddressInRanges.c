/*
 * XREFs of RtlFindDynamicEnforcedAddressInRanges @ 0x140A35C54
 * Callers:
 *     KiCheckUserAddressCetCompat @ 0x140A35BC8 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x14080F2D0 (RtlpDynamicEnforcedAddressRangesTreeCompare.c)
 */

bool __fastcall RtlFindDynamicEnforcedAddressInRanges(_QWORD **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  void *v7; // rdx
  LegacyAutoBoost *v8; // rbx
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]

  v14 = a2;
  v4 = (signed __int64 *)(a1 + 1);
  v15 = 1LL;
  v13 = 0LL;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 1), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (struct _KTHREAD *)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *a1;
  while ( v9 )
  {
    v10 = RtlpDynamicEnforcedAddressRangesTreeCompare((__int64)&v12, (__int64)v9);
    if ( v10 < 0 )
    {
      v9 = (_QWORD *)*v9;
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  KeLeaveCriticalRegion();
  return v9 != 0LL;
}
