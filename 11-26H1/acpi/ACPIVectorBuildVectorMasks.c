/*
 * XREFs of ACPIVectorBuildVectorMasks @ 0x140055B7C
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x14003D890 (ACPIGpeBuildEventMasks.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 */

void ACPIVectorBuildVectorMasks()
{
  unsigned int i; // ebx
  unsigned int *v1; // rcx
  int v2; // edx

  for ( i = 0; i < GpeVectorTableSize; ++i )
  {
    v1 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * i + 1);
    if ( v1
      && !(unsigned __int8)ACPIGpeInstallRemoveIndex(*v1)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        14,
        10,
        (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
        i);
    }
  }
}
