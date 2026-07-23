/*
 * XREFs of PpmEndProfileAccumulation @ 0x1409C1A84
 * Callers:
 *     PpmEventTraceProfiles @ 0x1409C136C (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x1409C15D8 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[183];
  a1[187] += v2;
  if ( a1[185] < v2 )
    a1[185] = v2;
  if ( a1[186] > v2 )
    a1[186] = v2;
  ++a1[184];
  a1[183] = 0LL;
}
