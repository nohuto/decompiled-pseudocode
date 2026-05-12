/*
 * XREFs of RaidpIsControlledUpdateOSEnvironment @ 0x1400AE228
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

char RaidpIsControlledUpdateOSEnvironment()
{
  char v0; // bl
  WCHAR *v1; // rsi
  WCHAR *i; // rdi
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v9[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v11; // [rsp+CCh] [rbp-3Ch]
  unsigned int v12; // [rsp+D0h] [rbp-38h]
  WCHAR SourceString[258]; // [rsp+D4h] [rbp-34h] BYREF

  v0 = 0;
  *(_QWORD *)&String1.Length = 2097182LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  String2 = 0LL;
  String1.Buffer = (wchar_t *)v9;
  v9[0] = *(_OWORD *)L"OneCoreUpdateOS";
  v9[1] = *(_OWORD *)L"pdateOS";
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProductSuite");
    memset_0(KeyValueInformation, 0, 0x210uLL);
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           ResultLength) >= 0
      && v11 == 7 )
    {
      v1 = (WCHAR *)((char *)SourceString + v12);
      for ( i = SourceString; i < v1 && *i; i += ((unsigned __int64)String2.Length >> 1) + 1 )
      {
        RtlInitUnicodeString(&String2, i);
        if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          v0 = 1;
          break;
        }
      }
    }
    ZwClose(DestinationString[0]);
  }
  return v0;
}
