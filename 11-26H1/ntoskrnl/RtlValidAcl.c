/*
 * XREFs of RtlValidAcl @ 0x140928000
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140803130 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140803440 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140803804 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408181E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081840C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140818554 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140925D80 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x140926090 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140926CB0 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409278D0 (SepCreateImpersonationTokenDacl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14094DC20 (RtlValidRelativeSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x140A2AC94 (SddlAddMandatoryAce.c)
 *     SeValidSecurityDescriptor @ 0x140A7C990 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x140AF1520 (RtlDeleteAce.c)
 * Callees:
 *     RtlpValidCompoundAce @ 0x14077D224 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077D294 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409F4FA0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409F5148 (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // rbp
  unsigned __int8 *v3; // rdi
  unsigned int v4; // esi
  int v5; // r15d
  int v6; // r12d
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) > 2u )
    return 0;
  v2 = (_WORD *)(a1 + 2);
  if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 || *v2 < 8u )
    return 0;
  v3 = (unsigned __int8 *)(a1 + 8);
  v4 = 0;
  v5 = 1730048;
  v6 = 104928;
  while ( v4 < *(unsigned __int16 *)(a1 + 4) )
  {
    v7 = a1 + (unsigned __int16)*v2;
    if ( (unsigned __int64)(v3 + 4) > v7 )
      return 0;
    v8 = (unsigned __int16 *)(v3 + 2);
    if ( (unsigned __int8 *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
      return 0;
    v9 = *v8;
    if ( (unsigned __int64)&v3[v9] > v7 )
      return 0;
    v10 = *v3;
    if ( (unsigned __int8)v10 <= 3u || (unsigned __int8)v10 <= 0x14u && _bittest(&v5, v10) )
    {
      if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
        return 0;
      if ( (unsigned int)v9 < 0x10 )
        return 0;
      if ( v3[8] != 1 )
        return 0;
      v11 = v3[9];
      if ( (unsigned __int8)v11 > 0xFu || v9 < 4 * v11 + 16 )
        return 0;
    }
    else if ( (_BYTE)v10 == 4 )
    {
      if ( *(_BYTE *)a1 < 3u || !RtlpValidCompoundAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned __int8)v10 <= 0x10u && _bittest(&v6, v10) )
    {
      if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( (_BYTE)v10 == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( (_BYTE)v10 == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    v3 += *v8;
    ++v4;
  }
  return 1;
}
