/*
 * XREFs of RaidDeleteUnit @ 0x1400459EC
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1400370BC (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x140098F10 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x140045B74 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x140060FCC (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1400C49D4 (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 506) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5080) )
    *(_QWORD *)(v2 + 5080) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 3368)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1968) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1960));
  if ( *(_QWORD *)(a1 + 3552) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3544));
  if ( *(_QWORD *)(a1 + 2088) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2080));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
