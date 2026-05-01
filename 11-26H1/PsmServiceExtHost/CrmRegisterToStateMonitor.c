/*
 * XREFs of CrmRegisterToStateMonitor @ 0x180048560
 * Callers:
 *     CrmActivityStart @ 0x180034D80 (CrmActivityStart.c)
 *     CrmStateMonitorAcDcDisplayStart @ 0x180048320 (CrmStateMonitorAcDcDisplayStart.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180048390 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180048470 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisStart @ 0x18006BC24 (CrmStateMonitorFanNoiseHysteresisStart.c)
 *     CrmStateMonitorAcDcBatteryStart @ 0x180076034 (CrmStateMonitorAcDcBatteryStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180076194 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180076560 (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18007660C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x1800766E8 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorDelayedCsStart @ 0x1800767D4 (CrmStateMonitorDelayedCsStart.c)
 *     CrmStateMonitorDelayedInternetLossStart @ 0x180076984 (CrmStateMonitorDelayedInternetLossStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x180076A7C (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180076B94 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180076CBC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180076D94 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorResourceUsageStart @ 0x180076FEC (CrmStateMonitorResourceUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180077288 (CrmStateMonitorSystemDiskUsageStart.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorListenerAdd @ 0x180048790 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorInitialize @ 0x180048924 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180048D74 (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 *     CrmStateMonitorCleanup @ 0x180076260 (CrmStateMonitorCleanup.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmRegisterToStateMonitor(__int64 a1, int a2)
{
  __int64 v3; // rdi
  unsigned int *v4; // rbx
  char *v5; // r14
  unsigned int **v6; // rdx
  unsigned int *v7; // rax
  int v8; // edi
  unsigned int v10; // eax
  PVOID Heap; // rax
  void *v12; // rbx
  void *v13; // rcx
  int v14; // [rsp+30h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-78h] BYREF
  UUID *v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  int *v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+78h] [rbp-40h]

  v3 = a2;
  RtlAcquireSRWLockShared(&CrmGlobals);
  v4 = (unsigned int *)*((_QWORD *)&CrmGlobals + v3 + 2);
  v5 = (char *)&CrmGlobals + 8 * v3;
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(v4 + 2);
    v4[4] = GetCurrentThreadId();
    v6 = (unsigned int **)*((_QWORD *)v4 + 4);
    v7 = (unsigned int *)(a1 + 8);
    if ( *v6 != v4 + 6 )
      __fastfail(3u);
    *(_QWORD *)v7 = v4 + 6;
    *(_QWORD *)(a1 + 16) = v6;
    *v6 = v7;
    *((_QWORD *)v4 + 4) = v7;
    RtlReleaseSRWLockShared(&CrmGlobals);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a1)(a1, *v4, *((_QWORD *)v4 + 5));
    v8 = 0;
    v4[4] = 0;
    RtlReleaseSRWLockExclusive(v4 + 2);
    if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 8) != 0 && (qword_1800E1300 & 8) == qword_1800E1300 )
    {
      v17 = 16LL;
      v16 = &Uuid;
      v14 = *v4;
      v19 = 4LL;
      v18 = &v14;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E12E8, byte_1800CC85B, 0LL, 0LL, 4u, &v15);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(&CrmGlobals);
    v10 = CrmStateMonitorSizeGet((unsigned int)v3);
    Heap = HampAllocateHeap(v10);
    v12 = Heap;
    if ( Heap )
    {
      CrmStateMonitorInitialize(Heap, (unsigned int)v3);
      v8 = CrmStateMonitorStart(v12);
      if ( v8 < 0 )
        goto LABEL_11;
      RtlAcquireSRWLockExclusive(&CrmGlobals);
      dword_1800E37C8 = GetCurrentThreadId();
      v8 = 0;
      v13 = (void *)*((_QWORD *)v5 + 2);
      if ( !v13 )
      {
        v13 = v12;
        *((_QWORD *)v5 + 2) = v12;
        v12 = 0LL;
      }
      CrmStateMonitorListenerAdd(v13, a1, 1LL);
      if ( v12 )
      {
LABEL_11:
        CrmStateMonitorCleanup(v12);
        HampFreeHeap(v12);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v8;
}
