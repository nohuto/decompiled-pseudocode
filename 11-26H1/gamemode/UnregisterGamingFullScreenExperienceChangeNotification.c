/*
 * XREFs of UnregisterGamingFullScreenExperienceChangeNotification @ 0x18000ED40
 * Callers:
 *     <none>
 * Callees:
 *     IsGamingFullScreenExperienceSupported @ 0x18000E8A0 (IsGamingFullScreenExperienceSupported.c)
 */

char __fastcall UnregisterGamingFullScreenExperienceChangeNotification(_QWORD *P)
{
  int v2; // eax

  v2 = IsGamingFullScreenExperienceSupported();
  if ( v2 && P )
  {
    RtlUnsubscribeWnfStateChangeNotification(*P);
    LOBYTE(v2) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return v2;
}
