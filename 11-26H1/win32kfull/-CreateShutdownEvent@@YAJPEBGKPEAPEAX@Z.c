/*
 * XREFs of ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x140201148
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateShutdownEvent(const unsigned __int16 *a1, int a2, void **a3)
{
  unsigned int CurrentWin32kSessionId; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SourceString[256]; // [rsp+70h] [rbp-90h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId((__int64)a1);
  RtlStringCchPrintfW(SourceString, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\%ws", CurrentWin32kSessionId, a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = a2 | 0x240;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(a3, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
}
