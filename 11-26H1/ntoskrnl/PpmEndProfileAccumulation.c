/*
 * XREFs of PpmEndProfileAccumulation @ 0x140946114
 * Callers:
 *     PpmEventTraceProfiles @ 0x1409459FC (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x140945C68 (PpmApplyProfile.c)
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
