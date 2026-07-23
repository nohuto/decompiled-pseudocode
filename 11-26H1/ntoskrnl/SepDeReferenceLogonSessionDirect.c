/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140470310
 * Callers:
 *     SepLinkLogonSessions @ 0x1404DA5DC (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     SeShutdownServerSilo @ 0x140815C5C (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140817E20 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x140AB84D0 (SeGetLinkedToken.c)
 *     SepStopReferencingLogonSession @ 0x140B223FC (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 */

signed __int64 __fastcall SepDeReferenceLogonSessionDirect(_QWORD *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt
  __int64 v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  _m_prefetchw(a1 + 4);
  result = a1[4];
  while ( result - 1 > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64(a1 + 4, result - 1, result);
    if ( v2 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  v3 = a1[21];
  v4 = a1[1];
  return SepDeReferenceLogonSession(&v4, v3);
}
