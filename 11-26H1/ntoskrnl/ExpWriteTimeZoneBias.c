/*
 * XREFs of ExpWriteTimeZoneBias @ 0x140B14690
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x14083BAF8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 __fastcall ExpWriteTimeZoneBias(_DWORD *a1)
{
  struct _LIST_ENTRY *v2; // rdx
  __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
    v2 = PsGetCurrentServerSiloGlobals()[80].Blink + 37;
  else
    v2 = (struct _LIST_ENTRY *)(MmWriteableSharedUserData + 32);
  LODWORD(v2->Blink) = a1[1];
  LODWORD(v2->Flink) = *a1;
  result = (unsigned int)a1[1];
  HIDWORD(v2->Flink) = result;
  return result;
}
