/*
 * XREFs of EtwpReadConfigParameters @ 0x140CE73E8
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
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
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v12)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+E8h] [rbp-18h]
  const wchar_t *v13; // [rsp+F8h] [rbp-8h]
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]

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
  memset_0(&QueryTable, 0, 0xA8uLL);
  QueryTable.DefaultType = 4;
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable.EntryContext = &v7;
  v7 = 4;
  QueryTable.Name = L"MaxNonPagedPoolUsage";
  v12 = EtwpQueryRegistryCallback;
  v8 = &v2;
  v15 = 4;
  v14 = &v9;
  v13 = L"StackCaptureTimeout";
  v9 = 4;
  v10 = &v3;
  if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, &QueryTable, 0LL, 0LL) < 0 )
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
