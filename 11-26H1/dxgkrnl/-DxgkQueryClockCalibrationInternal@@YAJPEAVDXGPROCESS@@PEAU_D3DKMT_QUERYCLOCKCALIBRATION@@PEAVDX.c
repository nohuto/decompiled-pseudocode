/*
 * XREFs of ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x14038AB98
 * Callers:
 *     ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A820 (-VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryClockCalibration @ 0x14038A9F0 (DxgkQueryClockCalibration.c)
 * Callees:
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1400098A4 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x14018D7F4 (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x14029F0F4 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkQueryClockCalibrationInternal(
        struct DXGPROCESS *a1,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a2,
        struct DXGADAPTER *a3)
{
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  DXGADAPTER *v8; // rsi
  struct DXGADAPTER *v9; // rbx
  int v10; // edi
  __int64 PhysicalAdapterIndex; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // ebx
  DXGADAPTER *v17; // rcx
  struct DXGGLOBAL *Global; // rax
  int ClockCalibration; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int IndirectDisplayPairedAdapter; // eax
  __int64 v25; // r15
  __int64 hAdapter; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char v29; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v30[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v31[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[144]; // [rsp+90h] [rbp-70h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2125);
  if ( !a3 )
  {
    WdLogSingleEntry2(2LL, a1, a2->hAdapter);
    hAdapter = a2->hAdapter;
    WdLogGlobalForLineNumber = 10491;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)a1,
      hAdapter,
      0LL,
      0LL,
      0LL);
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return -1073741811LL;
  }
  v6 = *((_QWORD *)a3 + 395);
  v7 = 0LL;
  v30[0] = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 96) )
    {
      v16 = -1073741811;
      WdLogSingleEntry2(2LL, 0LL, -1073741811LL);
      WdLogGlobalForLineNumber = 8833;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        0LL,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      v17 = v30[0];
      if ( v30[0] )
LABEL_26:
        DXGADAPTER::ReleaseReference(v17);
LABEL_27:
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 10502;
      goto LABEL_38;
    }
    v8 = a3;
    _InterlockedIncrement64((volatile signed __int64 *)a3 + 3);
    v7 = v30[0];
  }
  if ( !*((_QWORD *)a3 + 396) )
  {
    if ( (*((_DWORD *)a3 + 111) & 0x100) != 0 )
    {
      IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a3, 0, v30);
      v25 = IndirectDisplayPairedAdapter;
      if ( IndirectDisplayPairedAdapter >= 0 )
        goto LABEL_13;
      WdLogSingleEntry2(2LL, a3, IndirectDisplayPairedAdapter);
      WdLogGlobalForLineNumber = 8875;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
        (__int64)a3,
        v25,
        0LL,
        0LL,
        0LL);
      if ( v30[0] )
        DXGADAPTER::ReleaseReference(v30[0]);
      v30[0] = 0LL;
      if ( v8 )
        DXGADAPTER::ReleaseReference(v8);
      v16 = v25;
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v31);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
      Global = DXGGLOBAL::GetGlobal();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, *((struct DXGADAPTER **)Global + 126));
      if ( v30[0] )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
        goto LABEL_13;
      }
      v16 = -1073741637;
      WdLogSingleEntry2(2LL, a3, -1073741637LL);
      WdLogGlobalForLineNumber = 8889;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
        (__int64)a3,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v31);
      if ( v30[0] )
        DXGADAPTER::ReleaseReference(v30[0]);
      v30[0] = 0LL;
      if ( v8 )
      {
        v17 = v8;
        goto LABEL_26;
      }
    }
    goto LABEL_27;
  }
  if ( v7 )
    DXGADAPTER::ReleaseReference(v7);
  v30[0] = a3;
  _InterlockedIncrement64((volatile signed __int64 *)a3 + 3);
  v30[1] = (struct DXGADAPTER *)-1LL;
LABEL_13:
  v9 = v30[0];
  v30[0] = 0LL;
  if ( v8 )
    DXGADAPTER::ReleaseReference(v8);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v9, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  DXGADAPTER::ReleaseReference(v9);
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10519;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return (unsigned int)v10;
  }
  PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
  if ( (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)v9 + 74) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10525;
    goto LABEL_47;
  }
  if ( a2->NodeOrdinal >= *(unsigned __int16 *)(352 * PhysicalAdapterIndex + *((_QWORD *)v9 + 379)) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 10531;
LABEL_47:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    goto LABEL_48;
  }
  *(_OWORD *)&a2->ClockData.GpuFrequency = 0LL;
  a2->ClockData.CpuClockCounter = 0LL;
  a2->ClockData.Flags.Value = 0;
  if ( *((_BYTE *)v9 + 209) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) < 0x15u )
    {
      v16 = -1073741822;
      goto LABEL_36;
    }
    ClockCalibration = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
                         (struct DXGADAPTER *)((char *)v9 + 4712),
                         a1,
                         a2);
  }
  else
  {
    v12 = *((_QWORD *)v9 + 396);
    v13 = *(_QWORD *)(v12 + 16);
    if ( !*(_QWORD *)(v13 + 912) || *(int *)(v13 + 2776) < 0x2000 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 10555;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Clock calibration cannot be queried if the driver does nto support it.",
        10555LL,
        0LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      }
      return 3221225473LL;
    }
    ClockCalibration = ADAPTER_RENDER::DdiCalibrateGpuClock(
                         (struct DXGADAPTER **)v12,
                         a2->NodeOrdinal,
                         a2->PhysicalAdapterIndex,
                         &a2->ClockData);
  }
  v16 = ClockCalibration;
LABEL_36:
  if ( v16 < 0 )
  {
    WdLogSingleEntry3(3LL, v16, a2->NodeOrdinal, a2->PhysicalAdapterIndex);
    WdLogGlobalForLineNumber = 10572;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
LABEL_38:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
  return 0LL;
}
