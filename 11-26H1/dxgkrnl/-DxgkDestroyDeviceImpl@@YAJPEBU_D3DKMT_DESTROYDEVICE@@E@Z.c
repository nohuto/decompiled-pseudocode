/*
 * XREFs of ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1403A21D8
 * Callers:
 *     DxgkDestroyDeviceInternal @ 0x1401C5C10 (DxgkDestroyDeviceInternal.c)
 *     ?VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402258B0 (-VmBusDestroyDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyDevice @ 0x1403A21C0 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140038EE0 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003CE00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401C25AC (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A2844 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A2C44 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1403A2FA8 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403A3054 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkDestroyDeviceImpl(const struct _D3DKMT_DESTROYDEVICE *a1, char a2)
{
  __int64 v4; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5; // r12
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r13
  unsigned int ULongFromUser; // r14d
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // edx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r9
  const char *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // [rsp+50h] [rbp-148h] BYREF
  __int64 v27; // [rsp+58h] [rbp-140h]
  char v28; // [rsp+60h] [rbp-138h]
  unsigned __int8 v29[8]; // [rsp+68h] [rbp-130h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-120h]
  _BYTE v32[24]; // [rsp+80h] [rbp-118h] BYREF
  _BYTE v33[24]; // [rsp+98h] [rbp-100h] BYREF
  GUID ActivityId; // [rsp+B0h] [rbp-E8h] BYREF
  _BYTE v35[160]; // [rsp+C0h] [rbp-D8h] BYREF

  v29[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x32u, 0, &v30, v29);
  v5 = v30;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 2010);
  Current = DXGPROCESS::GetCurrent(v6);
  if ( Current )
  {
    if ( a2 )
      ULongFromUser = RtlReadULongFromUser(&a1->hDevice);
    else
      ULongFromUser = a1->hDevice;
    v31 = ULongFromUser;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v32, Current);
    v9 = (ULongFromUser >> 6) & 0xFFFFFF;
    v10 = ULongFromUser >> 30;
    if ( v9 < *((_DWORD *)Current + 74)
      && (v11 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v9 + 8), v10 == ((v11 >> 5) & 3))
      && (v11 & 0x2000) == 0
      && (v11 & 0x1F) != 0 )
    {
      v13 = *((_QWORD *)Current + 35);
      if ( (*(_BYTE *)(v13 + 16LL * v9 + 8) & 0x1F) == 3 )
      {
        v14 = *(_QWORD *)(v13 + 16LL * v9);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        v14 = 0LL;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      if ( v9 < *((_DWORD *)Current + 74) )
      {
        v15 = *((_QWORD *)Current + 35);
        v16 = *(_DWORD *)(16LL * v9 + v15 + 8);
        if ( v10 == ((v16 >> 5) & 3) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
          *(_DWORD *)(16LL * ((ULongFromUser >> 6) & 0xFFFFFF) + v15 + 8) |= 0x2000u;
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v32);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)&ActivityId,
        (struct DXGDEVICE *)v14);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v33,
        (struct _KTHREAD **)(v14 + 144));
      DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)&ActivityId);
      DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v14, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)&ActivityId);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, v14, 2, v17, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v35, v18);
      DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v14);
      DXGDEVICE::DestroyAllTrackedWorkloads((DXGDEVICE *)v14);
      v19 = *(_QWORD *)(v14 + 1896);
      if ( v19 )
      {
        if ( !*(_QWORD *)(v19 + 3160) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2499;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            2499LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v19 + 3160), (const struct DXGDEVICE *)v14)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
               *(ADAPTER_DISPLAY **)(v19 + 3160),
               (const struct DXGDEVICE *)v14) )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v35);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds((struct DXGDEVICE *)v14, v5, 1);
        }
      }
      else
      {
        v22 = *(_DWORD *)(v14 + 1908);
        if ( v22 )
        {
          WdLogSingleEntry2(2LL, v14, v22);
          WdLogGlobalForLineNumber = 2524;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%I64x is being destroyed but VidPnOwnershipCount = 0x%I64x",
            v14,
            *(unsigned int *)(v14 + 1908),
            0LL,
            0LL,
            0LL);
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v33);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&ActivityId);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      if ( v29[0] )
        DisplayScenarioContextDissociate(&v30);
      return 0LL;
    }
    WdLogSingleEntry2(2LL, ULongFromUser, -1073741811LL);
    WdLogGlobalForLineNumber = 2454;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      ULongFromUser,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    v24 = v29[0] == 0;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2415;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    v24 = v29[0] == 0;
  }
  if ( !v24 )
    DisplayScenarioContextDissociate(&v30);
  return 3221225485LL;
}
