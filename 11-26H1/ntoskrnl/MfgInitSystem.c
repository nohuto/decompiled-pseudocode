/*
 * XREFs of MfgInitSystem @ 0x140CAB968
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140724F70 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x140725970 (ZwOpenKeyEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS inited; // ebx
  unsigned __int16 v3; // ax
  struct _LIST_ENTRY *Pool2; // rax
  __int64 v5; // rax
  HANDLE v7; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B8h] [rbp-50h] BYREF

  ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
  *(_OWORD *)&ExpSysDbgLock.SchedulerApcFill5[80] = 0LL;
  v1 = *(_QWORD *)(a1 + 240);
  inited = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  memset(&KeyHandle_8, 0, 44);
  ValueName = 0LL;
  v7 = 0LL;
  KeyHandle = 0LL;
  v3 = *(_WORD *)(v1 + 2840);
  if ( !v3 )
    return (unsigned int)inited;
  if ( v3 >= 0x80u )
    return (unsigned int)-1073741811;
  ExpSysDbgLock.SuspendEvent.Header.LockNV = *(_DWORD *)(v1 + 2840);
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(
                                  256LL,
                                  *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size,
                                  0x5067664Du);
  ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Flink = Pool2;
  if ( Pool2 )
  {
    inited = RtlStringCbCopyW(
               (NTSTRSAFE_PWSTR)Pool2,
               *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size,
               *(NTSTRSAFE_PCWSTR *)(v1 + 2848));
    if ( inited < 0 )
      goto LABEL_21;
    inited = RtlStringCbPrintfW(
               pszDest,
               0x200uLL,
               L"%s%s",
               L"\\registry\\machine\\",
               L"System\\CurrentControlSet\\Control\\ManufacturingMode\\");
    if ( inited < 0 )
      goto LABEL_21;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_21;
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = 0LL;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.Attributes = 576;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &KeyHandle_8);
    if ( inited < 0 )
      goto LABEL_21;
    KeyHandle_8.Attributes = 576;
    KeyHandle_8.Length = 48;
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.ObjectName = (PUNICODE_STRING)&ExpSysDbgLock.SuspendEvent;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &KeyHandle_8);
    if ( inited < 0 )
      goto LABEL_21;
    ZwClose(Handle);
    *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[80] |= 1u;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(
               KeyHandle,
               &ValueName,
               0,
               1u,
               ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Flink,
               *(unsigned __int16 *)&ExpSysDbgLock.SuspendEvent.Header.Size);
    if ( inited < 0 )
      goto LABEL_21;
    inited = RtlInitUnicodeStringEx(&DestinationString, L"Current");
    if ( inited < 0 )
      goto LABEL_21;
    KeyHandle_8.RootDirectory = KeyHandle;
    KeyHandle_8.Length = 48;
    KeyHandle_8.ObjectName = &DestinationString;
    KeyHandle_8.Attributes = 832;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKeyEx(&v7, 0xF003Fu, &KeyHandle_8, 8u) >= 0 )
    {
      inited = ZwDeleteKey(v7);
      if ( inited < 0 )
        goto LABEL_21;
      ZwClose(v7);
      v7 = 0LL;
    }
    inited = ZwCreateKey(&v7, 0xF003Fu, &KeyHandle_8, 0, 0LL, 3u, 0LL);
    if ( inited >= 0 )
    {
      inited = RtlStringCbPrintfW(
                 pszDest,
                 0x200uLL,
                 L"%s%s%wZ",
                 L"\\registry\\machine\\",
                 L"System\\CurrentControlSet\\Control\\ManufacturingMode\\",
                 &ExpSysDbgLock.SuspendEvent);
      if ( inited >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( pszDest[v5] );
        inited = ZwSetValueKey(v7, (PUNICODE_STRING)&PspSiloMonitorLock.152, 0, 6u, pszDest, 2 * v5);
      }
    }
    goto LABEL_21;
  }
  inited = -1073741670;
LABEL_21:
  if ( v7 )
    ZwClose(v7);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)inited;
}
