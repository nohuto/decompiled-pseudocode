/*
 * XREFs of PopUmpoProcessMessage @ 0x140AA77A8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x140AA766C (PopUmpoProcessMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x140728EE0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x140728F00 (ZwAlpcCancelMessage.c)
 *     ZwAlpcOpenSenderProcess @ 0x1407290E0 (ZwAlpcOpenSenderProcess.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopUmpoProcessPowerMessage @ 0x1407DF428 (PopUmpoProcessPowerMessage.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PopAcquireUmpoPushLock @ 0x140AE230C (PopAcquireUmpoPushLock.c)
 *     PopReleaseUmpoPushLock @ 0x140AEE150 (PopReleaseUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(PPORT_MESSAGE PortMessage, PALPC_CONTEXT_ATTR MessageContext, __int64 a3)
{
  __int16 Type; // r8
  int v6; // ebx
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  void *v11; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp-59h] BYREF
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-19h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  Type = PortMessage->u2.s2.Type;
  *(&ObjectAttributes.Attributes + 1) = 0;
  switch ( (unsigned __int8)Type )
  {
    case 1u:
      goto LABEL_6;
    case 2u:
    case 3u:
      if ( (Type & 0x2000) == 0 )
      {
        v6 = PopUmpoProcessPowerMessage((__int64)&PortMessage[1], a3);
        if ( v6 < 0 )
          return (unsigned int)v6;
        return 0;
      }
LABEL_6:
      ZwAlpcCancelMessage(PopPdcDeviceListLock.TrapFrame, 0, MessageContext);
      return 0;
    case 5u:
    case 6u:
      LOBYTE(PopPdcDeviceListLock.FirstArgument) = 0;
      LODWORD(PopPdcDeviceListLock.SchedulingGroup) = 0;
      v8 = *(_QWORD *)&PopPdcDeviceListLock.WaitRegister.Flags;
      if ( *(_QWORD *)&PopPdcDeviceListLock.WaitRegister.Flags )
      {
        ObfDereferenceObjectWithTag(*(PVOID *)&PopPdcDeviceListLock.WaitRegister.Flags, 0x746C6644u);
        *(_QWORD *)&PopPdcDeviceListLock.WaitRegister.Flags = 0LL;
      }
      LOBYTE(v8) = 1;
      PopAcquireUmpoPushLock(v8);
      v11 = *(void **)&PopPdcDeviceListLock.SystemCallNumber;
      *(_QWORD *)&PopPdcDeviceListLock.SystemCallNumber = 0LL;
      PopReleaseUmpoPushLock();
      ZwClose(v11);
      return (unsigned int)-1073740032;
  }
  if ( (unsigned __int8)Type != 10 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.MaxMessageLength = 4096LL;
  v9 = ZwAlpcAcceptConnectPort(
         (PHANDLE)&PopPdcDeviceListLock.SystemCallNumber,
         PopPdcDeviceListLock.TrapFrame,
         0,
         &ObjectAttributes,
         &PortAttributes,
         0LL,
         PortMessage,
         0LL,
         LOBYTE(PopPdcDeviceListLock.FirstArgument) == 0);
  v6 = v9;
  if ( v9 < 0 )
  {
    ZwAlpcAcceptConnectPort(
      (PHANDLE)&PopPdcDeviceListLock.SystemCallNumber,
      PopPdcDeviceListLock.TrapFrame,
      0,
      &ObjectAttributes,
      &PortAttributes,
      0LL,
      PortMessage,
      0LL,
      0);
    return (unsigned int)v6;
  }
  LOBYTE(PopPdcDeviceListLock.FirstArgument) = 1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessHandle = 0LL;
  v6 = ZwAlpcOpenSenderProcess(
         &ProcessHandle,
         PopPdcDeviceListLock.TrapFrame,
         PortMessage,
         0,
         0x400u,
         &ObjectAttributes);
  if ( v6 >= 0 && ProcessHandle )
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(ProcessHandle, 0x10000000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    *(_QWORD *)&PopPdcDeviceListLock.WaitRegister.Flags = Object;
    if ( v10 < 0 )
      *(_QWORD *)&PopPdcDeviceListLock.WaitRegister.Flags = 0LL;
    ZwClose(ProcessHandle);
    return 0;
  }
  return (unsigned int)v6;
}
