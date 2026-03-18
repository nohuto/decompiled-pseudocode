/*
 * XREFs of SepRmCommandServerThread @ 0x140AF0B10
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14063AD24 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1407245B0 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 *     NtAlpcCancelMessage @ 0x140ACCC30 (NtAlpcCancelMessage.c)
 *     SepRmLsaConnectRequest @ 0x140AF0D9C (SepRmLsaConnectRequest.c)
 *     PopRequestShutdownWait @ 0x140AF1078 (PopRequestShutdownWait.c)
 *     SepRmCleanupRmLsaState @ 0x140AF112C (SepRmCleanupRmLsaState.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  signed int v1; // ebx
  int v2; // eax
  int *v3; // rsi
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *v5; // rbx
  bool IsHostSilo; // r14
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // bl
  char inited; // al
  struct _KTHREAD *v11; // rcx
  char v12; // r15
  bool v13; // r12
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v15; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[56]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-50h]
  _BYTE v18[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v19; // [rsp+CCh] [rbp-3Ch]
  __int128 v20; // [rsp+D0h] [rbp-38h]
  int v21; // [rsp+E0h] [rbp-28h]
  int v22; // [rsp+F0h] [rbp-18h]
  int v23; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v24; // [rsp+2D0h] [rbp+1C8h]
  int v25; // [rsp+2E0h] [rbp+1D8h]

  memset_0(v18, 0, 0x200uLL);
  memset_0(&v23, 0, 0x200uLL);
  PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread()->ApcState.Process;
  PsReferenceSiloContext(PspSiloMonitorLock.SuspendEvent.Header.WaitListHead.Flink);
  v1 = PopRequestShutdownWait(KeGetCurrentThread());
  if ( v1 >= 0 )
  {
    v3 = 0LL;
    while ( 1 )
    {
      do
      {
        v17 = 0LL;
        memset(&v16[24], 0, 32);
        *(_DWORD *)&v16[24] = 0x20000000;
        v2 = ZwAlpcSendWaitReceivePort(PspSiloMonitorLock.TracingPrivate[0], v3 != 0LL ? 0x10000 : 0);
        v3 = 0LL;
      }
      while ( v2 < 0 );
      v4 = *(struct _LIST_ENTRY **)&v16[32];
      if ( *(_QWORD *)&v16[32] == -8LL )
        v4 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
      switch ( (unsigned __int8)v19 )
      {
        case 1u:
          if ( (unsigned int)(v22 - 1) > 0xB )
          {
LABEL_18:
            NtAlpcCancelMessage((HANDLE)PspSiloMonitorLock.TracingPrivate[0], 0, &v16[32]);
          }
          else
          {
            memset_0(&v23, 0, 0x200uLL);
            v23 = 33554904;
            v24 = v20;
            v25 = v21;
            v5 = PsAttachSiloToCurrentThread(v4);
            guard_dispatch_icall_no_overrides((__int64)v18, (__int64)&v23);
            PsDetachSiloFromCurrentThread(v5);
            v3 = &v23;
          }
          break;
        case 5u:
          IsHostSilo = PsIsHostSilo((__int64)v4);
          if ( IsHostSilo )
          {
            HIDWORD(SepRmCapTableLock.Header.WaitListHead.Flink) = 0;
            memset(&Event, 0, sizeof(Event));
            memset(v16, 0, 24);
            memset(&v15, 0, sizeof(v15));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)v16, NotificationEvent, 0);
            KeInitializeEvent(&v15, NotificationEvent, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead, 1u);
            RtlpBootStatHandleLock.WriteOperationCount = (__int64)&Event;
            v9 = RtlpBootStatHandleLock.SchedulerApc.SystemArgument1 == &RtlpBootStatHandleLock.SchedulerApcFill5[64];
            ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead);
            KeLeaveCriticalRegion();
            inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&v15);
            v11 = KeGetCurrentThread();
            v12 = inited;
            --v11->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.RelativeTimerBias, 1u);
            RtlpBootStatHandleLock.WaitBlock[1].SparePtr = v16;
            v13 = RtlpBootStatHandleLock.WaitListEntry.Flink == &RtlpBootStatHandleLock.WaitListEntry;
            ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.RelativeTimerBias);
            KeLeaveCriticalRegion();
            if ( !v9 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            if ( v12 )
              KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
            if ( !v13 )
              KeWaitForSingleObject(v16, Executive, 0, 0, 0LL);
            ZwClose((HANDLE)PspSiloMonitorLock.TracingPrivate[0]);
            PspSiloMonitorLock.TracingPrivate[0] = 0LL;
          }
          ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)v4);
          SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
          if ( IsHostSilo )
            return;
          ObfDereferenceObjectWithTag(v4, 0x74536553u);
          break;
        case 0xAu:
          SepRmLsaConnectRequest(v18);
          break;
        default:
          if ( (v19 & 0x2000) != 0 )
            goto LABEL_18;
          break;
      }
    }
  }
  ZwClose((HANDLE)PspSiloMonitorLock.TracingPrivate[0]);
  PspSiloMonitorLock.TracingPrivate[0] = 0LL;
  SepAuditFailed(v1);
}
