/*
 * XREFs of FastGetProfileDwordEx @ 0x1400A97B0
 * Callers:
 *     FastGetProfileDword @ 0x1400AA490 (FastGetProfileDword.c)
 *     _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1400AAA58 (_lambda_39f407e4fe10312c322b3b59a6fe001c_--operator().c)
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 *     ?UserInitialize@@YAJXZ @ 0x140135AA0 (-UserInitialize@@YAJXZ.c)
 *     ?Initialize@UIPrivilegeIsolation@@YAXXZ @ 0x1401A8BF0 (-Initialize@UIPrivilegeIsolation@@YAXXZ.c)
 *     ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401A8C5C (-TraceLegacyState@UIPrivilegeIsolation@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int __fastcall FastGetProfileDwordEx(
        PCUNICODE_STRING Source,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v10; // rax
  void *v11; // rsi
  int v13; // [rsp+30h] [rbp-40h]
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]

  ResultLength = 0;
  DestinationString = 0LL;
  v13 = *(_DWORD *)(W32GetUserSessionState(Source, a2) + 62784) | a5;
  if ( a7 )
    *a7 = 0;
  while ( 1 )
  {
    v10 = OpenCacheKeyEx(Source);
    v11 = (void *)v10;
    if ( !v10 )
      break;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v13 = 0;
      *a6 = v17;
    }
    else if ( !v13 )
    {
      if ( a7 )
        *a7 = 1;
      *a6 = a4;
    }
    LODWORD(v10) = ZwClose(v11);
    if ( !v13 )
      return v10;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( a7 )
      *a7 = 1;
    *a6 = a4;
  }
  return v10;
}
