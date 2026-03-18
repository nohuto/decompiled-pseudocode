/*
 * XREFs of SeRmInitPhase1 @ 0x140D0B16C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140724390 (ZwAlpcCreatePort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PsCreateSystemThread @ 0x140A03420 (PsCreateSystemThread.c)
 *     SepAdtInitializeAuditingOptions @ 0x140CDE828 (SepAdtInitializeAuditingOptions.c)
 */

char SeRmInitPhase1()
{
  __int64 v0; // rcx
  _QWORD v2[4]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v3; // [rsp+60h] [rbp-19h]
  int v4[4]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v5; // [rsp+80h] [rbp+7h]

  v2[0] = 48LL;
  v2[1] = 0LL;
  v2[3] = 512LL;
  v2[2] = L" \"";
  v3 = 0LL;
  memset_0(v4, 0, 0x48uLL);
  v4[0] = 1179648;
  v5 = 512LL;
  if ( (int)ZwAlpcCreatePort((__int64)PspSiloMonitorLock.TracingPrivate, (__int64)v2) < 0 )
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
  AuthzBasepInitializeSystemSecurityAttributes(v0);
  ZwClose(*(HANDLE *)&PspSiloMonitorLock.ThreadTimerDelay);
  *(_QWORD *)&PspSiloMonitorLock.ThreadTimerDelay = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E086F0, 0LL, 0LL);
  return 1;
}
