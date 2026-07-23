/*
 * XREFs of AdtpDbInitializePrivilegeObject @ 0x14071A3D0
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140897138 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 */

__int64 AdtpDbInitializePrivilegeObject()
{
  __int64 v0; // rbx
  const WCHAR **v1; // rsi
  _QWORD *v2; // rdi
  const WCHAR *v3; // rdx

  v0 = 0LL;
  AdtpWellKnownPrivilegeMaxLen = 0;
  v1 = (const WCHAR **)off_14000F260;
  v2 = &AdtpKnownPrivilege;
  do
  {
    v3 = *v1;
    v2[2] = (int)v0 + 2;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)&AdtpKnownPrivilege + 24 * v0), v3);
    if ( (unsigned __int16)AdtpWellKnownPrivilegeMaxLen < *(_WORD *)v2 )
      AdtpWellKnownPrivilegeMaxLen = *(_WORD *)v2;
    v0 = (unsigned int)(v0 + 1);
    ++v1;
    v2 += 3;
  }
  while ( (unsigned int)v0 < 0x23 );
  return 0LL;
}
