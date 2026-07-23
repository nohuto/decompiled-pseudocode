/*
 * XREFs of ExInitLicenseCallback @ 0x14083E088
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 */

NTSTATUS ExInitLicenseCallback()
{
  struct _LIST_ENTRY *Blink; // rbx
  NTSTATUS result; // eax

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  result = ExCreateCallback((PCALLBACK_OBJECT *)&Blink[2928], (POBJECT_ATTRIBUTES)&stru_140BE1110, 1u, 1u);
  if ( result < 0 )
    Blink[2928].Flink = 0LL;
  return result;
}
