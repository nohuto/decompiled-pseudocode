/*
 * XREFs of PipCheckForDenyExecute @ 0x140B04190
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     PnpConcatPWSTR @ 0x140953094 (PnpConcatPWSTR.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  WCHAR *v2; // rbx
  bool v3; // di
  int v4; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B8h] [rbp+38h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v3 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v4 = PnpConcatPWSTR(
           0x200uLL,
           0x47706E50u,
           (PVOID *)&SourceString,
           3LL,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage",
           L"\\",
           Str2);
    v2 = (WCHAR *)SourceString;
    if ( v4 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        if ( IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &P) >= 0 )
        {
          if ( !P )
            goto LABEL_4;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return v3;
}
