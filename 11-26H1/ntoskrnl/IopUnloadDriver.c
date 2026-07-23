/*
 * XREFs of IopUnloadDriver @ 0x140B2CE78
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140B2CD98 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140B2CE60 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140CC96B0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14048D77C (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14048D860 (PnpDiagnosticTraceDriverFullInfo.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     IopCleanupNotifications @ 0x1404DE388 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1404ECEE0 (IopCheckUnloadDriver.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ZwUnloadDriver @ 0x14072BB00 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 *     PnpIsLegacyDriver @ 0x1409714A0 (PnpIsLegacyDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140B2DA80 (EtwTiLogDriverObjectUnLoad.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  char v5; // r12
  KPROCESSOR_MODE PreviousMode; // dl
  int ULongFromUser; // eax
  unsigned __int16 v9; // bx
  wchar_t *ULong64FromUser; // rax
  void *Pool2; // rdi
  int DriverNameFromKeyNode; // ebx
  wchar_t *Buffer; // rcx
  struct _LIST_ENTRY *v14; // rdi
  void *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  UNICODE_STRING Destination; // [rsp+40h] [rbp-F8h] BYREF
  UNICODE_STRING v22; // [rsp+50h] [rbp-E8h] BYREF
  HANDLE v23[2]; // [rsp+60h] [rbp-D8h] BYREF
  UNICODE_STRING DriverServiceName; // [rsp+70h] [rbp-C8h] BYREF
  PVOID P; // [rsp+80h] [rbp-B8h]
  PVOID Object; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-98h]
  __int128 v29; // [rsp+B0h] [rbp-88h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+C0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+E0h] [rbp-58h] BYREF
  struct _LIST_ENTRY *v32; // [rsp+F8h] [rbp-40h]
  char v33; // [rsp+150h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+20h] BYREF

  DriverServiceName = 0LL;
  P = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v23[0] = 0LL;
  v33 = 0;
  LOBYTE(MinorImageVersion) = 0;
  *(_QWORD *)&v22.Length = 0x20000LL;
  v22.Buffer = (wchar_t *)&word_140B8A320;
  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        LODWORD(v27) = 48;
        *((_QWORD *)&v27 + 1) = 0LL;
        DWORD2(v28) = 576;
        *(_QWORD *)&v28 = &Destination;
        v29 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)&v27,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)v23);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v23[0], 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v23[0], 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v14 = (struct _LIST_ENTRY *)Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( !v14[6].Blink || !v14[2].Blink )
            {
              ObfDereferenceObject(v14);
              v5 = 1;
              goto LABEL_28;
            }
            if ( !a2 && !(unsigned int)PnpIsLegacyDriver((__int64)v14) )
            {
              ObfDereferenceObject(v15);
LABEL_28:
              DriverNameFromKeyNode = -1073741808;
              goto LABEL_29;
            }
            DriverNameFromKeyNode = IopCheckUnloadDriver(v14, &v33);
            if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
            {
              if ( v33 )
              {
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                {
                  v16 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
                  v17 = PsAttachSiloToCurrentThread(v16);
                  guard_dispatch_icall_no_overrides((__int64)v14, v18);
                  PsDetachSiloFromCurrentThread(v17);
                }
                else
                {
                  memset_0(&WorkItem, 0, 0x50uLL);
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  v32 = v14;
                  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                  WorkItem.Parameter = &WorkItem;
                  WorkItem.List.Flink = 0LL;
                  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                }
                EtwTiLogDriverObjectUnLoad(&v14[3].Blink);
                IopCleanupNotifications(v14, v14, v19, v20);
                ObMakeTemporaryObject(v14);
                ObfDereferenceObject(v14);
              }
              ObfDereferenceObject(v14);
              DriverNameFromKeyNode = 0;
            }
          }
        }
      }
    }
LABEL_29:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      &a1->Length,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( DriverNameFromKeyNode < 0 && !v5 )
      PnpDiagnosticTraceDeviceOperation(
        &KMPnPEvt_DriverUnload_Fail,
        &v22.Length,
        DriverNameFromKeyNode,
        (__int64)&Destination,
        MinorImageVersion);
    Buffer = Destination.Buffer;
    if ( !Destination.Buffer )
      return (unsigned int)DriverNameFromKeyNode;
    goto LABEL_33;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  *(_DWORD *)(&v22.MaximumLength + 1) = 0;
  ULongFromUser = RtlReadULongFromUser((unsigned int *)&a1->Length);
  v9 = ULongFromUser;
  *(_DWORD *)&v22.Length = ULongFromUser;
  ULong64FromUser = (wchar_t *)RtlReadULong64FromUser(&a1->Buffer);
  v22.Buffer = ULong64FromUser;
  DriverServiceName = v22;
  if ( !v9 )
    return 3221225485LL;
  ProbeForRead(ULong64FromUser, v9, 2u);
  Pool2 = (void *)ExAllocatePool2(0x121uLL);
  P = Pool2;
  RtlCopyFromUser(Pool2, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)Pool2;
  DriverNameFromKeyNode = ZwUnloadDriver(&DriverServiceName);
  Buffer = (wchar_t *)Pool2;
LABEL_33:
  ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
