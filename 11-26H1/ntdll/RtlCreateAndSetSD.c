/*
 * XREFs of RtlCreateAndSetSD @ 0x1800C5F30
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x180139EA0 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlAddAce @ 0x1800269A0 (RtlAddAce.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlCreateAcl @ 0x180047A70 (RtlCreateAcl.c)
 *     RtlCopySid @ 0x1800C6480 (RtlCopySid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800C64C0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1800C6510 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1800C6560 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int v6; // ebx
  unsigned int v7; // r12d
  _DWORD *v8; // r14
  ULONG v9; // esi
  ULONG v10; // ebp
  ULONG i; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // eax
  ACL *Heap_0; // rax
  ACL *v16; // rdi
  ACL *v17; // r15
  ULONG j; // esi
  ACL *v19; // r15
  unsigned __int8 *v20; // r8
  ULONG AceListLength; // ebp
  ACCESS_MASK AccessMask; // edx
  UCHAR AceFlags; // al
  int InheritFlags; // ecx
  __int16 AclSize; // ax
  __int16 v26; // ax
  PVOID HeapHandle; // [rsp+30h] [rbp-58h]
  ACL *Sacl; // [rsp+38h] [rbp-50h]
  PACL Acl; // [rsp+40h] [rbp-48h]
  ULONG v31; // [rsp+98h] [rbp+10h]

  v31 = AceCount;
  Acl = 0LL;
  v6 = 0;
  Sacl = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 8;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  for ( i = 0; i < AceCount; ++i )
  {
    v12 = 4 * *((unsigned __int8 *)*AceData[i].Sid + 1);
    if ( !AceData[i].AceType || AceData[i].AceType == 1 )
    {
      v13 = v12 + 20;
      if ( v12 + 20 + v9 < v9 )
        return -1073741801;
      v9 += v12 + 20;
    }
    else
    {
      if ( AceData[i].AceType != 2 )
        return -1073741811;
      v13 = v12 + 20;
      if ( v12 + 20 + v10 < v10 )
        return -1073741801;
      v10 += v12 + 20;
    }
    AceCount = v31;
    if ( v7 > v13 )
      v13 = v7;
    v7 = v13;
  }
  v14 = 40;
  if ( v9 != 8 )
  {
    if ( v9 + 40 < 0x28 )
      return -1073741801;
    v14 = v9 + 40;
  }
  if ( v10 == 8 )
    goto LABEL_19;
  if ( v14 + v10 < v14 )
    return -1073741801;
  v14 += v10;
LABEL_19:
  Heap_0 = (ACL *)RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, v14);
  v16 = Heap_0;
  if ( !Heap_0 )
    return -1073741801;
  v17 = Heap_0 + 5;
  if ( v9 != 8 )
  {
    Acl = Heap_0 + 5;
    v17 = (ACL *)((char *)v17 + v9);
    v6 = RtlCreateAcl(Heap_0 + 5, v9, 2u);
    if ( v6 < 0 )
      goto LABEL_43;
  }
  if ( v10 != 8 )
  {
    Sacl = v17;
    v6 = RtlCreateAcl(v17, v10, 2u);
    if ( v6 < 0 )
      goto LABEL_43;
  }
  v8 = RtlAllocateHeap_0(HeapHandle, NtdllBaseTag + 1310720, v7);
  if ( !v8 )
  {
    v6 = -1073741801;
    goto LABEL_43;
  }
  for ( j = 0; j < v31; ++j )
  {
    v19 = 0LL;
    v20 = (unsigned __int8 *)*AceData[j].Sid;
    AceListLength = 4 * v20[1] + 8;
    if ( !AceData[j].AceType )
    {
      AccessMask = AceData[j].AccessMask;
      AceFlags = AceData[j].AceFlags;
      LOBYTE(InheritFlags) = AceData[j].InheritFlags;
      *(_BYTE *)v8 = 0;
      goto LABEL_29;
    }
    if ( AceData[j].AceType == 1 )
    {
      AccessMask = AceData[j].AccessMask;
      AceFlags = AceData[j].AceFlags;
      InheritFlags = AceData[j].InheritFlags;
      *(_BYTE *)v8 = 1;
LABEL_29:
      v19 = Acl;
      goto LABEL_30;
    }
    if ( AceData[j].AceType != 2 )
      goto LABEL_31;
    AccessMask = AceData[j].AccessMask;
    AceFlags = AceData[j].AceFlags;
    LOBYTE(InheritFlags) = AceData[j].InheritFlags;
    v19 = Sacl;
    *(_BYTE *)v8 = 2;
LABEL_30:
    v8[1] = AccessMask;
    *((_BYTE *)v8 + 1) = AceFlags | InheritFlags;
    AceListLength += 12;
    *((_WORD *)v8 + 1) = AceListLength;
    v6 = RtlCopySid(4 * v20[1] + 8, v8 + 2, v20);
LABEL_31:
    if ( v6 >= 0 )
    {
      v6 = RtlAddAce(v19, 2u, 0xFFFFFFFF, v8, AceListLength);
      if ( v6 >= 0 )
        continue;
    }
    goto LABEL_43;
  }
  *(_OWORD *)&v16->AclRevision = 0LL;
  *(_OWORD *)&v16[2].AclRevision = 0LL;
  v16[4] = 0LL;
  v16->AclRevision = 1;
  v6 = RtlSetOwnerSecurityDescriptor(v16, OwnerSid, 0);
  if ( v6 >= 0 )
  {
    v6 = RtlSetGroupSecurityDescriptor(v16, GroupSid, 0);
    if ( v6 >= 0 )
    {
      if ( v16->AclRevision == 1 )
      {
        AclSize = v16->AclSize;
        if ( AclSize < 0 )
        {
          v6 = -1073741703;
        }
        else
        {
          v26 = AclSize | 4;
          v16[4] = 0LL;
          if ( Acl )
            v16[4] = (ACL)Acl;
          v16->AclSize = v26 & 0xFFF7;
          v6 = RtlSetSaclSecurityDescriptor(v16, Sacl != 0LL, Sacl, 0);
          if ( v6 >= 0 )
          {
            v6 = 0;
            *NewSecurityDescriptor = v16;
            goto LABEL_44;
          }
        }
      }
      else
      {
        v6 = -1073741736;
      }
    }
  }
LABEL_43:
  RtlFreeHeap_0(HeapHandle, 0, v16);
  if ( v8 )
LABEL_44:
    RtlFreeHeap_0(HeapHandle, 0, v8);
  return v6;
}
