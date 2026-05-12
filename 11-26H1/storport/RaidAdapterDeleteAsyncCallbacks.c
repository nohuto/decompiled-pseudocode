/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x140060844
 * Callers:
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1400495EC (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x140183D70 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x140184FA8 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  void *v3; // rcx
  unsigned int i; // ebx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  char v8; // al
  __int64 v9; // rbx

  KeCancelTimer((PKTIMER)(a1 + 1648));
  if ( *(_DWORD *)(a1 + 5600) )
    KeCancelTimer((PKTIMER)(a1 + 5464));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1840));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4200));
  KeLowerIrql(v2);
  if ( *(_DWORD *)(a1 + 1032) > 1u )
    KeCancelTimer((PKTIMER)(a1 + 5856));
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4433) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4433) = 0;
    *(_QWORD *)(a1 + 4416) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 864) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v3 = *(void **)(a1 + 5032);
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    *(_QWORD *)(a1 + 5032) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 5048) )
  {
    PoUnregisterCoalescingCallback();
    *(_QWORD *)(a1 + 5048) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4864); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4880) + 8LL * i));
  v5 = *(void **)(a1 + 4872);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x45416152u);
    *(_DWORD *)(a1 + 4864) = 0;
    *(_QWORD *)(a1 + 4872) = 0LL;
    *(_QWORD *)(a1 + 4880) = 0LL;
  }
  v6 = *(void **)(a1 + 5056);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(a1 + 5056) = 0LL;
  }
  v7 = *(void **)(a1 + 6104);
  if ( v7 )
  {
    PoUnregisterPowerSettingCallback(v7);
    *(_QWORD *)(a1 + 6104) = 0LL;
  }
  v8 = *(_BYTE *)(a1 + 108);
  if ( (v8 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 108) = v8 & 0xEF;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5064), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5064));
  }
  v9 = *(_QWORD *)(a1 + 6288);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 64) )
    {
      PoUnregisterFromEffectivePowerModeNotifications();
      *(_QWORD *)(v9 + 64) = 0LL;
    }
  }
}
