/*
 * XREFs of ACPICleanupRemovedExtension @ 0x140059D48
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 * Callees:
 *     ACPIInitRemoveDeviceExtension @ 0x14001C148 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListTestElement @ 0x14001E418 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     AcpiCleanupDeviceExtensionEarly @ 0x14005498C (AcpiCleanupDeviceExtensionEarly.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 */

__int64 __fastcall ACPICleanupRemovedExtension(_QWORD *a1)
{
  char *i; // rax
  __int64 v3; // rdx
  char *v4; // rdi
  KIRQL v5; // di
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v9 = 0LL;
  v11 = 1LL;
  v8[0] = a1 + 100;
  v8[1] = 0LL;
  v8[2] = &AcpiDeviceTreeLock;
  v10 = 816LL;
  for ( i = ACPIExtListStartEnum((__int64)v8); ; i = ACPIExtListEnumNext((__int64)v8) )
  {
    LOBYTE(v3) = 1;
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v8, v3) )
      break;
    ACPICleanupRemovedExtension(v4);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = a1[99];
  if ( v6 )
    _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x20000000000uLL);
  AcpiCleanupDeviceExtensionEarly((__int64)a1);
  ACPIInitRemoveDeviceExtension(a1);
  if ( a1[95] )
    ACPIInitDereferenceDeviceExtensionLocked((ULONG_PTR)a1);
  *(_QWORD *)(*(_QWORD *)a1[95] + 104LL) = 0LL;
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
