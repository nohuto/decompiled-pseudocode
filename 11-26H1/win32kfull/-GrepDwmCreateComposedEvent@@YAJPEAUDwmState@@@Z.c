/*
 * XREFs of ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x140200F0C
 * Callers:
 *     GreDwmStartup @ 0x1402931FC (GreDwmStartup.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x140288AC4 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

NTSTATUS __fastcall GrepDwmCreateComposedEvent(wchar_t *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  Gre::Base *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // esi
  NTSTATUS v6; // ebx
  unsigned __int16 *v7; // rdi
  unsigned __int64 v8; // r14
  NTSTATUS result; // eax
  Gre::Base *v10; // rcx
  int CurrentWin32kSessionId; // [rsp+30h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  void *EventHandle; // [rsp+C0h] [rbp+67h] BYREF
  void *DirectoryHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v16; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v17; // [rsp+D8h] [rbp+7Fh] BYREF

  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v17 = 0LL;
  v2 = Gre::Base::Globals((Gre::Base *)a1);
  v4 = *((_QWORD *)Gre::Base::Globals(v3) + 232);
  ++*(_DWORD *)(v4 + 1573020);
  v5 = *(_DWORD *)(*((_QWORD *)v2 + 232) + 1573020LL);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v4);
  v6 = RtlStringCchPrintfExW(
         a1 + 96,
         0x44uLL,
         &v16,
         &v17,
         0x1000u,
         L"\\Sessions\\%ld\\BaseNamedObjects",
         CurrentWin32kSessionId);
  if ( v6 < 0
    || (RtlInitUnicodeString(&DestinationString, a1 + 96),
        ObjectAttributes.Length = 48,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v6 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes),
        v6 < 0) )
  {
    if ( EventHandle )
      ObCloseHandle(EventHandle, 0);
LABEL_12:
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v6;
  }
  else
  {
    v7 = v16;
    v8 = v17;
    *v16 = 92;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &unk_140364090;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    while ( 1 )
    {
      result = RtlStringCchPrintfW(v7 + 1, v8 - 1, L"DwmComposedEvent_%x", v5);
      if ( result < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v7 + 1);
      result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      v6 = result;
      if ( result != -1073741771 )
      {
        if ( result < 0 )
          return result;
        *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v10) + 232) + 1573020LL) = v5;
        *((_QWORD *)a1 + 41) = EventHandle;
        EventHandle = 0LL;
        goto LABEL_12;
      }
      ++v5;
    }
  }
  return result;
}
