/*
 * XREFs of sub_14006E658 @ 0x14006E658
 * Callers:
 *     sub_14006E36C @ 0x14006E36C (sub_14006E36C.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14006E658(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // r14d
  int v4; // eax
  __int128 v5; // xmm1
  void *KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v12; // [rsp+D8h] [rbp-30h]
  char DstBuf[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v14; // [rsp+F8h] [rbp-10h]
  int v15; // [rsp+108h] [rbp+0h]
  char v16; // [rsp+10Ch] [rbp+4h]
  _BYTE KeyValueInformation[4]; // [rsp+118h] [rbp+10h] BYREF
  int v18; // [rsp+11Ch] [rbp+14h]
  int v19; // [rsp+120h] [rbp+18h]
  UUID v20; // [rsp+124h] [rbp+1Ch]

  *(_OWORD *)a1 = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v2 = *(_QWORD *)&Uuid.Data1;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v3 = 0;
  v15 = 0;
  v16 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 32);
  ValueName = 0LL;
  v12 = 0LL;
  *(_OWORD *)DstBuf = 0LL;
  v14 = 0LL;
  if ( !*(_QWORD *)&Uuid.Data1 )
    v2 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v12 + 1);
  if ( v2 )
    goto LABEL_15;
  if ( byte_1401688A0 )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"NvmeHostUuid");
    v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ResultLength);
    if ( v3 < 0 )
    {
      v3 = ExUuidCreate(&Uuid);
      if ( v3 >= 0 )
        v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, &Uuid, 0x10u);
    }
    else if ( v18 == 3 && v19 == 16 )
    {
      Uuid = v20;
    }
    else
    {
      v3 = -1073739509;
    }
    byte_1401688A0 = 1;
    ZwClose(KeyHandle);
    if ( v3 >= 0 )
    {
LABEL_15:
      sprintf_s(
        DstBuf,
        0x25uLL,
        "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
        Uuid.Data1,
        Uuid.Data2,
        Uuid.Data3,
        Uuid.Data4[0],
        Uuid.Data4[1],
        Uuid.Data4[2],
        Uuid.Data4[3],
        Uuid.Data4[4],
        Uuid.Data4[5],
        Uuid.Data4[6],
        Uuid.Data4[7]);
      v4 = v15;
      v5 = v14;
      *(_OWORD *)a1 = *(_OWORD *)DstBuf;
      *(_OWORD *)(a1 + 16) = v5;
      *(_DWORD *)(a1 + 32) = v4;
    }
  }
  return (unsigned int)v3;
}
