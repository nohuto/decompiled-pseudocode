/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x140B023AC
 * Callers:
 *     PspApplyMitigationOptions @ 0x140964120 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1404D6408 (SeTokenSetRedirectionTrustPolicy.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v6; // rbx

  v6 = PsReferencePrimaryTokenWithTag(a1, 0x79517350u, a3, a4);
  SeTokenSetRedirectionTrustPolicy(v6, a2 == 2);
  return ObFastDereferenceObject((signed __int64 *)(a1 + 584), v6, 0x79517350u);
}
