/*
 * XREFs of OSOpenUnicodeHandle @ 0x1400C8E14
 * Callers:
 *     ACPIThermalGetOverrideHandle @ 0x1400A9848 (ACPIThermalGetOverrideHandle.c)
 *     OSOpenLargestSubkey @ 0x1400B708C (OSOpenLargestSubkey.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 *     OSReadAcpiConfigurationData @ 0x1400D7CF8 (OSReadAcpiConfigurationData.c)
 *     IrqPolicyConfigure @ 0x1400DCF48 (IrqPolicyConfigure.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400DD048 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall OSOpenUnicodeHandle(struct _UNICODE_STRING *a1, void *a2, void **a3)
{
  int v3; // edx
  NTSTATUS v4; // ebx
  struct _OBJECT_ATTRIBUTES v6; // [rsp+30h] [rbp-38h] BYREF

  v6.RootDirectory = a2;
  v6.ObjectName = a1;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 576LL;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(a3, 0x20019u, &v6);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      11,
      13,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      v4);
  }
  return (unsigned int)v4;
}
