/*
 * XREFs of SeRmInitPhase1 @ 0x140D1143C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140728F60 (ZwAlpcCreatePort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140895F40 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CE4BC0 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-39h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+70h] [rbp-9h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L" \"";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.Flags = 1179648;
  PortAttributes.MaxMessageLength = 512LL;
  if ( ZwAlpcCreatePort((PHANDLE)PspSiloMonitorLock.TracingPrivate, &ObjectAttributes, &PortAttributes) < 0 )
    return 0;
  SepAdtInitializeAuditingOptions();
  if ( PsCreateSystemThread(
         (PHANDLE)&PspSiloMonitorLock.ThreadTimerDelay,
         0x38u,
         0LL,
         0LL,
         0LL,
         (PKSTART_ROUTINE)SepRmCommandServerThread,
         0LL) < 0 )
    return 0;
  AuthzBasepInitializeSystemSecurityAttributes(v1, v0);
  ZwClose(*(HANDLE *)&PspSiloMonitorLock.ThreadTimerDelay);
  *(_QWORD *)&PspSiloMonitorLock.ThreadTimerDelay = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E086E0, 0LL, 0LL);
  return 1;
}
