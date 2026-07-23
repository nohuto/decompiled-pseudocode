/*
 * XREFs of PspGetJobSilo @ 0x140430120
 * Callers:
 *     PsGetProcessSilo @ 0x140430030 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x1408D19A0 (CmpParseKey.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  for ( ; a1; a1 = *(_QWORD *)(a1 + 1304) )
  {
    if ( (*(_DWORD *)(a1 + 1552) & 0x40000000) != 0 )
      break;
  }
  return a1;
}
