/*
 * XREFs of RtlGetDefaultCodePage @ 0x140B2EF00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 RtlGetDefaultCodePage()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  _WORD *v1; // r9
  __int64 result; // rax
  _WORD *v3; // rdx

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  *v1 = CurrentServerSiloGlobals[64].Blink;
  result = LOWORD(CurrentServerSiloGlobals[68].Blink);
  *v3 = result;
  return result;
}
