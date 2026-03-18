/*
 * XREFs of NtMITSetInputObservationState @ 0x1401E1570
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     SetUMInputObservationState @ 0x14021C354 (SetUMInputObservationState.c)
 */

__int64 __fastcall NtMITSetInputObservationState(unsigned int a1, unsigned int a2, unsigned int a3)
{
  if ( IsInputThread(a1, a2, a3) )
    return SetUMInputObservationState(a1, a2, a3);
  else
    return 3221225506LL;
}
