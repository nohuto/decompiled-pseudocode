/*
 * XREFs of QueryRegistryHideMachine @ 0x140D08830
 * Callers:
 *     StartFirstUserProcess @ 0x140D08548 (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1405380A0 (wcslen.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

bool QueryRegistryHideMachine()
{
  int v0; // edi
  size_t v1; // rax
  _DWORD *Pool2; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  DestinationString.Buffer = (wchar_t *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions";
  v1 = 2 * wcslen(L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  if ( v1 >= 0xFFFE )
    LOWORD(v1) = -4;
  DestinationString.Length = v1;
  DestinationString.MaximumLength = v1 + 2;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HideMachine");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 0x74696E49u);
      if ( Pool2 )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               Pool2,
               ResultLength,
               &ResultLength) >= 0
          && Pool2[1] == 4
          && Pool2[2] == 4 )
        {
          v0 = Pool2[3];
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0 != 0;
}
