/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x140B11760
 * Callers:
 *     PspInitializeProcessSecurity @ 0x140B80FF8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlQueryPackageIdentityEx @ 0x140459830 (RtlQueryPackageIdentityEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(void *a1, void *a2, _BYTE *a3)
{
  unsigned __int64 v4; // r14
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rdi
  NTSTATUS v10; // eax
  unsigned __int64 Flags; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v13; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR PackageSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v15; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR AppIdSize; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v19; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING String1; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR AppId[72]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR v22[72]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR PackageFullName[128]; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR SourceString[128]; // [rsp+2E0h] [rbp+1E0h] BYREF

  Flags = 0LL;
  v4 = 0LL;
  PackageSize = 256LL;
  v13 = 256LL;
  *a3 = 0;
  v12 = 0LL;
  AppIdSize = 132LL;
  v15 = 132LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  v19 = 0LL;
  v6 = RtlQueryPackageIdentityEx(a1, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL, &Flags);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v9 = 0LL;
    v7 = 0;
  }
  else
  {
    if ( v6 < 0 )
      return v7;
    v9 = Flags;
  }
  if ( !v9 )
    *a3 = 1;
  if ( !*a3 )
  {
    v10 = RtlQueryPackageIdentityEx(a2, SourceString, &v13, v22, &v15, 0LL, &v12);
    v7 = v10;
    if ( v10 == -1073741275 || v10 == -2147483643 )
    {
      v7 = 0;
    }
    else
    {
      if ( v10 < 0 )
        return v7;
      v4 = v12;
    }
  }
  if ( v4 )
  {
    if ( (((unsigned int)v4 ^ (unsigned int)v9) & 0xFFFFFFDF) != 0
      || PackageSize != v13
      || AppIdSize != v15
      || (RtlInitUnicodeString(&DestinationString, PackageFullName),
          RtlInitUnicodeString(&String1, AppId),
          RtlInitUnicodeString(&String2, SourceString),
          RtlInitUnicodeString(&v19, v22),
          !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
      || !RtlEqualUnicodeString(&String1, &v19, 1u) )
    {
      *a3 = 1;
    }
  }
  return v7;
}
