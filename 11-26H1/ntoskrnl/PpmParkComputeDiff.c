/*
 * XREFs of PpmParkComputeDiff @ 0x14025C028
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     ?RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14025C98C (-RtlpXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmParkEvaluateRestriction @ 0x14025CAB4 (PpmParkEvaluateRestriction.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned int PpmParkComputeDiff()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned int result; // eax

  *(_QWORD *)&PpmPerfNewCoreParkingMask.Count = 2097153LL;
  v0 = 0;
  memset_0(&PpmPerfNewCoreParkingMask.8, 0, sizeof(PpmPerfNewCoreParkingMask.8));
  *(_QWORD *)&PpmParkNewSoftParkingMask.Count = 2097153LL;
  memset_0(&PpmParkNewSoftParkingMask.8, 0, sizeof(PpmParkNewSoftParkingMask.8));
  if ( PpmParkNumNodes )
  {
    v1 = (unsigned int)PpmParkNumNodes;
    v2 = PpmParkNodes + 808;
    do
    {
      RtlOrAffinityEx(&PpmPerfNewCoreParkingMask, v2 - 528, &PpmPerfNewCoreParkingMask);
      RtlOrAffinityEx(&PpmParkNewSoftParkingMask, v2, &PpmParkNewSoftParkingMask);
      v2 += 1264LL;
      --v1;
    }
    while ( v1 );
  }
  result = RtlpXorAffinityEx(
             &PpmPerfCoreParkingMask,
             &PpmPerfNewCoreParkingMask,
             &PpmPerfChangedCoreParkingMask,
             PpmPerfChangedCoreParkingMask.Size);
  if ( PpmParkNumNodes )
  {
    do
      result = PpmParkEvaluateRestriction(PpmParkNodes + 1264LL * v0++);
    while ( v0 < PpmParkNumNodes );
  }
  return result;
}
