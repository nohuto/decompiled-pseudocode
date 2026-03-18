/*
 * XREFs of DbgkpWakeTarget @ 0x140985E88
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x140957E88 (DbgkClearProcessDebugObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140987410 (NtDebugContinue.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PsMultiResumeThread @ 0x1404FE168 (PsMultiResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x140985EF4 (DbgkpFreeDebugEvent.c)
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
