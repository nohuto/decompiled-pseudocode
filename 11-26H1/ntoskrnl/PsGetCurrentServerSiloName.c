/*
 * XREFs of PsGetCurrentServerSiloName @ 0x1407EE6B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *PsGetCurrentServerSiloName()
{
  struct _LIST_ENTRY *v0; // rax
  __int64 *v1; // rcx

  v0 = PsGetCurrentServerSiloGlobals() + 78;
  v1 = &PspDefaultSiloName;
  if ( LOWORD(v0->Flink) )
    return (__int64 *)v0;
  return v1;
}
