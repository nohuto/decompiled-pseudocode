/*
 * XREFs of AdtpEtwBuildDashString @ 0x140B32F30
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x14046F5C0 (AdtpBuildMultiSzStringListString.c)
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
