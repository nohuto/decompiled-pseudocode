/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x140046DEC (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x140046F28 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListExitEnumEarly @ 0x140055C8C (ACPIExtListExitEnumEarly.c)
 */

__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  char *i; // rax
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v10 = 0LL;
  v9 = 816LL;
  v6 = a2 + 800;
  *(_OWORD *)NewIrql = 0LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = ACPIExtListStartEnum((__int64)&v6); ; i = ACPIExtListEnumNext((__int64)&v6) )
  {
    DeviceExtensionNoLock = (__int64)i;
    if ( *(_QWORD *)&NewIrql[8] + v9 == v6 )
      break;
    if ( (_DWORD)v10 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
    }
    if ( !DeviceExtensionNoLock )
    {
      ACPIExtListExitEnumEarly(&v6);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 784) != a1 )
    {
      DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
      if ( !DeviceExtensionNoLock )
        continue;
    }
    ACPIExtListExitEnumEarly(&v6);
    return DeviceExtensionNoLock;
  }
  if ( (_DWORD)v10 )
    KeReleaseSpinLock(SpinLock[1], NewIrql[0]);
  return 0LL;
}
