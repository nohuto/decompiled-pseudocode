/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x14003C050
 * Callers:
 *     ACPIFilterFastIoDetachCallback @ 0x14003BCD0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     ACPIInitResetDeviceExtension @ 0x14003C110 (ACPIInitResetDeviceExtension.c)
 */

void __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  char *i; // rax
  ULONG_PTR v2; // rbx
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+48h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp-10h]

  v7 = 1LL;
  v3[0] = a1 + 800;
  v3[1] = 0LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v6 = 816LL;
  for ( i = ACPIExtListStartEnum((__int64)v3); ; i = ACPIExtListEnumNext((__int64)v3) )
  {
    v2 = (ULONG_PTR)i;
    if ( *(_QWORD *)&NewIrql[8] + v6 == v3[0] )
      break;
    if ( (_DWORD)v7 == 1 )
    {
      ACPIInitReferenceDeviceExtension(*(__int64 *)&NewIrql[8]);
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    ACPIInitResetDeviceExtension(v2);
  }
  if ( (_DWORD)v7 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
}
