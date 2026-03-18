/*
 * XREFs of ?VmBusSendGetDeviceState@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_GETDEVICESTATE@@@Z @ 0x1402BE834
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     McTemplateK0xqqxx_EtwWriteTransfer @ 0x1400850F0 (McTemplateK0xqqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1401FD8B4 (-FindMappingFromGuestVidPnSourceId@REMOTEMONITORMAPPING@@QEAAJIPEAUPATH_IDENTIFIER_HOST@1@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int v8; // r15d
  char *v9; // rbx
  int HostProcess; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  DWORD LowPart; // edx
  int v17; // r14d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  int v21; // esi
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  LARGE_INTEGER v24; // rdx
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER v27; // r8
  LARGE_INTEGER v28; // rax
  LARGE_INTEGER v29; // rax
  unsigned int *v30; // [rsp+20h] [rbp-E0h]
  unsigned int *v31; // [rsp+28h] [rbp-D8h]
  LARGE_INTEGER v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  int v38; // [rsp+90h] [rbp-70h]
  char v39; // [rsp+94h] [rbp-6Ch] BYREF
  __int128 v40; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v41[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _OWORD v42[4]; // [rsp+1C0h] [rbp+C0h] BYREF

  v8 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 438);
  *(_OWORD *)P = 0LL;
  v34 = 0LL;
  v35 = 0;
  v38 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x58u, 0LL, 0LL, 0LL);
  v9 = (char *)P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    v9[12] = 0;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *((_DWORD *)v9 + 2) = HostProcess;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 2) = 28LL;
    *((_QWORD *)v9 + 10) = 0LL;
    v33 = 64;
    *(_OWORD *)(v9 + 24) = *(_OWORD *)&a4->hDevice;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(&a4->PresentQueueState + 1);
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(&a4->PresentQueueState + 3);
    *((_QWORD *)v9 + 9) = *((_QWORD *)&a4->PresentQueueState + 5);
    *((_DWORD *)v9 + 6) = *((_DWORD *)a3 + 118);
    if ( v8 >= 0x20 && *((_DWORD *)v9 + 7) == 4 )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38159,
                  *((_DWORD *)v9 + 8),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v34) >= 0
        && v34 == *(_QWORD *)(*((_QWORD *)this + 9) + 4812LL) )
      {
        if ( v8 >= 0x23 )
        {
          if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 216) )
          {
            if ( *((_DWORD *)v9 + 8) < 0x10u )
            {
              v13 = DXGGLOBAL::GetGlobal();
              v14 = 32LL * *((unsigned int *)v9 + 8);
              v15 = *((_QWORD *)v13 + 216);
              do
              {
                _InterlockedExchange((volatile __int32 *)&v32, *(_DWORD *)(v14 + v15 + 8));
                LowPart = v32.LowPart;
                _InterlockedExchange64(&v36, *(_QWORD *)(v14 + v15 + 16));
                _InterlockedExchange((volatile __int32 *)&v32, *(_DWORD *)(v14 + v15 + 8));
              }
              while ( v32.LowPart != LowPart );
              if ( v36 )
              {
                memset(v42, 0, sizeof(v42));
                v17 = 0;
                v18 = *(_OWORD *)(&a4->PresentQueueState + 1);
                v42[0] = *(_OWORD *)&a4->hDevice;
                v19 = *(_OWORD *)(&a4->PresentQueueState + 3);
                v42[1] = v18;
                *(_QWORD *)&v18 = *((_QWORD *)&a4->PresentQueueState + 5);
                *(_QWORD *)&v42[2] = __PAIR64__(DWORD1(v19), v32.LowPart);
                *(_QWORD *)((char *)&v42[3] + 4) = DWORD1(v18);
                *((_QWORD *)&v42[2] + 1) = v36;
                v42[1] = 0uLL;
                LODWORD(v42[3]) = 0;
                goto LABEL_21;
              }
            }
          }
        }
        v20 = v35;
        *((_QWORD *)v9 + 10) |= 1uLL;
        *((_DWORD *)v9 + 8) = v20;
      }
    }
    v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v42, &v33);
    if ( v21 < 0 )
      goto LABEL_40;
    v21 = -1073741823;
    if ( v33 < 0x40 )
      goto LABEL_40;
    v17 = DWORD2(v42[3]);
LABEL_21:
    v21 = v17;
    v22 = v42[1];
    *(_OWORD *)&a4->hDevice = v42[0];
    v23 = v42[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v22;
    *(_QWORD *)&v22 = *(_QWORD *)&v42[3];
    *(_OWORD *)(&a4->PresentQueueState + 3) = v23;
    *((_QWORD *)&a4->PresentQueueState + 5) = v22;
    if ( v8 < 0x20 || *((_DWORD *)v9 + 7) != 4 )
      goto LABEL_39;
    v32.QuadPart = 0LL;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v17 >= 0 )
    {
      if ( !*((_QWORD *)&v42[2] + 1) )
      {
LABEL_29:
        if ( *((_QWORD *)&v42[1] + 1) )
        {
          v21 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v42[1] + 1), -1LL, &v32);
          if ( v21 < 0 )
          {
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = 0LL;
          }
          else
          {
            v29 = v32;
            if ( PerformanceCounter.QuadPart < (unsigned __int64)v32.QuadPart )
            {
              v33 = 0;
              v41[0] = 0LL;
              v40 = 0LL;
              RtlGetSystemGlobalData(18LL, v41, 8LL);
              RtlGetMultiTimePrecise(&v40, 3LL, &v33);
              HIDWORD(v30) = PerformanceCounter.HighPart;
              DxgCreateLiveDumpWithWdLogs(403LL, 2081LL);
              v29 = v32;
            }
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime = v29;
          }
        }
        goto LABEL_36;
      }
      v21 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v42[2] + 1), -1LL, &v32);
      if ( v21 >= 0 )
      {
        v28 = v32;
        if ( PerformanceCounter.QuadPart < (unsigned __int64)v32.QuadPart )
        {
          v33 = 0;
          v41[0] = 0LL;
          v40 = 0LL;
          RtlGetSystemGlobalData(18LL, v41, 8LL);
          RtlGetMultiTimePrecise(&v40, 3LL, &v33);
          HIDWORD(v30) = PerformanceCounter.HighPart;
          DxgCreateLiveDumpWithWdLogs(403LL, 2081LL);
          v28 = v32;
        }
        a4->PresentState.PresentStats.SyncGPUTime = v28;
        goto LABEL_29;
      }
      a4->PresentState.PresentStats.SyncGPUTime.QuadPart = 0LL;
    }
LABEL_36:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v31) = a4->PresentState.PresentStats.SyncQPCTime.LowPart;
      LODWORD(v30) = v35;
      McTemplateK0xqqxx_EtwWriteTransfer(
        v25.QuadPart,
        v24.QuadPart,
        v27.QuadPart,
        v34,
        v30,
        v31,
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart,
        *((_QWORD *)&v42[2] + 1));
    }
LABEL_39:
    if ( v21 >= 0 )
    {
LABEL_41:
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return (unsigned int)v21;
    }
LABEL_40:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 12488;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendGetDeviceState failed: 0x%I64x",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
    a4->PresentState.VidPnSourceId = 4;
    v21 = 0;
    goto LABEL_41;
  }
  if ( P[1] )
  {
    if ( P[1] != &v39 )
      ExFreePoolWithTag(P[1], 0x4D767844u);
  }
  return 3221225495LL;
}
