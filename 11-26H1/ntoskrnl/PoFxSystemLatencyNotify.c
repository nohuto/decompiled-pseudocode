/*
 * XREFs of PoFxSystemLatencyNotify @ 0x1403940E4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall PoFxSystemLatencyNotify(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v6; // di
  LegacyAutoBoost *v7; // rbx
  __int64 v8; // r8
  ULONG_PTR i; // rbx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&stru_140F12420.StateSaveArea,
      0,
      v7,
      (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = qword_140F123F0; (ULONG_PTR *)i != &qword_140F123F0; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 96) )
    {
      v11 = a1;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(16LL, &v11, v8) )
      {
        if ( !v6 )
          v6 = *(_DWORD *)(i + 24) >= 0;
      }
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
  KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
  KeLeaveCriticalRegion();
  return v6;
}
