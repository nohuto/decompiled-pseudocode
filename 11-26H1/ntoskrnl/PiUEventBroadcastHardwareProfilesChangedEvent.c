/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1407A8204
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140AFDDA0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, const void *a2)
{
  NTSTATUS result; // eax
  void *SessionById; // rdi
  int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  SessionById = (void *)PsGetSessionById();
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
