/*
 * XREFs of CheckDesktopPolicy @ 0x1400E1950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     OpenCacheKeyEx @ 0x1400E1D30 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString, int a3)
{
  const WCHAR *v3; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  HANDLE v8; // rbx
  int v9; // ebx
  BYTE *Text; // rdx
  __int64 v11; // rbx
  void *v12; // rsi
  NTSTATUS v14; // ebx
  int v15; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v20[80]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = SourceString;
  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  v6 = *(_DWORD *)(W32GetUserSessionState((_DWORD)Source, (_DWORD)SourceString, a3) + 62776) & 6;
  v15 = v6;
  if ( !v6 )
    return 0LL;
  v8 = *(HANDLE *)(W32GetUserSessionState(v6, v5, v7) + 63536);
  if ( PsGetCurrentProcessId() == v8 )
    return 0LL;
  if ( ((unsigned __int64)v3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_9;
  MessageResourceEntry = 0LL;
  v9 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)v3, &MessageResourceEntry) < 0 )
    goto LABEL_14;
  Text = MessageResourceEntry->Text;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)&Text[2 * v11] );
  v9 = v11 - 2;
  if ( v9 >= 0 )
  {
    if ( v9 > 79 )
      v9 = 79;
    memmove(v20, Text, 2LL * (unsigned int)v9);
LABEL_14:
    v20[v9] = 0;
  }
  v3 = v20;
LABEL_9:
  do
  {
    v12 = (void *)OpenCacheKeyEx(Source);
    if ( !v12 )
      break;
    RtlInitUnicodeString(&DestinationString, v3);
    v14 = ZwQueryValueKey(v12, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
    ZwClose(v12);
    if ( (v14 & 0xC0000000) != 0xC0000000 )
    {
      UserSetLastError(1260);
      return 1LL;
    }
  }
  while ( v15 );
  return 0LL;
}
