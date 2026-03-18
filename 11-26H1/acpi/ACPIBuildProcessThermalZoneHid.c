/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1400590F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r10
  const char *v4; // rdx
  const char *v5; // r8
  __int64 v6; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 8;
  v4 = byte_140075A82;
  v5 = byte_140075A82;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v1 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x51u,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      0,
      v3,
      v4,
      v5);
  ACPIBuildCompleteGeneric(0LL, 0, 0LL, a1);
  return 0LL;
}
