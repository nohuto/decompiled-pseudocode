/*
 * XREFs of ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0
 * Callers:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002EBE4 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x1401970A0 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1401A9450 (-IommuBeginExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14030BAB8 (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x14030D2C4 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Flush@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14005F9A4 (-Flush@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140293D70 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z @ 0x1402FB050 (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEBDPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402FE460 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x14030ECA4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1403A1844 (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403EA088 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403EA1BC (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireCoreResourceExclusive(__int64 a1, int a2, char a3)
{
  int v5; // r13d
  int FirstProfilerInterface; // eax
  bool v7; // zf
  DXGGLOBAL *v8; // rbx
  __int64 v9; // rcx
  struct _EPROCESS *v10; // rax
  DXGGLOBAL *v11; // rbx
  __int64 v12; // rcx
  struct _EPROCESS *v13; // rax
  char v14; // r12
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v17; // r13
  int v18; // r12d
  __int64 v19; // rax
  DXGGLOBAL *Global; // rbx
  __int64 v21; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  char v23; // dl
  __int64 v24; // rax
  char v26; // [rsp+98h] [rbp+20h]

  v5 = a2;
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 4120;
  }
  if ( v5 == 3 )
  {
    KeEnterCriticalRegion();
    Current = DXGPROCESS::GetCurrent(v15);
    v17 = Current;
    v18 = a3 & 2;
    if ( v18 )
    {
      if ( !Current )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4182;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 4182LL, 0LL, 0LL, 0LL, 0LL);
      }
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)v17 + 216, 0LL);
      *((_QWORD *)v17 + 28) = KeGetCurrentThread();
      DXGPROCESS::AcquireDeviceLockForAllDevices(v17, (struct DXGADAPTER *)a1);
      v19 = *(_QWORD *)(a1 + 3168);
      if ( v19 && *(_QWORD *)(v19 + 744) )
        DXGPROCESS::FlushAllDevice(v17, (const struct DXGADAPTER *)a1);
    }
    Global = DXGGLOBAL::GetGlobal();
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v21);
    DXGGLOBAL::StartCoreDripsBlockerTracking(Global, *(_QWORD *)(a1 + 232), 0LL, CurrentProcess);
    v23 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    v26 = v23;
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
      v23 = v26;
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, 3, v23 != 0);
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    v24 = *(_QWORD *)(a1 + 3168);
    if ( v24 && *(_QWORD *)(v24 + 744) )
    {
      if ( *(_BYTE *)(v24 + 752) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4225;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"this->GetRenderCore()->m_bSchedulerSuspendedByAcquireCoreResource == FALSE",
          4225LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)ADAPTER_RENDER::SuspendScheduler(*(ADAPTER_RENDER **)(a1 + 3168), 0, 0) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4227;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(SchedulerStatus)", 4227LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_BYTE *)(*(_QWORD *)(a1 + 3168) + 752LL) = 1;
    }
    if ( !*(_QWORD *)(a1 + 3168) )
      ADAPTER_DISPLAY::Flush(*(ADAPTER_DISPLAY **)(a1 + 3160));
    if ( v18 )
    {
      DXGPROCESS::ReleaseDeviceLockForAllDevices(v17, (struct DXGADAPTER *)a1);
      *((_QWORD *)v17 + 28) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v17 + 216, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
    goto LABEL_13;
  }
  KeEnterCriticalRegion();
  if ( (a3 & 1) == 0 )
  {
    v11 = DXGGLOBAL::GetGlobal();
    v13 = (struct _EPROCESS *)PsGetCurrentProcess(v12);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v11, *(_QWORD *)(a1 + 232), 0LL, v13);
    v14 = DXGADAPTER::TryWakeUpFromD3State((DXGADAPTER *)a1);
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
    }
    DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(a1, v5, v14 != 0);
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
    }
    if ( *(_DWORD *)(a1 + 200) == 1 )
      DpiEnableD3Requests(*(_QWORD *)(a1 + 216));
    goto LABEL_11;
  }
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
  }
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0);
  if ( ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 168)) )
  {
    *(_DWORD *)(a1 + 4964) = v5;
    FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface();
    v7 = bTracingEnabled == 0;
    *(_DWORD *)(a1 + 4968) = FirstProfilerInterface;
    if ( !v7
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
    }
    v8 = DXGGLOBAL::GetGlobal();
    v10 = (struct _EPROCESS *)PsGetCurrentProcess(v9);
    DXGGLOBAL::StartCoreDripsBlockerTracking(v8, *(_QWORD *)(a1 + 232), 0LL, v10);
LABEL_11:
    if ( !*(_QWORD *)(a1 + 3168) )
      ADAPTER_DISPLAY::Flush(*(ADAPTER_DISPLAY **)(a1 + 3160));
LABEL_13:
    *(_DWORD *)(a1 + 176) = v5;
    return;
  }
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
  }
  KeLeaveCriticalRegion();
}
