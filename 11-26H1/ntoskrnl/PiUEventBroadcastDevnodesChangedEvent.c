/*
 * XREFs of PiUEventBroadcastDevnodesChangedEvent @ 0x140AFDED0
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140AFDDA0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastDevnodesChangedEvent(__int64 a1)
{
  NTSTATUS result; // eax
  void *SessionById; // rbx
  int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( (_DWORD)a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0, 0LL, 0LL, 0, 0);
  SessionById = (void *)PsGetSessionById(a1);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED_SESSION, 0LL, 0, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
