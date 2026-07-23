/*
 * XREFs of DbgkpLkmdSqmIsOptedIn @ 0x14078E700
 * Callers:
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 */

bool DbgkpLkmdSqmIsOptedIn()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v8; // [rsp+B0h] [rbp+47h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v8 = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v4[0] = 8388734LL;
  v4[1] = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\SQMClient\\Windows";
  v5[0] = 7209068LL;
  v5[1] = L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows";
  *(_QWORD *)&ValueName.Length = 1441812LL;
  ValueName.Buffer = L"CEIPEnable";
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v4;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      goto LABEL_4;
    }
    ZwClose(KeyHandle);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v5;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
LABEL_4:
      ZwClose(KeyHandle);
      return HIDWORD(KeyValueInformation) == 1;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
