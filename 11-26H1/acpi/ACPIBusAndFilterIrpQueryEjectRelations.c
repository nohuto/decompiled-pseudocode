/*
 * XREFs of ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400C63C0 (ACPIBusIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIDockIsDockDevice @ 0x14001B4BC (ACPIDockIsDockDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x14001C6D4 (ACPIDockFindCorrespondingDock.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqqss @ 0x140031DD4 (WPP_RECORDER_SF_qqqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDetectEjectDevices @ 0x1400398D4 (ACPIDetectEjectDevices.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryEjectRelations(ULONG_PTR a1, char a2, PVOID *a3)
{
  __int64 DeviceExtension; // rax
  _QWORD *v6; // rbx
  __int64 CorrespondingDock; // rax
  int v8; // edi
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // r8
  __int64 v13; // r8
  const char *v14; // rax
  const char *v15; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = (_QWORD *)DeviceExtension;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    if ( ACPIDockIsDockDevice() )
      CorrespondingDock = ACPIDockFindCorrespondingDock((__int64)v6);
    else
      CorrespondingDock = 0LL;
    v8 = ACPIDetectEjectDevices((__int64)v6, a3, CorrespondingDock);
    if ( v8 < 0 )
    {
      v13 = v6[1];
      v14 = byte_140075A82;
      v15 = byte_140075A82;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)v6[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)v6[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x11u,
          (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
          v8,
          (char)v6,
          v14,
          v15);
    }
    return (unsigned int)v8;
  }
  else
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = byte_140075A82;
    v12 = byte_140075A82;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = (const char *)v6[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = (const char *)v6[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x10u,
        (__int64)&WPP_fcfdf8e587be3a45444c0aabc3a31ffd_Traceguids,
        a2,
        0,
        (char)v6,
        v11,
        v12);
    return 3221225485LL;
  }
}
