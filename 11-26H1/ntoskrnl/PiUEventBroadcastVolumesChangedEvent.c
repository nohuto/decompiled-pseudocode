/*
 * XREFs of PiUEventBroadcastVolumesChangedEvent @ 0x1407A58CC
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140AFC1A0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastVolumesChangedEvent(int a1)
{
  LONG_PTR result; // rax
  void *SessionById; // rbx

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_VOLUMES_CHANGED, 0LL);
  SessionById = (void *)PsGetSessionById();
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_VOLUMES_CHANGED_SESSION, 0LL);
    return ObfDereferenceObjectWithTag(SessionById, 0x79517350u);
  }
  return result;
}
