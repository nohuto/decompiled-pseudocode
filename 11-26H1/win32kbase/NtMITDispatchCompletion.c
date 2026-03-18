/*
 * XREFs of NtMITDispatchCompletion @ 0x14009D540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ @ 0x1400E9F98 (-Cleanup@SensorIOCPWCP@IOCPDispatcher@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CreateKernelIocpWcp @ 0x1401C0B20 (CreateKernelIocpWcp.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtMITDispatchCompletion(int a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int CurrentThreadId; // eax
  unsigned int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  char v12; // si
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // r8d
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v22; // rcx
  __int64 v24; // rdi
  __int64 KernelIocpWcp; // rax
  __int64 v26; // r14
  __int64 v27; // rcx
  void (__fastcall *v28)(_QWORD); // rax
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+90h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18800);
  v6 = v5 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v5 + 8, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  LODWORD(v5) = *(_DWORD *)(v5 + 40);
  v8 = CurrentThreadId;
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 == (_DWORD)v5 )
  {
    v11 = (int)WPP_GLOBAL_Control;
    v12 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v9) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v10) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v9 || (_BYTE)v10 )
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v10,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        13,
        (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
    v14 = *(_QWORD *)(W32GetUserSessionState(v11, v9, v10) + 19248);
    if ( a1 == 0x80000000 )
    {
      v16 = a2;
      if ( a2 >= *(_DWORD *)(v14 + 2568) )
      {
        LODWORD(v32) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3722LL);
        DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a2, *(unsigned int *)(v14 + 2568), 0LL, 0LL, 0LL, 0LL, 0);
      }
      else
      {
        v17 = v14 + 40LL * a2;
        v18 = *(_QWORD *)(v17 + 24);
        if ( v18 )
        {
          if ( (int)ZwAssociateWaitCompletionPacket(
                      v18,
                      *(_QWORD *)(v14 + 2904),
                      *(_QWORD *)(v17 + 8),
                      v16,
                      0xFFFFFFFF80000000uLL,
                      0,
                      0LL,
                      0LL) < 0 )
            KeBugCheck(0x164u);
          if ( v18 == *(_QWORD *)(v17 + 24) )
          {
            InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
              (InputTraceLogging::ThreadLockedPerfRegion *)&v32,
              "HandleSensorDispatcherSignal",
              0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v17 + 32))(*(_QWORD *)(v17 + 16), *(_QWORD *)(v17 + 40));
            v20 = v32;
            if ( v32 )
            {
              CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v19, v13);
              if ( CurrentThreadWin32Thread )
                v22 = *CurrentThreadWin32Thread;
              else
                v22 = 0LL;
              *(_QWORD *)(v22 + 376) = *(_QWORD *)(v20 + 48);
              InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v32);
            }
          }
          else
          {
            IOCPDispatcher::SensorIOCPWCP::Cleanup((IOCPDispatcher::SensorIOCPWCP *)(v17 + 8));
          }
        }
        else
        {
          LODWORD(v32) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3740LL);
          DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, v17 + 8, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
        }
      }
    }
    else if ( a1 == -2147483647 )
    {
      if ( a2 < *(_DWORD *)(v14 + 2896) )
      {
        v24 = 32LL * a2;
        if ( *(_QWORD *)(v24 + v14 + 2584) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v32,
            "HandleInputThreadSignal",
            0LL);
          KernelIocpWcp = *(_QWORD *)(v24 + v14 + 2584);
          v26 = *(_QWORD *)(v24 + v14 + 2576);
          if ( !KernelIocpWcp && (KernelIocpWcp = CreateKernelIocpWcp()) == 0
            || (int)ZwAssociateWaitCompletionPacket(
                      KernelIocpWcp,
                      *(_QWORD *)(v14 + 2904),
                      v26,
                      a2,
                      -2147483647LL,
                      0,
                      0LL,
                      0LL) < 0 )
          {
            KeBugCheck(0x164u);
          }
          v28 = *(void (__fastcall **)(_QWORD))(v24 + v14 + 2592);
          if ( v28 )
            v28(*(_QWORD *)(v24 + v14 + 2600));
          v29 = v32;
          if ( v32 )
          {
            v30 = (__int64 *)PsGetCurrentThreadWin32Thread(v27, v13);
            if ( v30 )
              v31 = *v30;
            else
              v31 = 0LL;
            *(_QWORD *)(v31 + 376) = *(_QWORD *)(v29 + 48);
            InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v32);
          }
        }
      }
    }
    else
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, a2, 0LL, 0LL, 0LL, 0LL, 0);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v12 = 0;
    if ( (_BYTE)v13 || v12 )
    {
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v15,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        2,
        14,
        (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
