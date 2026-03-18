/*
 * XREFs of PopFxLowPowerEpochCallback @ 0x1404FF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall PopFxLowPowerEpochCallback(void *Buf2, _BYTE *a2, int a3)
{
  unsigned int v5; // ebx
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v8; // rbx
  ULONG_PTR *i; // rbx
  ULONG_PTR v10; // r8
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = -1073741811;
  if ( !memcmp(&GUID_LOW_POWER_EPOCH, Buf2, 0x10uLL) && a3 == 4 && a2 )
  {
    BYTE1(stru_140E66FF0.Padding[1]) = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, v6);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F12420.StateSaveArea,
        0,
        v8,
        (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v8 + 33) |= 2u;
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    for ( i = (ULONG_PTR *)qword_140F123F0; i != &qword_140F123F0; i = (ULONG_PTR *)*i )
    {
      v10 = i[12];
      v12[0] = 0;
      if ( v10 )
      {
        v12[0] = BYTE1(stru_140E66FF0.Padding[1]);
        guard_dispatch_icall_no_overrides(24LL, v12);
      }
    }
    byte_140F0B0A0 = BYTE1(stru_140E66FF0.Padding[1]);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
    KeLeaveCriticalRegion();
    return 0;
  }
  return v5;
}
