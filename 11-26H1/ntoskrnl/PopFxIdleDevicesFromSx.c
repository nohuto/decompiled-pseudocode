/*
 * XREFs of PopFxIdleDevicesFromSx @ 0x1404B2050
 * Callers:
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 */

void __fastcall PopFxIdleDevicesFromSx(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v5; // rbx
  ULONG_PTR i; // rbx
  __int64 v7; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v5, &qword_140F123D0);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 48);
    if ( v7 && (*(_DWORD *)(i + 864) & 1) == 0 && !*(_BYTE *)(v7 + 216) )
    {
      PoFxIdleDevice(*(_QWORD *)(v7 + 32));
      _InterlockedAnd((volatile signed __int32 *)(v7 + 296), 0xFFFFEFFF);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
