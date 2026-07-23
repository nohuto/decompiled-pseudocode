/*
 * XREFs of RtlAddResourceAttributeAce @ 0x140808EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140809440 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttribute @ 0x140809788 (RtlpValidAttribute.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140903B10 (RtlValidAcl.c)
 *     RtlCopySid @ 0x140A3DEA0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x140A50810 (RtlFirstFreeAce.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  NTSTATUS v11; // ebx
  BOOLEAN valid; // al
  __int64 v13; // r8
  int v14; // ecx
  __int64 AclRevision; // rdx
  PCLAIM_SECURITY_ATTRIBUTE_V1 pAttributeV1; // rdi
  DWORD i; // ebx
  DWORD AttributeCount; // eax
  _BYTE *v19; // rdi
  __int64 Pool2; // rax
  size_t v21; // r12
  USHORT v22; // cx
  ULONG v23; // ecx
  PACL v24; // rdx
  unsigned int j; // r8d
  __int64 v26; // r8
  _WORD *v27; // rsi
  ULONG v28; // edx
  char v29; // al
  UCHAR v31; // [rsp+28h] [rbp-E0h]
  USHORT pusResult[2]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int Size; // [rsp+34h] [rbp-D4h] BYREF
  ULONG Size_4; // [rsp+38h] [rbp-D0h]
  PVOID FirstFree; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  memset_0(Src, 0, sizeof(Src));
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  valid = RtlValidSid(Sid);
  v13 = 0LL;
  if ( !valid )
    return -1073741704;
  v14 = *(_DWORD *)((char *)Sid + 2);
  if ( !v14 )
    v14 = *((unsigned __int16 *)Sid + 3) - 256;
  if ( v14 || *((_BYTE *)Sid + 1) != 1 || *((_DWORD *)Sid + 2) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = (unsigned __int8)AceRevision;
  v31 = AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0
    || AccessMask
    || !AttributeInfo
    || AttributeInfo->Version != 1
    || AttributeInfo->Reserved
    || !AttributeInfo->AttributeCount )
  {
    return -1073741811;
  }
  pAttributeV1 = AttributeInfo->Attribute.pAttributeV1;
  for ( i = 0; ; ++i )
  {
    AttributeCount = AttributeInfo->AttributeCount;
    if ( i >= AttributeCount )
      break;
    if ( !(unsigned __int8)RtlpValidAttribute(pAttributeV1, AclRevision, v13) )
      return -1073741811;
    ++pAttributeV1;
  }
  if ( AttributeCount != 1 )
    return -1073741811;
  v19 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Src, &Size);
  if ( v11 == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x41uLL);
    v19 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return -1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(AttributeInfo->Attribute.pAttributeV1, Pool2, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
    {
      v21 = Size;
      v22 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
      pusResult[0] = v22;
      if ( Size > 0xFFFF || RtlUShortAdd(v22, Size, pusResult) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v23 = 8;
        v24 = Acl + 1;
        *ReturnLength = 8;
        for ( j = 0; j < Acl->AceCount; v24 = (PACL)((char *)v24 + v24->AclSize) )
        {
          ++j;
          v23 += v24->AclSize;
          *ReturnLength = v23;
        }
        v26 = pusResult[0];
        v27 = FirstFree;
        v28 = v23 + pusResult[0];
        *ReturnLength = v28;
        if ( v27 && (char *)v27 + v26 <= (char *)Acl + Acl->AclSize )
        {
          v29 = Size_4;
          v27[1] = v26;
          *((_BYTE *)v27 + 1) = v29;
          *(_BYTE *)v27 = 18;
          *((_DWORD *)v27 + 1) = 0;
          RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v27 + 4, Sid);
          memmove(&v27[2 * *((unsigned __int8 *)Sid + 1) + 8], v19, v21);
          ++Acl->AceCount;
          Acl->AclRevision = v31;
        }
        else
        {
          v11 = -1073741671;
          *ReturnLength = (v28 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v19 && v19 != Src )
    ExFreePoolWithTag(v19, 0);
  return v11;
}
