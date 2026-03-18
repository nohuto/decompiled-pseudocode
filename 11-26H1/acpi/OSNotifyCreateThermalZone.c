/*
 * XREFs of OSNotifyCreateThermalZone @ 0x140051E28
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildThermalZoneExtension @ 0x140051EE8 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildThermalZoneRequest @ 0x14005215C (ACPIBuildThermalZoneRequest.c)
 */

__int64 __fastcall OSNotifyCreateThermalZone(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ebx
  int v6; // r9d
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  LOBYTE(v3) = a1;
  v5 = ACPIBuildThermalZoneExtension(a1, a2, &v8);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 20;
      goto LABEL_7;
    }
  }
  else
  {
    v3 = v8;
    ACPIInitReferenceDeviceExtension(v8);
    _InterlockedOr64((volatile signed __int64 *)(v3 + 8), a2);
    v5 = ACPIBuildThermalZoneRequest();
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 21;
LABEL_7:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_qL(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        v6,
        (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
        v3,
        v5);
    }
  }
  return (unsigned int)v5;
}
