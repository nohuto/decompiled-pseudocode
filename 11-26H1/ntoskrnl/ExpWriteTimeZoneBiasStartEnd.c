/*
 * XREFs of ExpWriteTimeZoneBiasStartEnd @ 0x140B14754
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140B13E1C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *__fastcall ExpWriteTimeZoneBiasStartEnd(struct _LIST_ENTRY *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v6; // r9
  struct _LIST_ENTRY **p_Blink; // r8

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    Blink = result[80].Blink;
    v6 = Blink + 38;
    p_Blink = &Blink[38].Blink;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    v6 = (struct _LIST_ENTRY *)(MmWriteableSharedUserData + 968);
    p_Blink = (struct _LIST_ENTRY **)(MmWriteableSharedUserData + 976);
  }
  v6->Flink = a1;
  *p_Blink = a2;
  return result;
}
