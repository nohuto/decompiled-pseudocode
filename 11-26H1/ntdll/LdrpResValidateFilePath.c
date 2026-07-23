/*
 * XREFs of LdrpResValidateFilePath @ 0x1800D6278
 * Callers:
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlDetermineDosPathNameType_U @ 0x18009AC80 (RtlDetermineDosPathNameType_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A6E00 (LdrpTraceLoadMUIDll.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D64C0 (RtlDosPathNameToNtPathName_U.c)
 *     ZwQueryAttributesFile @ 0x18015F5E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpResValidateFilePath(PCWSTR DosFileName)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  NTSTATUS v6; // edi
  RTL_PATH_TYPE v7; // edx
  wchar_t *Buffer; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-98h] BYREF
  RTL_PATH_TYPE v12; // [rsp+40h] [rbp-88h]
  _UNICODE_STRING NtFileName; // [rsp+48h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-70h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+88h] [rbp-40h] BYREF

  memset(&ObjectAttributes, 0, 44);
  NtFileName = 0LL;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v10[0] = 3932218LL;
  v10[1] = L"LdrpResValidateFilePath Enter";
  v11[0] = 3801144LL;
  v11[1] = L"LdrpResValidateFilePath Exit";
  v2 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v3 = 2147353477LL;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v4 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v5 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v10, *(unsigned __int8 *)v5);
  }
  else
  {
    v4 = 2147353476LL;
  }
  if ( !DosFileName
    || (v7 = RtlDetermineDosPathNameType_U(DosFileName), v12 = v7, ((v7 - 1) & 0xFFFFFFFA) != 0)
    || v7 == RtlPathTypeRelative )
  {
    v6 = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U(DosFileName, &NtFileName, 0LL, 0LL) )
  {
    Buffer = NtFileName.Buffer;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v6 >= 0 )
      v6 = (FileInformation.FileAttributes & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    v6 = -1073741766;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v11, *(unsigned __int8 *)v4);
  }
  return (unsigned int)v6;
}
