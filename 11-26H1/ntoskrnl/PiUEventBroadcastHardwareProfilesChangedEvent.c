/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1407A56C4
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140AFC1A0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2);
  SessionById = (void *)PsGetSessionById();
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
