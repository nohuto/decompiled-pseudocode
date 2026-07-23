/*
 * XREFs of SepRmLsaConnectRequest @ 0x140AF39DC
 * Callers:
 *     SepRmCommandServerThread @ 0x140AF3750 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenProcess @ 0x140728480 (ZwOpenProcess.c)
 *     ZwAlpcAcceptConnectPort @ 0x140728EE0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcConnectPort @ 0x140728F20 (ZwAlpcConnectPort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x140815A58 (SepRmVerifyLsaProtectionLevel.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepRmCleanupRmLsaState @ 0x140AF3D6C (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(PPORT_MESSAGE ConnectionRequest)
{
  PVOID v2; // rdi
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  __int64 v7; // rcx
  void **v8; // rsi
  bool IsHostSilo; // r15
  __int64 v10; // rax
  NTSTATUS v11; // r14d
  struct _LIST_ENTRY *v12; // rbx
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ProcessHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v2 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, &ConnectionRequest->ClientId);
  if ( v3 < 0 )
  {
LABEL_4:
    ZwAlpcAcceptConnectPort(
      0LL,
      (HANDLE)PspSiloMonitorLock.TracingPrivate[0],
      0,
      0LL,
      0LL,
      0LL,
      ConnectionRequest,
      0LL,
      0);
    if ( v2 )
      ObfDereferenceObject(v2);
    return (unsigned int)v3;
  }
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  v2 = Object;
  v3 = v4;
  if ( v4 < 0 )
  {
    ZwClose(ProcessHandle);
    goto LABEL_4;
  }
  ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)Object);
  v8 = (void **)((char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784);
  if ( *v8 )
  {
    ZwClose(ProcessHandle);
    v3 = -1073741823;
    goto LABEL_4;
  }
  *v8 = ProcessHandle;
  IsHostSilo = PsIsHostSilo(v7);
  if ( IsHostSilo )
  {
    SepRmVerifyLsaProtectionLevel(v8);
    v10 = -8LL;
  }
  else
  {
    ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
    v10 = (__int64)ProcessServerSilo;
  }
  v11 = ZwAlpcAcceptConnectPort(
          v8 + 3,
          (HANDLE)PspSiloMonitorLock.TracingPrivate[0],
          0,
          0LL,
          0LL,
          (PVOID)v10,
          ConnectionRequest,
          0LL,
          1u);
  if ( v11 < 0 )
  {
    if ( !IsHostSilo )
      ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
    goto LABEL_16;
  }
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.MaxMessageLength = 512LL;
  PortAttributes.SecurityQos.Length = 12;
  PortAttributes.SecurityQos.ImpersonationLevel = SecurityImpersonation;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 257;
  v12 = PsAttachSiloToCurrentThread(ProcessServerSilo);
  RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
  v11 = ZwAlpcConnectPort(v8 + 1, &DestinationString, 0LL, &PortAttributes, 0x20000u, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  PsDetachSiloFromCurrentThread(v12);
  if ( v11 < 0 )
LABEL_16:
    SepRmCleanupRmLsaState(v8);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v11;
}
