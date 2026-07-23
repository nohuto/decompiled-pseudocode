/*
 * XREFs of EtwpGetCurrentSiloMaxLoggers @ 0x1406C759C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1406C7840 (EtwpGetPmcSessions.c)
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
 */

__int64 EtwpGetCurrentSiloMaxLoggers()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v3; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v4; // [rsp+78h] [rbp-31h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 128;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset_0(&QueryTable, 0, 0x70uLL);
    QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback;
    QueryTable.EntryContext = &v3;
    QueryTable.Name = L"EtwMaxLoggers";
    QueryTable.DefaultType = 4;
    v3 = 4;
    v4 = &v6;
    RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, &QueryTable, 0LL, 0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
