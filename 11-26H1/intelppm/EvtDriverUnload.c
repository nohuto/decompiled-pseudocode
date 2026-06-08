/*
 * XREFs of EvtDriverUnload @ 0x14002D1F0
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x14002D5EC (wil_UninitializeFeatureStaging.c)
 */

__int64 EvtDriverUnload()
{
  REGHANDLE v0; // rcx

  if ( ProcLibEtwRegistered )
  {
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_140018C60 = 0;
    EtwUnregister(v0);
    EtwUnregister((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink);
    ProcLibEtwRegistered = 0;
  }
  return wil_UninitializeFeatureStaging();
}
