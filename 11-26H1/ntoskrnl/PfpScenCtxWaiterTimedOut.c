/*
 * XREFs of PfpScenCtxWaiterTimedOut @ 0x1405FFE04
 * Callers:
 *     PfpScenCtxPrefetchWait @ 0x140BF8AD8 (PfpScenCtxPrefetchWait.c)
 *     PfpScenCtxScenarioSet @ 0x140C09F08 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall PfpScenCtxWaiterTimedOut(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF3 | 8;
  *(_DWORD *)(a1 + 8) = result;
  v2 = *(struct _KEVENT **)(a1 + 40);
  if ( v2 )
    return KeSetEvent(v2, 0, 0);
  return result;
}
