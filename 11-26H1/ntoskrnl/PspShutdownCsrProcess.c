/*
 * XREFs of PspShutdownCsrProcess @ 0x1407F4F18
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1407F5658 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x140728180 (ZwSetEvent.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenEvent @ 0x1407287C0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(struct _LIST_ENTRY *a1, unsigned int a2, struct _KPROCESS *a3)
{
  struct _LIST_ENTRY *v4; // rdi
  int v5; // edi
  HANDLE v6; // rcx
  NTSTATUS result; // eax
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[120]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = a2;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  EventHandle = 0LL;
  DestinationString = 0LL;
  v4 = PsAttachSiloToCurrentThread(a1);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", v8);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  RtlStringCchPrintfW(pszDest, 0x78uLL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", v8);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
    Handle = 0LL;
  PsDetachSiloFromCurrentThread(v4);
  KeStackAttachProcess(a3, &ApcState);
  v5 = PsInvokeWin32Callout(31LL, 0LL, 1LL, &v8);
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v6 = Handle;
  if ( Handle )
  {
    if ( v5 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v6 = Handle;
    }
    ZwClose(v6);
    Handle = 0LL;
  }
  result = PsTerminateProcess(a3, 3221226219LL);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
