/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x18007C310
 * Callers:
 *     LdrpResolveDllName @ 0x18007BF80 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x18007D9B0 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     ZwQueryAttributesFile @ 0x18015F5E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall LdrpGetNtPathFromDosPath(__m128i *a1, _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  _UNICODE_STRING *Buffer; // rcx
  _UNICODE_STRING v5; // xmm0
  ULONG v6; // eax
  _UNICODE_STRING *v7; // [rsp+40h] [rbp-88h] BYREF
  _UNICODE_STRING v8; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp-40h] BYREF

  v7 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v8 = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  result = RtlpDosPathNameToRelativeNtPathName(1, a1, &a2->Length, &v8.Length, &v7, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( v7 == &v8 )
    {
      Buffer = (_UNICODE_STRING *)a2->Buffer;
      if ( &a2[1] != Buffer )
        RtlpSysVolFree(Buffer);
      v5 = v8;
      a2[1].Length = 0;
      *a2 = v5;
    }
    v6 = 64;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v6 = 2112;
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Attributes = v6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
  }
  return result;
}
