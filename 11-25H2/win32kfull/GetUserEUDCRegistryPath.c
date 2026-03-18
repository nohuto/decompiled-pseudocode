/*
 * XREFs of GetUserEUDCRegistryPath @ 0x1402071F8
 * Callers:
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     bReadUserSystemEUDCRegistry @ 0x140206EE4 (bReadUserSystemEUDCRegistry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x14030DB0C (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetUserEUDCRegistryPath(WCHAR *a1, __int64 a2)
{
  __int64 v2; // rdi
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)&Destination.Length = 17039360LL;
  KeyPath = 0LL;
  Destination.Buffer = a1;
  v2 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  if ( RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\.DEFAULT");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)(v2 + 14152));
  }
  else
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
      if ( appended >= 0 )
        appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)(v2 + 14152));
    }
    RtlFreeUnicodeString(&KeyPath);
  }
  if ( appended >= 0 && Destination.Length == Destination.MaximumLength )
    return (unsigned int)-1073741789;
  return (unsigned int)appended;
}
