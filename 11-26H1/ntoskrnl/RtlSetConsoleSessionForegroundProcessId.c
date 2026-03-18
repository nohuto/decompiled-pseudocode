/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x140B09EA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *__fastcall RtlSetConsoleSessionForegroundProcessId(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    result[80].Blink->Blink = a1;
  }
  else
  {
    result = (struct _LIST_ENTRY *)MmWriteableSharedUserData;
    *(_QWORD *)(MmWriteableSharedUserData + 824) = a1;
  }
  return result;
}
