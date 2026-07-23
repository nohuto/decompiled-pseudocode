/*
 * XREFs of RtlNewInstanceSecurityObject @ 0x180139F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180048C20 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x18015F260 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlNewInstanceSecurityObject(
        BOOLEAN ParentDescriptorChanged,
        BOOLEAN CreatorDescriptorChanged,
        PLUID OldClientTokenModifiedId,
        PLUID NewClientTokenModifiedId,
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE TokenHandle,
        PGENERIC_MAPPING GenericMapping)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+50h] [rbp-78h] BYREF
  GENERIC_MAPPING *v16; // [rsp+58h] [rbp-70h]
  _OWORD v17[3]; // [rsp+60h] [rbp-68h] BYREF
  _LUID v18; // [rsp+90h] [rbp-38h]

  v16 = GenericMapping;
  memset(v17, 0, sizeof(v17));
  ReturnLength = 0;
  v18 = 0LL;
  result = NtQueryInformationToken(TokenHandle, 0xAu, v17, 0x38u, &ReturnLength);
  if ( result >= 0 )
  {
    *NewClientTokenModifiedId = v18;
    if ( NewClientTokenModifiedId->LowPart != OldClientTokenModifiedId->LowPart
      || NewClientTokenModifiedId->HighPart != OldClientTokenModifiedId->HighPart
      || ParentDescriptorChanged
      || CreatorDescriptorChanged )
    {
      return RtlpNewSecurityObject(
               (__int64)ParentDescriptor,
               CreatorDescriptor,
               NewDescriptor,
               0LL,
               0,
               IsDirectoryObject,
               0,
               TokenHandle,
               v16);
    }
    else
    {
      *NewDescriptor = 0LL;
      return 0;
    }
  }
  return result;
}
