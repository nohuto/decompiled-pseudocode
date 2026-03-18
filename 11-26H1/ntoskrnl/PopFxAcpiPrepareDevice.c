/*
 * XREFs of PopFxAcpiPrepareDevice @ 0x1406121A4
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140612000 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404FA998 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopPluginAcpiNotificationStrict @ 0x140613F04 (PopPluginAcpiNotificationStrict.c)
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
    v12 = (_BYTE *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, v8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F12420.StateSaveArea,
        0,
        (LegacyAutoBoost *)v12,
        (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
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
    for ( i = qword_140F123F0; (ULONG_PTR *)i != &qword_140F123F0; i = *(_QWORD *)i )
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
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
