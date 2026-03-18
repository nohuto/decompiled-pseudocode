/*
 * XREFs of AdtpEtwBuildDashString @ 0x140B30D30
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404322F0 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x140475440 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140475E40 (AdtpBuildMultiSzStringListString.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AdtpEtwBuildDashString(_QWORD *a1)
{
  const wchar_t *result; // rax

  result = L"-";
  a1[1] = 4LL;
  *a1 = L"-";
  return result;
}
