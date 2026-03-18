/*
 * XREFs of EtwpGetCurrentSiloMaxLoggers @ 0x1406C395C
 * Callers:
 *     EtwpGetPmcSessions @ 0x1406C3C00 (EtwpGetPmcSessions.c)
 *     PspInitializeServerSiloDeferred @ 0x1407EF070 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 */

__int64 EtwpGetCurrentSiloMaxLoggers()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v3; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v4; // [rsp+78h] [rbp-31h]
  _QWORD v5[4]; // [rsp+90h] [rbp-19h] BYREF
  int v6; // [rsp+B0h] [rbp+7h]
  unsigned int v7; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v7 = 128;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset_0(v5, 0, 0x70uLL);
    v5[0] = &EtwpQueryRegistryCallback;
    v5[3] = &v3;
    v5[2] = L"EtwMaxLoggers";
    v6 = 4;
    v3 = 4;
    v4 = &v7;
    RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v5, 0LL, 0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
