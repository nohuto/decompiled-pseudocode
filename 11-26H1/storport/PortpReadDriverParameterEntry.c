/*
 * XREFs of PortpReadDriverParameterEntry @ 0x1401B1130
 * Callers:
 *     PortGetDriverParameters @ 0x1401B7030 (PortGetDriverParameters.c)
 * Callees:
 *     _wcsnicmp_0 @ 0x14005D08D (_wcsnicmp_0.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

char __fastcall PortpReadDriverParameterEntry(HANDLE KeyHandle, PVOID *a2)
{
  unsigned int v4; // eax
  char *Pool2; // rax
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
  if ( wcsnicmp_0(Str1, L"DriverParameter", (unsigned __int64)Size_4 >> 1) )
    return 0;
  v4 = Size;
  if ( !Size )
    return 0;
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0);
    v4 = Size;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, v4, 1884122192LL);
  *a2 = Pool2;
  if ( !Pool2 )
    return 0;
  if ( v12 == 1 )
  {
    v9.Buffer = Pool2;
    SourceString.Buffer = (wchar_t *)&KeyValueInformation[v13];
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
