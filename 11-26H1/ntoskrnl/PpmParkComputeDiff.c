/*
 * XREFs of PpmParkComputeDiff @ 0x14025A848
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025B1B0 (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmParkEvaluateRestriction @ 0x14025B2D8 (PpmParkEvaluateRestriction.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

unsigned int PpmParkComputeDiff()
{
  unsigned int v0; // ebx
  __int64 SystemCallNumber; // rsi
  __int64 v2; // rdi
  unsigned int result; // eax

  *(_QWORD *)&PpmPerfNewCoreParkingMask.Count = 2097153LL;
  v0 = 0;
  memset_0(&PpmPerfNewCoreParkingMask.8, 0, sizeof(PpmPerfNewCoreParkingMask.8));
  *(_QWORD *)&PpmParkNewSoftParkingMask.Count = 2097153LL;
  memset_0(&PpmParkNewSoftParkingMask.8, 0, sizeof(PpmParkNewSoftParkingMask.8));
  if ( PopModernStandbyStateNotify.SystemCallNumber )
  {
    SystemCallNumber = PopModernStandbyStateNotify.SystemCallNumber;
    v2 = *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 808LL;
    do
    {
      RtlOrAffinityEx(&PpmPerfNewCoreParkingMask, v2 - 528, &PpmPerfNewCoreParkingMask);
      RtlOrAffinityEx(&PpmParkNewSoftParkingMask, v2, &PpmParkNewSoftParkingMask);
      v2 += 1264LL;
      --SystemCallNumber;
    }
    while ( SystemCallNumber );
  }
  result = RtlpXorAffinityEx(
             &PpmPerfCoreParkingMask,
             &PpmPerfNewCoreParkingMask,
             &PpmPerfChangedCoreParkingMask,
             PpmPerfChangedCoreParkingMask.Size);
  if ( PopModernStandbyStateNotify.SystemCallNumber )
  {
    do
      result = PpmParkEvaluateRestriction(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * v0++);
    while ( v0 < PopModernStandbyStateNotify.SystemCallNumber );
  }
  return result;
}
