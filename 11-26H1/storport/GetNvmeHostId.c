/*
 * XREFs of GetNvmeHostId @ 0x140075074
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x14007BC80 (StorPortNvmeofExtendedFunction.c)
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E89E8 (NvmeAdapterFabricRegisterDeregisterHost.c)
 *     BuildNvmeConnectData @ 0x140118D88 (BuildNvmeConnectData.c)
 *     NvmeAdapterGetHostInformation @ 0x14019BCB0 (NvmeAdapterGetHostInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall GetNvmeHostId(_OWORD *a1)
{
  NTSTATUS v2; // ebx
  void *KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ValueName; // [rsp+40h] [rbp-C8h] BYREF
  struct _UNICODE_STRING ValueName_8; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int128 Buf2; // [rsp+98h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+ACh] [rbp-5Ch]
  int v12; // [rsp+B0h] [rbp-58h]
  UUID v13; // [rsp+B4h] [rbp-54h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  *a1 = 0LL;
  ValueName = 0;
  DestinationString_8 = 0LL;
  v2 = 0;
  ValueName_8 = 0LL;
  Buf2 = 0LL;
  if ( memcmp(&NvmeHostId, &Buf2, 0x10uLL) )
    goto LABEL_13;
  if ( NvmeHostIdChecked )
    return (unsigned int)-1073741275;
  RtlInitUnicodeString(&DestinationString_8, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&ValueName_8, L"NvmeHostId");
    v2 = ZwQueryValueKey(KeyHandle, &ValueName_8, KeyValuePartialInformation, KeyValueInformation, 0x110u, &ValueName);
    if ( v2 < 0 )
    {
      v2 = ExUuidCreate(&NvmeHostId);
      if ( v2 >= 0 )
        v2 = ZwSetValueKey(KeyHandle, &ValueName_8, 0, 3u, (PVOID)&NvmeHostId, 0x10u);
    }
    else if ( v11 == 3 && v12 == 16 )
    {
      NvmeHostId = v13;
    }
    else
    {
      v2 = -1073739509;
    }
    NvmeHostIdChecked = 1;
    ZwClose(KeyHandle);
    if ( v2 >= 0 )
LABEL_13:
      *a1 = NvmeHostId;
  }
  return (unsigned int)v2;
}
