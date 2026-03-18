/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140314910
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x140314E64 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1403153B8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  UINT v8; // esi
  D3DKMT_HANDLE v9; // r13d
  unsigned int v10; // r12d
  struct _KTHREAD **v11; // rsi
  unsigned int v12; // edx
  int v13; // r8d
  int EntryType; // r15d
  const unsigned __int64 *v15; // r9
  const wchar_t *v17; // r9
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  __int64 v20; // [rsp+20h] [rbp-99h]
  __int64 v21; // [rsp+20h] [rbp-99h]
  _DWORD v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  __int64 v24; // [rsp+60h] [rbp-59h]
  _BYTE v25[16]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v26[24]; // [rsp+78h] [rbp-41h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU Src; // [rsp+90h] [rbp-29h] BYREF
  int v28; // [rsp+120h] [rbp+67h] BYREF
  struct DXGCONTEXT *v29; // [rsp+128h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v30; // [rsp+130h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v26,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v4 )
    {
LABEL_21:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
      return v2;
    }
    v29 = 0LL;
    v30 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
    v7 = Current;
    if ( !Current )
    {
      PsGetCurrentProcess(v6);
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4369;
      CurrentProcess = PsGetCurrentProcess(v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"unexpected process: 0x%I64x",
        CurrentProcess,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_32;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v22, *(_DWORD *)(v4 + 24), Current, &v29, 0, 0);
    if ( !v29 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25, *(_DWORD *)(v4 + 24), v7, &v30, 0, 1);
      if ( !v30 )
      {
        WdLogSingleEntry1(2LL);
        v21 = *(unsigned int *)(v4 + 24);
        WdLogGlobalForLineNumber = 4381;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid SubmitWait handle: 0x%I64x",
          v21,
          0LL,
          0LL,
          0LL,
          0LL);
        v28 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v22);
        goto LABEL_19;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v25);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v22);
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 && v8 <= 0xFFFF )
    {
      if ( *((_DWORD *)a1 + 36) < 12 * v8 + 40 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 4399;
      }
      else
      {
        v9 = *(_DWORD *)(v4 + 24);
        if ( !v29 )
        {
          v22[0] = *(_DWORD *)(v4 + 24);
          v24 = v4 + 40;
          v22[1] = v8;
          v23 = v4 + 8 * v8 + 40;
          v28 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v22);
          if ( v28 >= 0 )
            goto LABEL_19;
          WdLogSingleEntry1(2LL);
          v17 = L"DxgkSubmitWaitForSyncObjectsToHwQueue failed: 0x%I64x";
          WdLogGlobalForLineNumber = 4436;
          goto LABEL_27;
        }
        memset(&Src, 0, sizeof(Src));
        Src.hContext = v9;
        Src.ObjectCount = v8;
        Src.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 8 * v8 + 40);
        if ( *(_BYTE *)(v4 + 32) )
          Src.FenceValue = *(_QWORD *)(v4 + 40);
        else
          Src.FenceValue = 0LL;
        v10 = *(_DWORD *)(v4 + 8 * v8 + 40);
        v11 = v7 + 31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 31));
        v12 = (v10 >> 6) & 0xFFFFFF;
        if ( v12 < *((_DWORD *)v7 + 74)
          && (v13 = *((_DWORD *)v7[35] + 4 * v12 + 2), ((v10 >> 25) & 0x60) == (*((_BYTE *)v7[35] + 16 * v12 + 8) & 0x60))
          && (v13 & 0x2000) == 0
          && (v13 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)(v7 + 35), v12);
        }
        else
        {
          EntryType = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v11 + 4);
        ExReleasePushLockSharedEx(v11, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType == 8 )
        {
          v15 = 0LL;
          if ( *(_BYTE *)(v4 + 32) )
          {
LABEL_18:
            v28 = DxgkWaitForSynchronizationObjectFromGpuInternal(&Src, 0, 0, v15, 0);
            if ( v28 >= 0 )
              goto LABEL_19;
            WdLogSingleEntry1(2LL);
            v17 = L"DxgkWaitForSynchronizationObjectFromGpuInternal failed: 0x%I64x";
            WdLogGlobalForLineNumber = 4422;
LABEL_27:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v28, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_19;
          }
LABEL_23:
          v15 = (const unsigned __int64 *)(v4 + 40);
          goto LABEL_18;
        }
        if ( !*(_BYTE *)(v4 + 32) )
          goto LABEL_23;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4414;
      }
LABEL_32:
      v28 = -1073741811;
      goto LABEL_33;
    }
    WdLogSingleEntry1(2LL);
    v20 = *(unsigned int *)(v4 + 28);
    WdLogGlobalForLineNumber = 4390;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid object count 0x%I64x", v20, 0LL, 0LL, 0LL, 0LL);
    v28 = -1073741811;
LABEL_19:
    if ( v28 >= 0 )
    {
LABEL_20:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v28, 4u);
      v2 = 1;
      goto LABEL_21;
    }
LABEL_33:
    HandleAsyncCommandError(a1, v28, 0, 3);
    goto LABEL_20;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4359;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4359LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  return 0;
}
