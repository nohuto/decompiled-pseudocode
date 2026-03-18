/*
 * XREFs of SepDeReferenceLogonSessionDirect @ 0x140476B90
 * Callers:
 *     SepLinkLogonSessions @ 0x1404E0EFC (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063B1C0 (SepOneWayLinkLogonSessionsEx.c)
 *     SeShutdownServerSilo @ 0x1408101CC (SeShutdownServerSilo.c)
 *     SeSetSessionIdTokenWithLinked @ 0x140812090 (SeSetSessionIdTokenWithLinked.c)
 *     SepSetServerSiloToken @ 0x14081221C (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x140AB6E90 (SeGetLinkedToken.c)
 *     SepStopReferencingLogonSession @ 0x140B1FFDC (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
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
