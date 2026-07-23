/*
 * XREFs of DbgkpWakeTarget @ 0x14091D3BC
 * Callers:
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     DbgkClearProcessDebugObject @ 0x14094B8B8 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 *     NtDebugContinue @ 0x140B077A0 (NtDebugContinue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PsMultiResumeThread @ 0x1404F76A8 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x14091D428 (DbgkpFreeDebugEvent.c)
 */

LONG __fastcall DbgkpWakeTarget(char *P)
{
  struct _EX_RUNDOWN_REF *v2; // rdi

  v2 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (*((_DWORD *)P + 19) & 0x20) != 0 )
    PsMultiResumeThread(*((_QWORD *)P + 8), 0LL, 1LL);
  if ( (*((_DWORD *)P + 19) & 8) != 0 )
    ExReleaseRundownProtection_0(v2 + 177);
  if ( (*((_DWORD *)P + 19) & 2) != 0 )
    return DbgkpFreeDebugEvent(P);
  else
    return KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
