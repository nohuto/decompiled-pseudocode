/*
 * XREFs of ExpWriteTimeZoneBias @ 0x140B12910
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1408358B8 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140B1209C (ExpRefreshTimeZoneInformation.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
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
