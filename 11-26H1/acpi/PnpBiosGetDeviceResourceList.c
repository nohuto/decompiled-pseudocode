/*
 * XREFs of PnpBiosGetDeviceResourceList @ 0x1400CA68C
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1400C94D0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400C9940 (ACPIBusIrpQueryResourceRequirements.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1400CA25C (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1400CA430 (ACPIFilterIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x14002C54C (ACPIQueryDeviceBiosNameEx.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x14004B890 (PnpDeviceBiosResourcesToNtResources.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     PnpiValidateSdevResources @ 0x1400B8794 (PnpiValidateSdevResources.c)
 *     AcpiSearchSdevTable @ 0x1400BA760 (AcpiSearchSdevTable.c)
 *     AcpiCheckSecureDevice @ 0x1400C1820 (AcpiCheckSecureDevice.c)
 */

__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *BugCheckParameter4; // rdi
  __int64 DeviceExtension; // r14
  int v8; // esi
  int v9; // ecx
  signed int v10; // ebx
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  void *v15; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h] BYREF
  PVOID v17; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-10h] BYREF
  int v19; // [rsp+C8h] [rbp+48h] BYREF
  int v20; // [rsp+D0h] [rbp+50h] BYREF
  int v21; // [rsp+D8h] [rbp+58h] BYREF

  *(_OWORD *)BugCheckParameter3 = 0LL;
  v20 = 0;
  BugCheckParameter4 = 0LL;
  v21 = 0;
  v19 = 0;
  v17 = 0LL;
  P = 0LL;
  v15 = 0LL;
  *a3 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v17, (__int64)&v20);
  if ( a2 )
    v9 = ACPIGet(DeviceExtension, 1397903455, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v21);
  else
    v9 = -1073741772;
  if ( v8 >= 0 || v9 >= 0 )
  {
    v10 = ((v8 >> 31) & 0xFFFFFFCD) - 1073741772;
    if ( v9 >= 0 && P )
    {
      v10 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)P, 0, (__int64)&v15);
      ExFreePoolWithTag(P, 0);
      BugCheckParameter4 = v15;
      P = 0LL;
    }
    if ( v10 < 0 )
    {
      if ( v8 < 0 )
        goto LABEL_28;
      v11 = PnpDeviceBiosResourcesToNtResources(
              DeviceExtension,
              (__int64)v17,
              (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
              (__int64)&v15);
      BugCheckParameter4 = v15;
      v10 = v11;
      if ( v11 < 0 )
        goto LABEL_26;
    }
    if ( AcpiCheckSecureDevice(DeviceExtension) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
      if ( !v12 )
      {
LABEL_19:
        v10 = -1072431079;
        goto LABEL_25;
      }
      v10 = ACPIQueryDeviceBiosNameEx(a1, 1LL, (struct _UNICODE_STRING *)BugCheckParameter3);
      if ( v10 < 0 )
      {
LABEL_25:
        if ( v8 < 0 )
          goto LABEL_28;
LABEL_26:
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        goto LABEL_28;
      }
      if ( !AcpiSearchSdevTable(v12, (const UNICODE_STRING *)BugCheckParameter3, &v19) )
        goto LABEL_19;
      v13 = PnpiValidateSdevResources(v12, v19, (__int64)BugCheckParameter4);
      v10 = v13;
      if ( v13 < 0 )
        KeBugCheckEx(0xA5u, 0x1000EuLL, v13, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    }
    *a3 = BugCheckParameter4;
    BugCheckParameter4 = 0LL;
    goto LABEL_25;
  }
  if ( v9 == -1073741772 )
  {
    if ( v8 == -1073741772 )
      return 0;
    v10 = v8;
  }
  else
  {
    v10 = v9;
  }
LABEL_28:
  if ( BugCheckParameter4 )
    ExFreePoolWithTag(BugCheckParameter4, 0);
  return (unsigned int)v10;
}
