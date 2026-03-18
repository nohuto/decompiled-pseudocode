/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x140AB02DC
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030B820 (PsGetSessionIdEx.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  int SessionId; // edi
  __int64 ProcessServerSilo; // rax

  SessionId = PsGetSessionIdEx(a1);
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  return SessionId == (unsigned int)PsGetServerSiloServiceSessionId(ProcessServerSilo);
}
