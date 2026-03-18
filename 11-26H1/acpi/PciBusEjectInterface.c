/*
 * XREFs of PciBusEjectInterface @ 0x1400B3DE8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x14005A800 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PciBusEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r9
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *v15; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v4 + 16) < 0x40u )
    return 3221225485LL;
  if ( *(_WORD *)(v4 + 18) > 2u )
    return 3221225659LL;
  v6 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)v6 = 131136;
  *(_QWORD *)(v6 + 8) = DeviceExtension;
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v6 + 16), (__int64)AcpiInterfaceReference);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v7 + 24), (__int64)AcpiInterfaceDereference);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v8 + 32), (__int64)AcpiWrapperReadConfig);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v9 + 40), (__int64)AcpiWrapperWriteConfig);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v10 + 48), (__int64)PciConfigPinToLine);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v11 + 56), (__int64)PciConfigLineToPin);
  if ( *(_WORD *)(v13 + 16) >= 0x48u )
  {
    *(_WORD *)v12 = 72;
    AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v12 + 64), (__int64)PciGetRootBusCapability);
  }
  if ( *(_WORD *)(v13 + 16) >= 0x50u )
  {
    v15 = (_QWORD *)(v12 + 72);
    if ( (*(_DWORD *)(*((_QWORD *)AcpiInformation + 1) + 112LL) & 0x4000) != 0 )
    {
      *(_WORD *)v12 = 88;
      AcpiGetDriverProxyWrappedEndpoint(v15, (__int64)PciExpressWakeControl);
    }
    else
    {
      *v15 = 0LL;
    }
  }
  if ( *(_WORD *)(v13 + 16) >= 0x58u )
    AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v12 + 80), (__int64)PciPrepareMultistageResume);
  (*(void (__fastcall **)(__int64))(v12 + 16))(v14);
  return 0LL;
}
