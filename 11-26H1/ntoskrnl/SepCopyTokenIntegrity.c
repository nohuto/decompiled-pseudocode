/*
 * XREFs of SepCopyTokenIntegrity @ 0x14043A480
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402FB610 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryTokenIntegrity @ 0x14043A468 (SeQueryTokenIntegrity.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140904C94 (SeTokenCanImpersonate.c)
 *     SepAdjustPrivileges @ 0x1409E1914 (SepAdjustPrivileges.c)
 *     SepCopyTokenLoggingInformation @ 0x140A4ECB4 (SepCopyTokenLoggingInformation.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB8FC4 (SeIsTokenAssignableToProcess.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SepCopyTokenIntegrity(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 208);
  if ( v2 == -1 || (result = (_DWORD *)(16LL * v2 + *(_QWORD *)(a1 + 152))) == 0LL )
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)a2 = SeUntrustedMandatorySid;
    *(_DWORD *)(a2 + 8) = 96;
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)result;
    *(_DWORD *)(a2 + 8) = result[2];
  }
  return result;
}
