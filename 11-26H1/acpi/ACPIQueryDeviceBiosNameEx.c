/*
 * XREFs of ACPIQueryDeviceBiosNameEx @ 0x14002C54C
 * Callers:
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x140062E90 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1400A9D44 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 *     AcpiIsDeviceSecure @ 0x1400C1CA4 (AcpiIsDeviceSecure.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400CA68C (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1400D14C8 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIQueryDeviceBiosName @ 0x1400D1FE4 (ACPIQueryDeviceBiosName.c)
 *     ACPIIsDebuggingDevice @ 0x1400D3FAC (ACPIIsDebuggingDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x14002C5E4 (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1400CFB64 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosNameEx(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  int v5; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( v4 )
  {
    v5 = ACPIAmliBuildObjectPathname(v4, &P);
    if ( v5 >= 0 )
    {
      v5 = ACPIInitUnicodeString(a3);
      if ( v5 >= 0 )
        v5 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v5;
}
