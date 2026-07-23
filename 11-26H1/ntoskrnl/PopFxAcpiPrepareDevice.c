/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x140614FE4
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140614E40 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x140616DC4 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiPrepareDevice(
        const UNICODE_STRING *a1,
        ULONG_PTR a2,
        ULONG_PTR *a3,
        struct _KLOCK_ENTRIES *a4)
{
  int AcpiDeviceByUniqueId; // edi
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  volatile unsigned __int8 *v11; // rdx
  _BYTE *v12; // rbx
  ULONG_PTR i; // rbx

  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(a1, 0LL, (__int64)a3, a4);
  if ( AcpiDeviceByUniqueId < 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    --CurrentThread->KernelApcDisable;
    v12 = (_BYTE *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink, 0LL, 0LL, v8);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           17LL,
           0LL) )
    {
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
        0,
        (LegacyAutoBoost *)v12,
        (struct _KTHREAD *)(&PopFxBlockingDeviceListLock.SwapListEntry + 1));
    }
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v11) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v12 + 33), v11, 1);
      }
      else
      {
        v12[10] = 1;
      }
    }
    for ( i = PopFxBlockingDeviceListLock.RelativeTimerBias;
          (unsigned __int64 *)i != &PopFxBlockingDeviceListLock.RelativeTimerBias;
          i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) >= 3u
        && *(_QWORD *)(i + 112)
        && (unsigned __int8)PopPluginAcpiNotificationStrict(i, 1uLL, a2)
        && *(_BYTE *)(a2 + 12) )
      {
        v10 = i;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
    KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.WaitListEntry.Blink);
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      *a3 = v10;
      AcpiDeviceByUniqueId = 0;
      LOBYTE(a4->Thread) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)AcpiDeviceByUniqueId;
}
