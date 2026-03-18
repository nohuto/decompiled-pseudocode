/*
 * XREFs of SepCopyTokenIntegrity @ 0x140441970
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1403C9DD0 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeQueryTokenIntegrity @ 0x140441958 (SeQueryTokenIntegrity.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     SeTokenCanImpersonate @ 0x140929184 (SeTokenCanImpersonate.c)
 *     SepCopyTokenLoggingInformation @ 0x140A33D54 (SepCopyTokenLoggingInformation.c)
 *     SepAdjustPrivileges @ 0x140A429A4 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140AB7984 (SeIsTokenAssignableToProcess.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
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
