/*
 * XREFs of GetNvmeHostUuid @ 0x14007555C
 * Callers:
 *     GetNvmeHostNQN @ 0x140075274 (GetNvmeHostNQN.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall GetNvmeHostUuid(__int64 a1)
{
  NTSTATUS v2; // r14d
  int v3; // eax
  __int128 v4; // xmm1
  void *KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  __int128 Buf2; // [rsp+D8h] [rbp-30h] BYREF
  char DstBuf[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v13; // [rsp+F8h] [rbp-10h]
  int v14; // [rsp+108h] [rbp+0h]
  char v15; // [rsp+10Ch] [rbp+4h]
  _BYTE KeyValueInformation[4]; // [rsp+118h] [rbp+10h] BYREF
  int v17; // [rsp+11Ch] [rbp+14h]
  int v18; // [rsp+120h] [rbp+18h]
  UUID v19; // [rsp+124h] [rbp+1Ch]

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  v14 = 0;
  v15 = 0;
  ValueName = 0LL;
  Buf2 = 0LL;
  *(_OWORD *)DstBuf = 0LL;
  v13 = 0LL;
  if ( memcmp(&NvmeHostUuid, &Buf2, 0x10uLL) )
    goto LABEL_13;
  if ( NvmeHostUuidChecked )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"NvmeHostUuid");
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ResultLength);
    if ( v2 < 0 )
    {
      v2 = ExUuidCreate(&NvmeHostUuid);
      if ( v2 >= 0 )
        v2 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)&NvmeHostUuid, 0x10u);
    }
    else if ( v17 == 3 && v18 == 16 )
    {
      NvmeHostUuid = v19;
    }
    else
    {
      v2 = -1073739509;
    }
    NvmeHostUuidChecked = 1;
    ZwClose(KeyHandle);
    if ( v2 >= 0 )
    {
LABEL_13:
      sprintf_s(
        DstBuf,
        0x25uLL,
        "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
        NvmeHostUuid.Data1,
        NvmeHostUuid.Data2,
        NvmeHostUuid.Data3,
        NvmeHostUuid.Data4[0],
        NvmeHostUuid.Data4[1],
        NvmeHostUuid.Data4[2],
        NvmeHostUuid.Data4[3],
        NvmeHostUuid.Data4[4],
        NvmeHostUuid.Data4[5],
        NvmeHostUuid.Data4[6],
        NvmeHostUuid.Data4[7]);
      v3 = v14;
      v4 = v13;
      *(_OWORD *)a1 = *(_OWORD *)DstBuf;
      *(_OWORD *)(a1 + 16) = v4;
      *(_DWORD *)(a1 + 32) = v3;
    }
  }
  return (unsigned int)v2;
}
