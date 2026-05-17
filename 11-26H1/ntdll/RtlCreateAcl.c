/*
 * XREFs of RtlCreateAcl @ 0x18005D4F0
 * Callers:
 *     RtlpCreateServerAcl @ 0x18005AFEC (RtlpCreateServerAcl.c)
 *     RtlpComputeMergedAcl2 @ 0x18005B3C8 (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x18005B710 (RtlDefaultNpAcl.c)
 *     RtlpCombineAcls @ 0x18005DEB0 (RtlpCombineAcls.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C7DAC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x1800C8770 (RtlCreateAndSetSD.c)
 *     RtlpConvertAclToAutoInherit @ 0x180124AB8 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  *(_BYTE *)a1 = a3;
  result = 0LL;
  *(_BYTE *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  return result;
}
