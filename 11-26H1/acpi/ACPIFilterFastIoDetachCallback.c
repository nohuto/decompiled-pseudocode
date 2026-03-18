/*
 * XREFs of ACPIFilterFastIoDetachCallback @ 0x14003BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitDeleteChildDeviceList @ 0x14003C050 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInitResetDeviceExtension @ 0x14003C110 (ACPIInitResetDeviceExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 */

char __fastcall ACPIFilterFastIoDetachCallback(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  const char *v4; // rax
  const char *v5; // rcx
  _UNKNOWN **v6; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v2 = DeviceExtension;
  if ( DeviceExtension )
  {
    v3 = *(_QWORD *)(DeviceExtension + 8);
    v4 = byte_140075A82;
    v5 = byte_140075A82;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v2 + 608);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v2 + 616);
    }
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v6,
        12,
        10,
        (__int64)&WPP_ee1b3e6ee15937e5a501f089fd3dd194_Traceguids,
        v2,
        (__int64)v4,
        (__int64)v5);
    }
    LOBYTE(DeviceExtension) = *(_BYTE *)(v2 + 8) & 0x60;
    if ( (_BYTE)DeviceExtension == 64 )
    {
      *(_DWORD *)(v2 + 368) = 4;
      ACPIInitDeleteChildDeviceList(v2);
      LOBYTE(DeviceExtension) = ACPIInitResetDeviceExtension(v2);
    }
  }
  return DeviceExtension;
}
