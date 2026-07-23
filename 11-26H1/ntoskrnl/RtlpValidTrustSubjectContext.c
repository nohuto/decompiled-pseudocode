/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1403AF76C
 * Callers:
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140A6AD40 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1403AF7B0 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  NTSTATUS *v5; // r10
  NTSTATUS v6; // eax
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v5 = a4;
  DominatesTrust = 0;
  if ( !a1 || (v6 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), *v5 = v6, (result = DominatesTrust) == 0) )
    *v5 = -1073741790;
  return result;
}
