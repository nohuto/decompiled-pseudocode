/*
 * XREFs of NtMITSetInputObservationState @ 0x1401BB4B0
 * Callers:
 *     <none>
 * Callees:
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     SetUMInputObservationState @ 0x140216C68 (SetUMInputObservationState.c)
 */

__int64 __fastcall NtMITSetInputObservationState(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi

  v4 = a2;
  v5 = a1;
  if ( IsInputThread(a1, a2) )
    return SetUMInputObservationState(v5, v4, a3);
  else
    return 3221225506LL;
}
