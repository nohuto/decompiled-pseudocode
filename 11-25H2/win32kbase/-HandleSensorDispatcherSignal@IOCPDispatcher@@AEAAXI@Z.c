/*
 * XREFs of ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140039208
 * Callers:
 *     NtMITDispatchCompletion @ 0x140038D50 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400390A0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x14003932C (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x140082994 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall IOCPDispatcher::HandleSensorDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  char *v6; // rbx
  __int64 v7; // rax
  char v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h]

  if ( a2 >= *((_DWORD *)this + 642) )
  {
    v9 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3797LL);
    v4 = *((unsigned int *)this + 642);
    v5 = a2;
LABEL_3:
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, v5, v4, 0LL, 0LL, 0LL, 0LL, 0);
    return;
  }
  v6 = (char *)this + 40 * a2;
  v7 = *((_QWORD *)v6 + 3);
  if ( !v7 )
  {
    v9 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3815LL);
    v4 = 0LL;
    v5 = (unsigned __int64)(v6 + 8);
    goto LABEL_3;
  }
  if ( IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v7, *((_QWORD *)v6 + 1), 0x80000000LL, a2) == *((_QWORD *)v6 + 3) )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v8,
      "HandleSensorDispatcherSignal",
      0LL);
    (*((void (__fastcall **)(_QWORD, _QWORD))v6 + 4))(*((_QWORD *)v6 + 2), *((_QWORD *)v6 + 5));
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v8);
  }
  else
  {
    IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v6 + 8));
  }
}
