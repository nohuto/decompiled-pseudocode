/*
 * XREFs of ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x14009DA80
 * Callers:
 *     UserKSTWait @ 0x1400F0898 (UserKSTWait.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1400E9F98 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CreateKernelIocpWcp @ 0x1401C0B20 (CreateKernelIocpWcp.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall IOCPDispatcher::Dispatch(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 KernelIocpWcp; // rax
  __int64 v15; // r14
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 == 0x80000000 )
  {
    v4 = a3;
    if ( a3 >= *(_DWORD *)(a1 + 2568) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3722LL);
      v17 = *(unsigned int *)(a1 + 2568);
      v18 = v4;
    }
    else
    {
      v5 = 0LL;
      v6 = a1 + 40LL * a3;
      v7 = *(_QWORD *)(v6 + 24);
      if ( v7 )
      {
        if ( (int)ZwAssociateWaitCompletionPacket(
                    v7,
                    *(_QWORD *)(a1 + 2904),
                    *(_QWORD *)(v6 + 8),
                    a3,
                    0xFFFFFFFF80000000uLL,
                    0,
                    0LL,
                    0LL) < 0 )
          KeBugCheck(0x164u);
        if ( v7 != *(_QWORD *)(v6 + 24) )
        {
          IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v6 + 8));
          return;
        }
        InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
          (InputTraceLogging::ThreadLockedPerfRegion *)&v19,
          "HandleSensorDispatcherSignal",
          0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v6 + 32))(*(_QWORD *)(v6 + 16), *(_QWORD *)(v6 + 40));
        goto LABEL_7;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3740LL);
      v17 = 0LL;
      v18 = v6 + 8;
    }
LABEL_20:
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, v18, v17, 0LL, 0LL, 0LL, 0LL, 0);
    return;
  }
  if ( a2 != -2147483647 )
  {
    v17 = a3;
    v18 = a2;
    goto LABEL_20;
  }
  if ( a3 >= *(_DWORD *)(a1 + 2896) )
    return;
  v5 = 0LL;
  v12 = 32LL * a3;
  v13 = a3;
  if ( !*(_QWORD *)(v12 + a1 + 2584) )
    return;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v19,
    "HandleInputThreadSignal",
    0LL);
  KernelIocpWcp = *(_QWORD *)(v12 + a1 + 2584);
  v15 = *(_QWORD *)(v12 + a1 + 2576);
  if ( !KernelIocpWcp && (KernelIocpWcp = CreateKernelIocpWcp()) == 0
    || (int)ZwAssociateWaitCompletionPacket(KernelIocpWcp, *(_QWORD *)(a1 + 2904), v15, v13, -2147483647LL, 0, 0LL, 0LL) < 0 )
  {
    KeBugCheck(0x164u);
  }
  v16 = *(void (__fastcall **)(_QWORD))(v12 + a1 + 2592);
  if ( v16 )
    v16(*(_QWORD *)(v12 + a1 + 2600));
LABEL_7:
  v10 = v19;
  if ( v19 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v9, v8);
    if ( CurrentThreadWin32Thread )
      v5 = *CurrentThreadWin32Thread;
    *(_QWORD *)(v5 + 376) = *(_QWORD *)(v10 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v19);
  }
}
