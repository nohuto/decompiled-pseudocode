/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x1800DBB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x1800276F0 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v14; // rax
  unsigned int v15; // ebx

  if ( SecurityDescriptorLength < 0x14
    || *(_BYTE *)SecurityDescriptorInput != 1
    || *((__int16 *)SecurityDescriptorInput + 1) >= 0 )
  {
    return 0;
  }
  v5 = *((unsigned int *)SecurityDescriptorInput + 1);
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 < 0x14 )
      return 0;
    if ( (unsigned int)v5 >= SecurityDescriptorLength )
      return 0;
    v6 = SecurityDescriptorLength - v5;
    if ( SecurityDescriptorLength - (unsigned int)v5 < 0xC )
      return 0;
    if ( (v5 & 3) != 0 )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v5) != 1 )
      return 0;
    v7 = *((unsigned __int8 *)SecurityDescriptorInput + v5 + 1);
    if ( (unsigned __int8)v7 > 0xFu || v6 < 4 * v7 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 1) != 0 )
  {
    return 0;
  }
  v8 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 < 0x14 )
      return 0;
    if ( (unsigned int)v8 >= SecurityDescriptorLength )
      return 0;
    v9 = SecurityDescriptorLength - v8;
    if ( SecurityDescriptorLength - (unsigned int)v8 < 0xC )
      return 0;
    if ( (v8 & 3) != 0 )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v8) != 1 )
      return 0;
    v10 = *((unsigned __int8 *)SecurityDescriptorInput + v8 + 1);
    if ( (unsigned __int8)v10 > 0xFu || v9 < 4 * v10 + 8 )
      return 0;
  }
  else if ( (RequiredInformation & 2) != 0 )
  {
    return 0;
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) != 0 )
  {
    v11 = *((unsigned int *)SecurityDescriptorInput + 4);
    if ( (_DWORD)v11 )
    {
      if ( (unsigned int)v11 < 0x14 )
        return 0;
      if ( (unsigned int)v11 >= SecurityDescriptorLength )
        return 0;
      v12 = SecurityDescriptorLength - v11;
      if ( v12 < 8
        || (v11 & 3) != 0
        || v12 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v11 + 2)
        || !RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v11)) )
      {
        return 0;
      }
    }
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
    return 1;
  v14 = *((unsigned int *)SecurityDescriptorInput + 3);
  if ( !(_DWORD)v14 )
    return 1;
  if ( (unsigned int)v14 < 0x14 )
    return 0;
  if ( (unsigned int)v14 >= SecurityDescriptorLength )
    return 0;
  v15 = SecurityDescriptorLength - v14;
  if ( v15 < 8 || (v14 & 3) != 0 || v15 < *(unsigned __int16 *)((char *)SecurityDescriptorInput + v14 + 2) )
    return 0;
  return RtlValidAcl((PACL)((char *)SecurityDescriptorInput + v14)) != 0;
}
