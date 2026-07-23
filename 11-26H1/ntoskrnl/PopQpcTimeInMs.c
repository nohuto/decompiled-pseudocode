/*
 * XREFs of PopQpcTimeInMs @ 0x140C0CF00
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140425088 (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x1404E513C (PopPowerTransitionTimesInMs.c)
 *     PopDiagTracePerfTrackData @ 0x140AF7650 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( *a2 )
  {
    v3 = *a2 - *a1;
    if ( is_mul_ok(v3, 0x3E8uLL) )
      return (unsigned int)(v3 * (unsigned __int128)0x3E8uLL / PopQpcFrequency);
    else
      return (unsigned int)(v3 / (PopQpcFrequency / 0x3E8));
  }
  return v2;
}
