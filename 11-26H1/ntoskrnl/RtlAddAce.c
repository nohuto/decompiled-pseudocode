/*
 * XREFs of RtlAddAce @ 0x1409E03E0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1404050D0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 * Callees:
 *     RtlpValidCompoundAce @ 0x14077FD24 (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x14077FD94 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1409E0CF0 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x1409E0E98 (RtlpValidObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  PACL v7; // r10
  USHORT *p_AclSize; // rbp
  PACL v9; // rbx
  ULONG v10; // r12d
  PACL v11; // rsi
  ULONG v12; // r14d
  int v13; // r11d
  int v14; // r9d
  ULONG AceCount; // r8d
  unsigned __int64 v16; // rdx
  USHORT *v17; // r15
  unsigned __int64 v18; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax
  ULONG v21; // edx
  ACL *v22; // r9
  PACL v23; // rcx
  unsigned __int8 v24; // al
  char *v25; // r10
  UCHAR v26; // bp
  __int16 v27; // r14
  __int64 v28; // rdx
  char *v29; // r11
  int v30; // ecx
  __int64 v31; // r8
  char *v32; // rdi
  unsigned __int8 v34; // al
  __int64 v35; // r9
  UCHAR v36; // al
  char valid; // al

  v7 = Acl;
  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return -1073741811;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return -1073741811;
  v9 = Acl + 1;
  v10 = 0;
  v11 = Acl + 1;
  v12 = 0;
  v13 = 1730048;
  v14 = 104928;
  while ( 1 )
  {
    AceCount = v7->AceCount;
    if ( v12 >= AceCount )
      break;
    v16 = (unsigned __int64)v7 + *p_AclSize;
    if ( (unsigned __int64)&v11->AceCount > v16 )
      return -1073741811;
    v17 = &v11->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v11->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v11->AclSize )
      return -1073741811;
    v18 = *v17;
    if ( (unsigned __int64)v11 + v18 > v16 )
      return -1073741811;
    AclRevision = v11->AclRevision;
    if ( (unsigned __int8)AclRevision <= 3u || (unsigned __int8)AclRevision <= 0x14u && _bittest(&v13, AclRevision) )
    {
      if ( ((v18 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        return -1073741811;
      if ( (unsigned int)v18 < 0x10 )
        return -1073741811;
      if ( v11[1].AclRevision != 1 )
        return -1073741811;
      Sbz1 = v11[1].Sbz1;
      if ( (unsigned __int8)Sbz1 > 0xFu || v18 < 4 * Sbz1 + 16 )
        return -1073741811;
    }
    else if ( (_BYTE)AclRevision == 4 )
    {
      if ( v7->AclRevision < 3u || !RtlpValidCompoundAce((__int64)v11) )
        return -1073741811;
    }
    else
    {
      if ( (unsigned __int8)AclRevision <= 0x10u && _bittest(&v14, AclRevision) )
      {
        if ( v7->AclRevision < 4u )
          return -1073741811;
        valid = RtlpValidObjectAce(v11);
        goto LABEL_48;
      }
      if ( (_BYTE)AclRevision == 18 )
      {
        valid = RtlpValidAttributeAce(v11);
LABEL_48:
        if ( !valid )
          return -1073741811;
        v7 = Acl;
        v14 = 104928;
        v13 = 1730048;
        goto LABEL_15;
      }
      if ( (_BYTE)AclRevision == 21 )
      {
        if ( !RtlpValidAccessFilterAce((__int64)v11) )
          return -1073741811;
      }
      else if ( (unsigned int)v18 < 4 )
      {
        return -1073741811;
      }
    }
LABEL_15:
    v11 = (PACL)((char *)v11 + *v17);
    ++v12;
  }
  v21 = 0;
  v22 = (PACL)((char *)v7 + *p_AclSize);
  v23 = v9;
  while ( v21 < AceCount )
  {
    if ( v23 >= v22 )
      return -1073741811;
    ++v21;
    v23 = (PACL)((char *)v23 + v23->AclSize);
  }
  v24 = v7->AclRevision;
  v25 = (char *)AceList;
  if ( v23 > v22 )
    v23 = 0LL;
  v26 = AceRevision;
  v27 = 0;
  v28 = AceListLength;
  v29 = (char *)AceList + AceListLength;
  if ( (unsigned __int8)AceRevision <= v24 )
    v26 = v24;
  while ( v25 < v29 )
  {
    v34 = *v25;
    if ( (unsigned __int8)*v25 > 3u )
    {
      if ( v34 <= 4u )
      {
        if ( AceRevision < 3 )
          return -1073741811;
      }
      else if ( v34 <= 8u )
      {
        if ( AceRevision < 4 )
          return -1073741811;
      }
      else if ( !*((_WORD *)v25 + 1) )
      {
        return -1073741811;
      }
    }
    v25 += *((unsigned __int16 *)v25 + 1);
    ++v27;
  }
  if ( v25 > v29 )
    return -1073741811;
  if ( !v23 || (PACL)((char *)v23 + AceListLength) > v22 )
    return -1073741789;
  if ( StartingAceIndex )
  {
    do
    {
      if ( v10 >= AceCount )
        break;
      ++v10;
      v9 = (PACL)((char *)v9 + v9->AclSize);
    }
    while ( v10 < StartingAceIndex );
  }
  v30 = (_DWORD)v23 - (_DWORD)v9 - 1;
  v31 = v30;
  if ( v30 >= 0 )
  {
    v35 = v30 + AceListLength;
    do
    {
      v36 = *(&v9->AclRevision + v31--);
      *(&v9->AclRevision + v35) = v36;
      v35 = (unsigned int)(v35 - 1);
    }
    while ( v31 >= 0 );
  }
  if ( AceListLength )
  {
    v32 = (char *)((_BYTE *)AceList - (_BYTE *)v9);
    do
    {
      v9->AclRevision = *(&v9->AclRevision + (_QWORD)v32);
      v9 = (PACL)((char *)v9 + 1);
      --v28;
    }
    while ( v28 );
  }
  Acl->AceCount += v27;
  Acl->AclRevision = v26;
  return 0;
}
