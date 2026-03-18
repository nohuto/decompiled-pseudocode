/*
 * XREFs of OSNotifyCreatePowerResource @ 0x140063BC4
 * Callers:
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildPowerResourceExtension @ 0x140057F90 (ACPIBuildPowerResourceExtension.c)
 *     ACPIBuildPowerResourceRequest @ 0x14005808C (ACPIBuildPowerResourceRequest.c)
 */

__int64 __fastcall OSNotifyCreatePowerResource(__int64 *a1)
{
  char v1; // di
  int v2; // edx
  int v3; // ebx
  int v4; // r9d
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = (char)a1;
  v3 = ACPIBuildPowerResourceExtension(a1, &v6);
  if ( v3 >= 0 )
  {
    v1 = v6;
    v3 = ACPIBuildPowerResourceRequest(v6);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 16;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 15;
LABEL_7:
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      22,
      v4,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      v1,
      v3);
  }
  return (unsigned int)v3;
}
