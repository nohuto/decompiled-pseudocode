/*
 * XREFs of PerfDiagInitialize @ 0x140CE60F0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     EtwWriteStartScenario @ 0x140B476D0 (EtwWriteStartScenario.c)
 */

int PerfDiagInitialize()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+30h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-18h] BYREF

  RegHandle = 0LL;
  *(_QWORD *)&stru_140F042A0.Header.Lock = 0LL;
  LODWORD(stru_140F042A0.Header.WaitListHead.Flink) = 0;
  EtwRegister(
    &MS_Kernel_BootDiagnostics_SystemProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootSystemProxyCallback,
    0LL,
    &PerfDiagGlobals);
  EtwRegister(
    &MS_Kernel_BootDiagnostics_UserProxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpBootUserProxyCallback,
    0LL,
    &qword_140F04288);
  EtwRegister(
    &MS_Kernel_SecondaryLogonDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpSecondaryLogonProxyCallback,
    0LL,
    &qword_140F04290);
  EtwRegister(
    &MS_Kernel_ShutdownDiagnostics_Proxy_Provider,
    (PETWENABLECALLBACK)PerfDiagpShutdownProxyCallback,
    0LL,
    &qword_140F04298);
  result = EtwRegister(&MS_Kernel_BootDiagnostics_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    ActivityId.Data1 = 1729382729;
    *(_DWORD *)&ActivityId.Data2 = 1213813042;
    *(_DWORD *)ActivityId.Data4 = 933705344;
    *(_DWORD *)&ActivityId.Data4[4] = -668649292;
    EtwWriteStartScenario((ULONG_PTR *)RegHandle, &KMBootEvt_SystemBoot_Start, &ActivityId, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
