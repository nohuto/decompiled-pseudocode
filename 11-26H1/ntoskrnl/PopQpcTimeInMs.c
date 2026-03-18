/*
 * XREFs of PopQpcTimeInMs @ 0x140C06CF0
 * Callers:
 *     PopWriteBsdPoInfo @ 0x140435F08 (PopWriteBsdPoInfo.c)
 *     PopPowerTransitionTimesInMs @ 0x1404EBB5C (PopPowerTransitionTimesInMs.c)
 *     PopDiagTracePerfTrackData @ 0x140AF4FB0 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140AF5348 (PopDiagTraceHiberStats.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
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
