/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1402537D8
 * Callers:
 *     DpiAddDevice @ 0x14023C1E0 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // ebx
  char v3; // si
  char v4; // r14
  int v6; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  AcquireMiniportListMutex();
  if ( !dword_140168F50 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    CallbackObject = 0LL;
    if ( !g_pDeviceObject )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2203;
LABEL_17:
      ReleaseMiniportListMutex();
      return (unsigned int)v2;
    }
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2230;
      goto LABEL_12;
    }
    CallbackRegistration = ExRegisterCallback(
                             CallbackObject,
                             (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                             g_pDeviceObject);
    ObfDereferenceObject(CallbackObject);
    if ( !CallbackRegistration )
    {
      v2 = -1073741823;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2252;
      goto LABEL_12;
    }
    v3 = 1;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 2260;
    v2 = IoRegisterPlugPlayNotification(
           EventCategoryHardwareProfileChange,
           0,
           0LL,
           (PDRIVER_OBJECT)g_pDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiAcpiDockEventCallback,
           g_pDeviceObject,
           &NotificationEntry);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2281;
      goto LABEL_12;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(PVOID), __int64))(v1 + 928))(
         *(_QWORD *)(v1 + 864),
         DpiAcpiEventCallback,
         a1);
  v2 = v6;
  if ( v6 >= 0 )
  {
    WdLogSingleEntry1(4LL);
    *(_BYTE *)(v1 + 1157) = 1;
    ++dword_140168F50;
    WdLogGlobalForLineNumber = 2310;
    goto LABEL_17;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 928), v6);
  WdLogGlobalForLineNumber = 2302;
  v4 = v3;
LABEL_12:
  ReleaseMiniportListMutex();
  *(_BYTE *)(v1 + 1157) = 0;
  if ( v4 == 1 )
  {
    IoUnregisterPlugPlayNotification(NotificationEntry);
    NotificationEntry = 0LL;
  }
  if ( v3 == 1 )
  {
    ExUnregisterCallback(CallbackRegistration);
    CallbackRegistration = 0LL;
  }
  return (unsigned int)v2;
}
