/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14045D270
 * Callers:
 *     SepCopyTokenAccessInformation @ 0x140A33488 (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
