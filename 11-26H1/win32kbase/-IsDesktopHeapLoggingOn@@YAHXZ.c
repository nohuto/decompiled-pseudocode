/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1400E31A8
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall IsDesktopHeapLoggingOn(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  void *v5; // rsi
  int v7; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch]

  v3 = 0;
  v4 = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v7 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 62776);
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v7);
    if ( !v5 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v4 = v11;
      v7 = 0;
    }
    else
    {
      v4 = v7 != 0 ? v4 : 0;
    }
    ZwClose(v5);
    if ( !v7 )
      goto LABEL_6;
  }
  v4 = 0;
LABEL_6:
  LOBYTE(v3) = v4 != 0;
  return v3;
}
