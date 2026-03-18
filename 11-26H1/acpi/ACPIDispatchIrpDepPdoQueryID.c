/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60
 * Callers:
 *     <none>
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     ACPIDevicePowerFlushQueue @ 0x14001C97C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1400480D0 (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     AcpiArblibInitializeArbiter @ 0x1400555EC (AcpiArblibInitializeArbiter.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1400575CC (AcpiArblibFreeArbiterInstance.c)
 *     AcpiEvaluateBiosMethodsOnCxlBus @ 0x140065744 (AcpiEvaluateBiosMethodsOnCxlBus.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x140065844 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ACPIBuildFlushQueue @ 0x1400C7EBC (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r12
  __int64 v8; // rcx
  _UNKNOWN **v9; // rax
  char *v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rbx
  int v13; // r14d
  PVOID *v14; // rdi
  const char *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
  {
LABEL_4:
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = &AcpiBusFilterIrpDispatch;
    if ( (v8 & 0x40) == 0 )
      v9 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 24) = v9;
    if ( (v8 & 0x1000000000LL) != 0 )
    {
      v10 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v8 & 0x8000000) != 0 )
    {
      v10 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else if ( _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x28u) )
    {
      v10 = (char *)&AcpiPepIrpDispatch;
    }
    else
    {
      if ( (v8 & 0x200000000000LL) == 0 )
        goto LABEL_29;
      if ( !*(_QWORD *)(DeviceExtension + 608) )
        goto LABEL_29;
      v16 = AcpiInternalDeviceTable;
      v17 = 0;
      if ( !AcpiInternalDeviceTable )
        goto LABEL_29;
      v18 = 0LL;
      while ( !strstr(*(const char **)(DeviceExtension + 608), v16) )
      {
        v18 = ++v17;
        v16 = (&AcpiInternalDeviceTable)[2 * v17];
        if ( !v16 )
          goto LABEL_29;
      }
      v10 = (&AcpiInternalDeviceTable)[2 * v18 + 1];
    }
    *(_QWORD *)(DeviceExtension + 24) = v10;
LABEL_29:
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
      FixedButtonDeviceObject = a1;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x35u) )
      AcpiEvaluateBiosMethodsOnCxlBus(DeviceExtension);
    else
      AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
    return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL) + 152LL))(
             a1,
             a2);
  }
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 760), 1397900127) )
  {
    *(_BYTE *)(DeviceExtension + 184) = 0;
    goto LABEL_4;
  }
  *(_BYTE *)(DeviceExtension + 184) = 1;
  v11 = (unsigned int *)&AcpiArbiterResourceTypes;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = AcpiArblibInitializeArbiter(DeviceExtension, *v11, DeviceExtension + 192 + 8 * v12);
    if ( v13 < 0 )
      break;
    v12 = (unsigned int)(v12 + 1);
    ++v11;
    if ( (unsigned int)v12 >= 3 )
      goto LABEL_4;
  }
  if ( (_DWORD)v12 )
  {
    v14 = (PVOID *)(DeviceExtension + 8 * v12 + 192);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v14);
      LODWORD(v12) = v12 - 1;
    }
    while ( (_DWORD)v12 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (unsigned int)v13;
}
