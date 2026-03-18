/*
 * XREFs of PspShutdownCsrProcess @ 0x1407EF3B8
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x1407EFAF8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140723470 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1407235B0 (ZwSetEvent.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenEvent @ 0x140723BF0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x140723CF0 (ZwCreateEvent.c)
 *     PsTerminateProcess @ 0x14095690C (PsTerminateProcess.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
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
