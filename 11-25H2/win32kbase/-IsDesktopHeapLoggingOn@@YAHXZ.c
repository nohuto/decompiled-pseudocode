/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400AB0B4
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall IsDesktopHeapLoggingOn(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  void *v4; // rsi
  int v6; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-1Ch]

  v2 = 0;
  v3 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v6 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 62784);
  while ( 1 )
  {
    v4 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v6);
    if ( !v4 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v4, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v3 = v10;
      v6 = 0;
    }
    else
    {
      v3 = v6 != 0 ? v3 : 0;
    }
    ZwClose(v4);
    if ( !v6 )
      goto LABEL_6;
  }
  v3 = 0;
LABEL_6:
  LOBYTE(v2) = v3 != 0;
  return v2;
}
