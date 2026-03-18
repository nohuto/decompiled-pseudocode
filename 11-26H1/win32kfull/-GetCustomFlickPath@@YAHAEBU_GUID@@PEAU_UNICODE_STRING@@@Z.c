/*
 * XREFs of ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1402C9D7C
 * Callers:
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402C9C48 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1402C9E38 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCustomFlickPath(GUID *Guid, PUNICODE_STRING Destination)
{
  unsigned int v4; // ebx
  WCHAR *v5; // rax
  NTSTATUS appended; // ebx
  struct _UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&Destination->Length = 14548992;
  GuidString = 0LL;
  v4 = 0;
  v5 = (WCHAR *)Win32AllocPoolZInit(222LL, 2020635477LL);
  if ( v5 )
  {
    Destination->Buffer = v5;
    if ( RtlAppendUnicodeToString(
           Destination,
           L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\CustomFlickCommands\\") >= 0
      && RtlStringFromGUID(Guid, &GuidString) >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &GuidString);
      RtlFreeUnicodeString(&GuidString);
      return appended >= 0;
    }
  }
  return v4;
}
