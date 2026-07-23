/*
 * XREFs of MfgInitSystem @ 0x140CB19A8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     ZwOpenKeyEx @ 0x14072A540 (ZwOpenKeyEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall MfgInitSystem(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS inited; // ebx
  unsigned __int16 v3; // ax
  void *Pool2; // rax
  __int64 v5; // rax
  HANDLE v7; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES KeyHandle_8; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR pszDest[256]; // [rsp+B8h] [rbp-50h] BYREF

  ExpSysDbgLock.SchedulerSharedSystemSlot = 0LL;
  *(_OWORD *)&ExpSysDbgLock.MutantListHead.Blink = 0LL;
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
  ExpSysDbgLock.AbEntryCountValue = *(_WORD *)(v1 + 2840);
  *(_WORD *)&ExpSysDbgLock.FreezeFlags = *(_WORD *)(v1 + 2842);
  Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags, 0x5067664Du);
  ExpSysDbgLock.SchedulerSharedSystemSlot = Pool2;
  if ( Pool2 )
  {
    inited = RtlStringCbCopyW(
               (NTSTRSAFE_PWSTR)Pool2,
               *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags,
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
    KeyHandle_8.ObjectName = (PUNICODE_STRING)&ExpSysDbgLock.792;
    *(_OWORD *)&KeyHandle_8.SecurityDescriptor = 0LL;
    inited = ZwOpenKey(&Handle, 0xF003Fu, &KeyHandle_8);
    if ( inited < 0 )
      goto LABEL_21;
    ZwClose(Handle);
    LODWORD(ExpSysDbgLock.MutantListHead.Blink) |= 1u;
    RtlInitUnicodeStringEx(&ValueName, L"LastProfile");
    inited = ZwSetValueKey(
               KeyHandle,
               &ValueName,
               0,
               1u,
               ExpSysDbgLock.SchedulerSharedSystemSlot,
               *(unsigned __int16 *)&ExpSysDbgLock.FreezeFlags);
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
                 &ExpSysDbgLock.792);
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
