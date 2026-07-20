/*
 * XREFs of SmpProcessModuleImports @ 0x1400086D0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140008890 (SmpSaveRegistryValue_U.c)
 *     ApiSetResolveToHost @ 0x140008B40 (ApiSetResolveToHost.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

int __fastcall SmpProcessModuleImports(_QWORD *a1, const char *a2)
{
  int result; // eax
  WCHAR *v5; // rax
  struct _UNICODE_STRING *v6; // rdx
  char v7; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  _STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  char v11; // [rsp+70h] [rbp-90h] BYREF

  v7 = 0;
  DestinationString = 0LL;
  v9 = 0LL;
  result = _stricmp(a2, "ntdll.dll");
  if ( result )
  {
    result = _stricmp(a2, "ntdll32.dll");
    if ( result )
    {
      RtlInitAnsiString(&DestinationString, a2);
      *(_QWORD *)&v8.Length = 34209792LL;
      v8.Buffer = (PWSTR)&v11;
      result = RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
      if ( result >= 0 )
      {
        result = ApiSetResolveToHost(
                   *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 104LL),
                   (unsigned int)&v8,
                   *a1,
                   (unsigned int)&v7,
                   (__int64)&v9);
        if ( result >= 0 )
        {
          if ( v7 )
          {
            if ( !v9.Length )
              return result;
            v8 = v9;
          }
          v5 = (PWSTR)((char *)v8.Buffer + v8.Length - 2);
          if ( v5 < v8.Buffer )
            goto LABEL_13;
          while ( *v5 != 46 )
          {
            if ( --v5 < v8.Buffer )
              goto LABEL_13;
          }
          if ( v5 < v8.Buffer )
          {
LABEL_13:
            v6 = &v8;
          }
          else
          {
            *(&v9.MaximumLength + 2) = 0;
            v6 = &v9;
            v9.Buffer = v8.Buffer;
            *(_DWORD *)&v9.MaximumLength = (unsigned __int16)(2 * (v5 - v8.Buffer));
            v9.Length = 2 * (v5 - v8.Buffer);
          }
          return SmpSaveRegistryValue_U(a1[1], v6, &v8, 1LL, 0LL);
        }
      }
    }
  }
  return result;
}
