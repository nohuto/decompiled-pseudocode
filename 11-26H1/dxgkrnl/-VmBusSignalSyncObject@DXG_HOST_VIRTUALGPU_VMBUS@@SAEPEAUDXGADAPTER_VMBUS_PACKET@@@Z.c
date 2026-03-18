/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140441CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140037E00 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline @ 0x140081F04 (Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x14034DCCC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // edx
  char v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rax
  const wchar_t *v11; // r9
  unsigned int v12; // r13d
  __int64 Pool2; // rax
  struct DXGDEVICE *v14; // r8
  __int64 v15; // rcx
  UINT64 *v16; // r15
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  const wchar_t *v20; // r9
  unsigned int v21; // r10d
  unsigned int *v22; // r12
  unsigned int v23; // r8d
  unsigned int v24; // eax
  int v25; // r9d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // r13
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // r12
  UINT v36; // eax
  struct _KTHREAD **v37; // r8
  struct DXGDEVICE *v38; // rbx
  __int64 v39; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h]
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v44; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v45[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v46[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v47[24]; // [rsp+80h] [rbp-80h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v48; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v49[24]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v50[160]; // [rsp+D0h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v49,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4014;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4014LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
    return 0;
  }
  v42 = -1073741811;
  v43 = 0;
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v44 = 0LL;
    v6 = v4[6];
    if ( v6 )
    {
      if ( v6 <= 0xFFFF )
        goto LABEL_6;
    }
    else if ( (v4[7] & 2) != 0 )
    {
LABEL_6:
      v7 = v4[12];
      if ( !v7 || (v8 = 1, (v4[7] & 2) != 0) )
        v8 = 0;
      v9 = v4[8];
      if ( v8 )
      {
        if ( v9 )
        {
          WdLogSingleEntry0(2LL);
          v10 = 4031LL;
          v11 = L"Invalid context count for signal from CPU";
          WdLogGlobalForLineNumber = 4031;
LABEL_65:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_66;
        }
        v43 = v7;
        v9 = 0;
      }
      else if ( !v9 || v9 > 0xFFFF )
      {
        WdLogSingleEntry1(2LL);
        v10 = (unsigned int)v5[8];
        v11 = L"Invalid context count: 0x%I64x";
        WdLogGlobalForLineNumber = 4040;
        goto LABEL_65;
      }
      v12 = 4 * (v6 + v9) + 56;
      if ( *((_DWORD *)a1 + 36) < v12 )
        goto LABEL_66;
      if ( (v5[7] & 2) != 0 )
      {
        if ( !*((_QWORD *)v5 + 6) )
        {
          WdLogSingleEntry0(2LL);
          v10 = 4057LL;
          v11 = L"Invalid CPU event pointer";
          WdLogGlobalForLineNumber = 4057;
          goto LABEL_65;
        }
        Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
        v44 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 4063;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
            4063LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v42 = -1073741801;
          goto LABEL_67;
        }
        *(_BYTE *)(Pool2 + 16) = 1;
        *(_QWORD *)v44 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
        *((_QWORD *)v44 + 1) = *((_QWORD *)v5 + 6);
        *((_BYTE *)v44 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 408LL) & 0x10) != 0;
        DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v44);
      }
      v14 = (struct DXGDEVICE *)(unsigned int)v5[6];
      v15 = *((_DWORD *)a1 + 36) - v12;
      v46[0] = v14;
      if ( (unsigned int)v15 >= 8 * v6 )
        v16 = (UINT64 *)&v5[(_QWORD)v14 + 14 + (unsigned int)v5[8]];
      else
        v16 = 0LL;
      if ( v8 )
      {
        if ( !v16 )
        {
          WdLogSingleEntry0(2LL);
          CurrentProcess = 4120LL;
          v20 = L"Fence value array is NULL for signal from CPU";
          WdLogGlobalForLineNumber = 4120;
          goto LABEL_30;
        }
        v35 = (unsigned int)v5[12];
        v36 = v5[7];
        v48.ObjectCount = (unsigned int)v14;
        v37 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
        v48.ObjectHandleArray = v5 + 14;
        *((_DWORD *)&v48.Flags + 1) = 0;
        v48.hDevice = v35;
        v48.FenceValueArray = v16;
        v48.Flags.Value = v36;
        v46[0] = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v45, v35, v37, v46);
        v38 = v46[0];
        if ( v46[0] )
        {
          DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v46, v46[0]);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v38, 0, v39, 0);
          v42 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
          if ( v42 >= 0 )
          {
            Global = DXGGLOBAL::GetGlobal();
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global, 0);
            if ( (unsigned int)Feature_MSRC100019_58525777__private_IsEnabledNoReportingNoInline() )
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
            v42 = SignalSynchronizationObjectFromCpu(&v48, *((struct DXGPROCESS **)a1 + 11), v38);
            DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v46);
        }
        else
        {
          WdLogSingleEntry2(2LL, (unsigned int)v35, -1073741811LL);
          WdLogGlobalForLineNumber = 4137;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
            v35,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v45);
LABEL_66:
        if ( v42 >= 0 )
        {
LABEL_69:
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v42, 4u);
          v2 = 1;
          goto LABEL_70;
        }
LABEL_67:
        HandleAsyncCommandError(a1, v42, v43, 0);
        if ( v44 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v44);
        goto LABEL_69;
      }
      v17 = *((_QWORD *)a1 + 11);
      if ( !v17 )
      {
        PsGetCurrentProcess(v15);
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4088;
        CurrentProcess = PsGetCurrentProcess(v18);
        v20 = L"Unexpected Process: 0x%I64x";
LABEL_30:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, CurrentProcess, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_67;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v47,
        *((struct _KTHREAD ***)a1 + 11));
      v21 = *(_DWORD *)(v17 + 296);
      v22 = &v5[(__int64)v46[0] + 14];
      v23 = *v22;
      v24 = (*v22 >> 6) & 0xFFFFFF;
      if ( v24 < v21
        && (v25 = *(_DWORD *)(*(_QWORD *)(v17 + 280) + 16LL * v24 + 8),
            ((v23 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v17 + 280) + 16LL * v24 + 8) & 0x60))
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        v27 = *(_QWORD *)(v17 + 280);
        v26 = 16LL * v24;
        if ( (*(_BYTE *)(v27 + v26 + 8) & 0x1F) == 7 )
        {
          v28 = *(_QWORD *)(v27 + 16LL * v24);
          if ( v28 )
          {
            v32 = 0;
            v33 = *(_DWORD *)(*(_QWORD *)(v28 + 16) + 468LL);
LABEL_48:
            v43 = v33;
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
            if ( v32 )
            {
              if ( !v16 )
              {
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 4165;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Fence value array is NULL for submit signal to HwQueue",
                  4165LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v42 = -1073741811;
                goto LABEL_67;
              }
              v34 = SubmitSignalSyncObjectsToHwQueue(
                      v5[6],
                      v5 + 14,
                      (struct _D3DDDICB_SIGNALFLAGS)v5[7],
                      v5[8],
                      v22,
                      v16,
                      *((struct DXGPROCESS **)a1 + 11),
                      0,
                      0);
            }
            else
            {
              v34 = SignalSynchronizationObjectInternal(
                      v5[6],
                      v5 + 14,
                      v5[7],
                      v5[8],
                      v22,
                      v16,
                      *((_QWORD *)v5 + 5),
                      (void **)&v44,
                      *((struct _KTHREAD ***)a1 + 11),
                      0);
            }
            v42 = v34;
            goto LABEL_66;
          }
        }
      }
      else
      {
        v26 = 16LL * v24;
      }
      if ( ((v23 >> 6) & 0xFFFFFF) >= v21 )
        goto LABEL_44;
      v29 = *(_DWORD *)(*(_QWORD *)(v17 + 280) + v26 + 8);
      if ( ((v23 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)(v17 + 280) + v26 + 8) & 0x60)
        || (v29 & 0x2000) != 0
        || (v29 & 0x1F) == 0 )
      {
        goto LABEL_44;
      }
      v30 = *(_QWORD *)(v17 + 280);
      if ( (*(_BYTE *)(v30 + v26 + 8) & 0x1F) != 0xF )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_44:
        WdLogSingleEntry1(2LL);
        v41 = *v22;
        WdLogGlobalForLineNumber = 4100;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid context handle: 0x%I64x",
          v41,
          0LL,
          0LL,
          0LL,
          0LL);
        v42 = -1073741811;
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47);
        goto LABEL_66;
      }
      v31 = *(_QWORD *)(v30 + v26);
      if ( !v31 )
        goto LABEL_44;
      v32 = 1;
      v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 16LL) + 468LL);
      goto LABEL_48;
    }
    WdLogSingleEntry1(2LL);
    v10 = (unsigned int)v5[6];
    v11 = L"Invalid sync object count: 0x%I64x";
    WdLogGlobalForLineNumber = 4023;
    goto LABEL_65;
  }
LABEL_70:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
  return v2;
}
