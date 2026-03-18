/*
 * XREFs of ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x140200C80
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateDesktopNotificationEvent(void *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int CurrentWin32kSessionId; // eax
  __int64 result; // rax
  unsigned __int16 *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  NTSTATUS v11; // eax
  PVOID v12; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void **Handle; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  void *DirectoryHandle; // [rsp+48h] [rbp-C0h] BYREF
  void *EventHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 v24[256]; // [rsp+A8h] [rbp-60h] BYREF

  EventHandle = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  DirectoryHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 68604) )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v3);
    result = RtlStringCchPrintfW(v24, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects", CurrentWin32kSessionId);
    if ( (int)result < 0 )
      return result;
    v6 = v24;
  }
  else
  {
    v6 = L"\\BaseNamedObjects";
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v6);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes);
  if ( v7 >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"WinSta0_DesktopSwitch");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.Attributes = 640;
    ObjectAttributes.SecurityDescriptor = a1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    ZwClose(DirectoryHandle);
    if ( v7 >= 0 )
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      DestinationString[0] = 0LL;
      v11 = ObReferenceObjectByHandle(
              EventHandle,
              0x1F0003u,
              (POBJECT_TYPE)ExEventObjectType,
              0,
              DestinationString,
              0LL);
      v12 = DestinationString[0];
      v7 = v11;
      *(PVOID *)(UserSessionState + 62960) = DestinationString[0];
      if ( v11 >= 0 )
      {
        UserGdiSessionState = W32GetUserGdiSessionState(v12);
        KeAttachProcess(*(PRKPROCESS *)(UserGdiSessionState + 40));
        Handle = (void **)(W32GetUserSessionState(v15, v14) + 62952);
        v19 = W32GetUserSessionState(v18, v17);
        v7 = ObOpenObjectByPointer(*(PVOID *)(v19 + 62960), 0, 0LL, 0x1F0003u, 0LL, 0, Handle);
        KeDetachProcess();
      }
      ZwClose(EventHandle);
    }
  }
  return (unsigned int)v7;
}
