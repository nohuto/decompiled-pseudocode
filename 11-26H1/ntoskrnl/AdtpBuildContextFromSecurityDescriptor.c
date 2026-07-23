/*
 * XREFs of AdtpBuildContextFromSecurityDescriptor @ 0x1404FCAD4
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14041F320 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     SeRmReferenceFindCapName @ 0x1404FCB34 (SeRmReferenceFindCapName.c)
 *     AdtpGetCapID @ 0x140530BFC (AdtpGetCapID.c)
 */

__int64 __fastcall AdtpBuildContextFromSecurityDescriptor(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 result; // rax
  PSID Sid1; // [rsp+30h] [rbp+8h] BYREF

  *a2 = a1;
  v2 = a2 + 1;
  v3 = a2 + 2;
  Sid1 = 0LL;
  result = AdtpGetCapID(a1, &Sid1);
  if ( (int)result < 0 || (result = SeRmReferenceFindCapName(Sid1), (int)result < 0) )
  {
    *v2 = 0;
    *v3 = 0LL;
  }
  return result;
}
