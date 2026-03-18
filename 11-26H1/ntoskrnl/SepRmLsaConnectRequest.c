/*
 * XREFs of SepRmLsaConnectRequest @ 0x140AF0D9C
 * Callers:
 *     SepRmCommandServerThread @ 0x140AF0B10 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenProcess @ 0x1407238B0 (ZwOpenProcess.c)
 *     ZwAlpcAcceptConnectPort @ 0x140724310 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcConnectPort @ 0x140724350 (ZwAlpcConnectPort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x14080FFC8 (SepRmVerifyLsaProtectionLevel.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SepRmCleanupRmLsaState @ 0x140AF112C (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(__int64 a1)
{
  PVOID v1; // rdi
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  __int64 v6; // rcx
  HANDLE *v7; // rsi
  bool IsHostSilo; // r15
  int v9; // r14d
  struct _LIST_ENTRY *v10; // rbx
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v15[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v16; // [rsp+B4h] [rbp-4Ch]
  int v17; // [rsp+B8h] [rbp-48h]
  __int16 v18; // [rsp+BCh] [rbp-44h]
  __int64 v19; // [rsp+C0h] [rbp-40h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ProcessHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v1 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, (PCLIENT_ID)(a1 + 8));
  if ( v2 < 0 )
  {
LABEL_4:
    ZwAlpcAcceptConnectPort(0LL, PspSiloMonitorLock.TracingPrivate[0]);
    if ( v1 )
      ObfDereferenceObject(v1);
    return (unsigned int)v2;
  }
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  v1 = Object;
  v2 = v3;
  if ( v3 < 0 )
  {
    ZwClose(ProcessHandle);
    goto LABEL_4;
  }
  ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)Object);
  v7 = (HANDLE *)((char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784);
  if ( *v7 )
  {
    ZwClose(ProcessHandle);
    v2 = -1073741823;
    goto LABEL_4;
  }
  *v7 = ProcessHandle;
  IsHostSilo = PsIsHostSilo(v6);
  if ( IsHostSilo )
    SepRmVerifyLsaProtectionLevel();
  else
    ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
  v9 = ZwAlpcAcceptConnectPort((__int64)(v7 + 3), PspSiloMonitorLock.TracingPrivate[0]);
  if ( v9 < 0 )
  {
    if ( !IsHostSilo )
      ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
    goto LABEL_16;
  }
  memset_0(v15, 0, 0x48uLL);
  v19 = 512LL;
  v16 = 12;
  v17 = 2;
  v18 = 257;
  v10 = PsAttachSiloToCurrentThread(ProcessServerSilo);
  RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
  v9 = ZwAlpcConnectPort((__int64)(v7 + 1), (__int64)&DestinationString);
  PsDetachSiloFromCurrentThread(v10);
  if ( v9 < 0 )
LABEL_16:
    SepRmCleanupRmLsaState(v7);
  if ( v1 )
    ObfDereferenceObject(v1);
  return (unsigned int)v9;
}
