/*
 * XREFs of EtwpReadConfigParameters @ 0x140CE1048
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS EtwpReadConfigParameters()
{
  NTSTATUS result; // eax
  int v1; // ecx
  unsigned int v2; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v3; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v7; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v8; // [rsp+88h] [rbp-78h]
  int v9; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v10; // [rsp+98h] [rbp-68h]
  _QWORD v11[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v12; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v13)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+E8h] [rbp-18h]
  const wchar_t *v14; // [rsp+F8h] [rbp-8h]
  int *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  DestinationString = 0LL;
  v2 = 10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_10;
  memset_0(v11, 0, 0xA8uLL);
  v12 = 4;
  v11[0] = EtwpQueryRegistryCallback;
  v11[3] = &v7;
  v7 = 4;
  v11[2] = L"MaxNonPagedPoolUsage";
  v13 = EtwpQueryRegistryCallback;
  v8 = &v2;
  v16 = 4;
  v15 = &v9;
  v14 = L"StackCaptureTimeout";
  v9 = 4;
  v10 = &v3;
  if ( (int)RtlQueryRegistryValuesEx(0x40000000, (int)KeyHandle, (int)v11, 0) < 0 )
  {
LABEL_10:
    result = v2;
    v1 = v3;
    goto LABEL_11;
  }
  result = v2;
  if ( v2 <= 0x32 )
  {
    if ( v2 >= 0xA )
      goto LABEL_8;
    result = 10;
  }
  else
  {
    result = 50;
  }
  v2 = result;
LABEL_8:
  v1 = v3;
  if ( v3 > 0x2BF20 )
  {
    v1 = 180000;
    v3 = 180000;
  }
LABEL_11:
  LODWORD(ExpPlatformBinaryLock.WaitListEntry.Flink) = result;
  if ( v1 )
    EtwpStackCaptureTimeout = v1;
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
