/*
 * XREFs of SepRmCommandServerThread @ 0x140AF3750
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14063DDEC (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     NtAlpcCancelMessage @ 0x140ACEE70 (NtAlpcCancelMessage.c)
 *     SepRmLsaConnectRequest @ 0x140AF39DC (SepRmLsaConnectRequest.c)
 *     PopRequestShutdownWait @ 0x140AF3CB8 (PopRequestShutdownWait.c)
 *     SepRmCleanupRmLsaState @ 0x140AF3D6C (SepRmCleanupRmLsaState.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  signed int v1; // ebx
  NTSTATUS v2; // eax
  _PORT_MESSAGE *v3; // rsi
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
  ULONG_PTR BufferLength; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT v16; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+90h] [rbp-78h]
  _ALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes[6]; // [rsp+98h] [rbp-70h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+C8h] [rbp-40h] BYREF
  int v21; // [rsp+F0h] [rbp-18h]
  int v22; // [rsp+2C8h] [rbp+1C0h] BYREF
  $073AD1B529598B5ECE7408661D5850CD v23; // [rsp+2D0h] [rbp+1C8h]
  unsigned int MessageId; // [rsp+2E0h] [rbp+1D8h]

  memset_0(&ConnectionRequest, 0, 0x200uLL);
  memset_0(&v22, 0, 0x200uLL);
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
        BufferLength = 512LL;
        memset(ReceiveMessageAttributes, 0, 40);
        ReceiveMessageAttributes[0].AllocatedAttributes = 0x20000000;
        v2 = ZwAlpcSendWaitReceivePort(
               (HANDLE)PspSiloMonitorLock.TracingPrivate[0],
               v3 != 0LL ? 0x10000 : 0,
               v3,
               0LL,
               &ConnectionRequest,
               &BufferLength,
               ReceiveMessageAttributes,
               0LL);
        v3 = 0LL;
      }
      while ( v2 < 0 );
      v4 = (struct _LIST_ENTRY *)ReceiveMessageAttributes[1];
      if ( *(_QWORD *)&ReceiveMessageAttributes[1] == -8LL )
        v4 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
      switch ( LOBYTE(ConnectionRequest.u2.ZeroInit) )
      {
        case 1u:
          if ( (unsigned int)(v21 - 1) > 0xB )
          {
LABEL_18:
            NtAlpcCancelMessage(
              (HANDLE)PspSiloMonitorLock.TracingPrivate[0],
              0,
              (PALPC_CONTEXT_ATTR)&ReceiveMessageAttributes[1]);
          }
          else
          {
            memset_0(&v22, 0, 0x200uLL);
            v22 = 33554904;
            v23 = ConnectionRequest.8;
            MessageId = ConnectionRequest.MessageId;
            v5 = PsAttachSiloToCurrentThread(v4);
            guard_dispatch_icall_no_overrides((__int64)&ConnectionRequest, (__int64)&v22);
            PsDetachSiloFromCurrentThread(v5);
            v3 = (_PORT_MESSAGE *)&v22;
          }
          break;
        case 5u:
          IsHostSilo = PsIsHostSilo((__int64)v4);
          if ( IsHostSilo )
          {
            v18 = 0LL;
            SepRmAuditingEnabled = 0;
            memset(&Event, 0, sizeof(Event));
            v17 = 0LL;
            memset(&v16, 0, sizeof(v16));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)&v17, NotificationEvent, 0);
            KeInitializeEvent(&v16, NotificationEvent, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.MutantListHead.Blink, 1u);
            RtlpBootStatHandleLock.QueuedScb = (_KSCB *)&Event;
            v9 = RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink == (struct _LIST_ENTRY *)&RtlpBootStatHandleLock.SuspendEvent.Header.WaitListHead.Blink;
            ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.MutantListHead.Blink);
            KeLeaveCriticalRegion();
            inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&v16);
            v11 = KeGetCurrentThread();
            v12 = inited;
            --v11->KernelApcDisable;
            ExAcquireResourceExclusiveLite((PERESOURCE)&RtlpBootStatHandleLock.WaitBlockFill11[48], 1u);
            RtlpBootStatHandleLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)&v17;
            v13 = *(_QWORD *)&RtlpBootStatHandleLock.WaitBlockFill11[16] == (_QWORD)&RtlpBootStatHandleLock.WaitBlockFill11[16];
            ExReleaseResourceLite((PERESOURCE)&RtlpBootStatHandleLock.WaitBlockFill11[48]);
            KeLeaveCriticalRegion();
            if ( !v9 )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            if ( v12 )
              KeWaitForSingleObject(&v16, Executive, 0, 0, 0LL);
            if ( !v13 )
              KeWaitForSingleObject(&v17, Executive, 0, 0, 0LL);
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
          SepRmLsaConnectRequest(&ConnectionRequest);
          break;
        default:
          if ( (ConnectionRequest.u2.s2.Type & 0x2000) != 0 )
            goto LABEL_18;
          break;
      }
    }
  }
  ZwClose((HANDLE)PspSiloMonitorLock.TracingPrivate[0]);
  PspSiloMonitorLock.TracingPrivate[0] = 0LL;
  SepAuditFailed(v1);
}
