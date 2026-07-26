/*
 * XREFs of ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x140069AD0
 * Callers:
 *     ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1400698E0 (-ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z.c)
 *     ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x140141D40 (-ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisBuildDeviceAcl(struct _ACL **a1, char a2)
{
  _DWORD *v2; // r14
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v5; // edi
  int v6; // esi
  int v7; // ebp
  ULONG v8; // edi
  ULONG v9; // edi
  ULONG v10; // eax
  int v11; // r15d
  ULONG v12; // eax
  void *Pool2; // rax
  NTSTATUS Acl; // edi
  int v16; // r12d
  int v17; // r13d
  ULONG v18; // eax
  void *v19; // rax
  PSID v20; // rsi
  _DWORD *v21; // rcx
  int v22; // ebx
  ACL *v23; // rax
  ACL *v24; // r14
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-68h] BYREF
  ULONG v26; // [rsp+24h] [rbp-64h]
  PSID Sid; // [rsp+28h] [rbp-60h]
  PSID v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+38h] [rbp-50h]
  struct _ACL **v30; // [rsp+40h] [rbp-48h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0LL;
  v30 = a1;
  v28 = 0LL;
  Sid = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  AccessMask = 0x10000000;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v5 = RtlLengthSid(SeExports->SeAliasAdminsSid) + 16;
  v26 = v5;
  v29 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    v5 += RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
    v26 = v5;
  }
  v6 = a2 & 8;
  if ( (a2 & 8) != 0 )
  {
    v5 += RtlLengthSid(SeExports->SeNetworkServiceSid) + 8;
    v26 = v5;
  }
  v7 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v8 = RtlLengthSid(&unk_1400FE358);
    v9 = RtlLengthSid(&unk_1400FE378) + v8;
    v10 = RtlLengthSid(&unk_1400FE398);
    v5 = v9 + v10 + v26 + 32;
  }
  v11 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v12 = RtlLengthRequiredSid(2u);
    Pool2 = (void *)ExAllocatePool2(64LL, v12, 1935885390LL);
    v28 = Pool2;
    v2 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 2u) )
    {
      Acl = -1073741670;
LABEL_45:
      ExFreePoolWithTag(v2, 0);
      return (unsigned int)Acl;
    }
    v2[2] = 32;
    v2[3] = 556;
    v5 += RtlLengthSid(v2) + 8;
  }
  v16 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
    v5 += RtlLengthSid(SeExports->SeLocalServiceSid) + 8;
  v17 = a2 & 0x40;
  if ( (a2 & 0x40) != 0 )
  {
    v18 = RtlLengthRequiredSid(2u);
    v19 = (void *)ExAllocatePool2(64LL, v18, 1819296846LL);
    Sid = v19;
    if ( !v19 )
    {
      Acl = -1073741670;
      goto LABEL_44;
    }
    if ( RtlInitializeSid(v19, &IdentifierAuthority, 2u) )
    {
      v20 = Sid;
      Acl = -1073741670;
LABEL_43:
      ExFreePoolWithTag(v20, 0);
      goto LABEL_44;
    }
    v21 = Sid;
    *((_DWORD *)Sid + 2) = 32;
    v21[3] = 559;
    v5 += RtlLengthSid(v21) + 8;
  }
  v22 = a2 & 0x80;
  if ( v22 )
    v5 += RtlLengthSid(&unk_1400FE338) + 8;
  v23 = (ACL *)ExAllocatePool2(64LL, v5, 1702052942LL);
  v24 = v23;
  if ( v23 )
  {
    memset(v23, 0, v5);
    Acl = RtlCreateAcl(v24, v5, 2u);
    if ( Acl >= 0 )
    {
      RtlAddAccessAllowedAce(v24, 2u, AccessMask, SeExports->SeAliasAdminsSid);
      if ( v29 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, SeExports->SeLocalSystemSid);
      if ( v6 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, SeExports->SeNetworkServiceSid);
      if ( v7 )
      {
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, &unk_1400FE398);
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, &unk_1400FE378);
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, &unk_1400FE358);
      }
      if ( v11 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, v28);
      if ( v16 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, SeExports->SeLocalServiceSid);
      v20 = Sid;
      if ( v17 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, Sid);
      if ( v22 )
        RtlAddAccessAllowedAce(v24, 2u, AccessMask, &unk_1400FE338);
      Acl = 0;
      *v30 = v24;
    }
    else
    {
      ExFreePoolWithTag(v24, 0);
      v20 = Sid;
    }
  }
  else
  {
    v20 = Sid;
    Acl = -1073741670;
  }
  v2 = v28;
  if ( v20 )
    goto LABEL_43;
LABEL_44:
  if ( v2 )
    goto LABEL_45;
  return (unsigned int)Acl;
}
