/*
 * XREFs of PspGetJobSilo @ 0x14043D870
 * Callers:
 *     PsGetProcessSilo @ 0x14043D780 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x14043D7E0 (PsGetJobSilo.c)
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     CmpParseKey @ 0x1408CB3F0 (CmpParseKey.c)
 *     PsGetParentSilo @ 0x140978D70 (PsGetParentSilo.c)
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
