/*
 * XREFs of CmpDoesProcessBelongToServiceSession @ 0x140AADF2C
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 */

bool __fastcall CmpDoesProcessBelongToServiceSession(__int64 a1)
{
  int SessionId; // edi
  __int64 ProcessServerSilo; // rax

  SessionId = PsGetSessionIdEx(a1);
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  return SessionId == (unsigned int)PsGetServerSiloServiceSessionId(ProcessServerSilo);
}
