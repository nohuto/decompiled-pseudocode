/*
 * XREFs of ACPIPepCleanupPlatformNotificationSupport @ 0x1400B4070
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x14001DAA0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140065BD0 (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ACPIPepCleanupPlatformNotificationSupport(ULONG_PTR a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_BYTE *)(a1 + 240) )
  {
    if ( (unsigned int)Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_QWORD *)(a1 + 336) )
      {
        ExUnsubscribeWnfStateChange();
        *(_QWORD *)(a1 + 336) = 0LL;
      }
    }
    else
    {
      v2 = *(void **)(a1 + 296);
      if ( v2 )
      {
        PoUnregisterPowerSettingCallback(v2);
        *(_QWORD *)(a1 + 296) = 0LL;
      }
      v3 = *(void **)(a1 + 304);
      if ( v3 )
      {
        PoUnregisterPowerSettingCallback(v3);
        *(_QWORD *)(a1 + 304) = 0LL;
      }
      v4 = *(void **)(a1 + 312);
      if ( v4 )
      {
        PoUnregisterPowerSettingCallback(v4);
        *(_QWORD *)(a1 + 312) = 0LL;
      }
      v5 = *(void **)(a1 + 320);
      if ( v5 )
      {
        PoUnregisterPowerSettingCallback(v5);
        *(_QWORD *)(a1 + 320) = 0LL;
      }
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      ExUnsubscribeWnfStateChange();
      *(_QWORD *)(a1 + 328) = 0LL;
    }
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 184));
    KeInitializeEvent((PRKEVENT)(a1 + 344), NotificationEvent, 0);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 284) = 1LL;
    ACPISetDeviceWorker(a1, 1);
    ExReleaseFastMutex((PFAST_MUTEX)(a1 + 184));
    KeWaitForSingleObject((PVOID)(a1 + 344), Executive, 0, 0, 0LL);
    *(_BYTE *)(a1 + 240) = 0;
    ACPIInitDereferenceDeviceExtensionUnlocked(a1);
  }
}
