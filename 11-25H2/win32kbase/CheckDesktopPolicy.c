/*
 * XREFs of CheckDesktopPolicy @ 0x1400A9900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     OpenCacheKeyEx @ 0x1400A9CE0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString)
{
  const WCHAR *v2; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  HANDLE v6; // rbx
  int v7; // ebx
  BYTE *Text; // rdx
  __int64 v9; // rbx
  void *v10; // rsi
  NTSTATUS v12; // ebx
  int v13; // [rsp+30h] [rbp-D0h]
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v18[80]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = SourceString;
  ResultLength = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  UserSessionState = W32GetUserSessionState(Source, SourceString);
  v13 = *(_DWORD *)(UserSessionState + 62784) & 6;
  if ( !v13 )
    return 0LL;
  v6 = *(HANDLE *)(W32GetUserSessionState(*(_DWORD *)(UserSessionState + 62784) & 6, v5) + 63544);
  if ( PsGetCurrentProcessId() == v6 )
    return 0LL;
  if ( ((unsigned __int64)v2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_9;
  MessageResourceEntry = 0LL;
  v7 = 0;
  if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, (unsigned __int16)v2, &MessageResourceEntry) < 0 )
    goto LABEL_14;
  Text = MessageResourceEntry->Text;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&Text[2 * v9] );
  v7 = v9 - 2;
  if ( v7 >= 0 )
  {
    if ( v7 > 79 )
      v7 = 79;
    memmove(v18, Text, 2LL * v7);
LABEL_14:
    v18[v7] = 0;
  }
  v2 = v18;
LABEL_9:
  do
  {
    v10 = (void *)OpenCacheKeyEx(Source);
    if ( !v10 )
      break;
    RtlInitUnicodeString(&DestinationString, v2);
    v12 = ZwQueryValueKey(v10, &DestinationString, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
    ZwClose(v10);
    if ( (v12 & 0xC0000000) != 0xC0000000 )
    {
      UserSetLastError(1260);
      return 1LL;
    }
  }
  while ( v13 );
  return 0LL;
}
