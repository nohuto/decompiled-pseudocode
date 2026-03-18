/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1400537E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteGeneric @ 0x140034A40 (ACPIBuildCompleteGeneric.c)
 *     WPP_RECORDER_SF_sqqDqss @ 0x140053A08 (WPP_RECORDER_SF_sqqDqss.c)
 */

void __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // rdx
  const char *v7; // rax
  const char *v8; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v3 + 944) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v3 + 1008), 0x4000000uLL);
    v6 = *(_QWORD *)(v3 + 8);
    v7 = byte_140075A82;
    v8 = byte_140075A82;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v3 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v3 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        a3,
        90,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        (__int64)"ACPIBuildDiscoverDeviceCompletion",
        v3,
        *(_QWORD *)(v3 + 944),
        a2,
        v3,
        (__int64)v7,
        (__int64)v8);
  }
  ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}
