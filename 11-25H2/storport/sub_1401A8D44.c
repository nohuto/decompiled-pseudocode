/*
 * XREFs of sub_1401A8D44 @ 0x1401A8D44
 * Callers:
 *     sub_1401AE748 @ 0x1401AE748 (sub_1401AE748.c)
 * Callees:
 *     _wcsnicmp @ 0x14005655A (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

char __fastcall sub_1401A8D44(HANDLE KeyHandle, PVOID *a2)
{
  unsigned int v4; // eax
  CHAR *Pool2; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  struct _STRING v9; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp-90h] BYREF
  int v12; // [rsp+74h] [rbp-8Ch]
  int v13; // [rsp+78h] [rbp-88h]
  unsigned int Size; // [rsp+7Ch] [rbp-84h]
  unsigned int Size_4; // [rsp+80h] [rbp-80h]
  wchar_t Str1[246]; // [rsp+84h] [rbp-7Ch] BYREF

  ResultLength = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DriverParameter");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || v12 == 4 && Size > 0xF6 )
  {
    return 0;
  }
  if ( wcsnicmp(Str1, L"DriverParameter", (unsigned __int64)Size_4 >> 1) )
    return 0;
  v4 = Size;
  if ( !Size )
    return 0;
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0);
    v4 = Size;
  }
  Pool2 = (CHAR *)ExAllocatePool2(64LL, v4, 1884122192LL);
  *a2 = Pool2;
  if ( !Pool2 )
    return 0;
  if ( v12 == 1 )
  {
    v9.Buffer = Pool2;
    SourceString.Buffer = (PWSTR)&KeyValueInformation[v13];
    SourceString.Length = Size;
    SourceString.MaximumLength = Size;
    v9.Length = 0;
    v9.MaximumLength = Size;
    if ( RtlUnicodeStringToAnsiString(&v9, &SourceString, 0) < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
    }
  }
  else
  {
    memmove(Pool2, &KeyValueInformation[v13], Size);
  }
  return 1;
}
