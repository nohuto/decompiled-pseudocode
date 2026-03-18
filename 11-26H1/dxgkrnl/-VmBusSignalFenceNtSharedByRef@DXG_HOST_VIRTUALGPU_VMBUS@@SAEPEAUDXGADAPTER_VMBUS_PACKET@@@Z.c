/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x14040C5C8 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CC54 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rcx
  DXGSHAREDVMOBJECT *v10; // r14
  __int64 v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[24]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v13[24]; // [rsp+68h] [rbp-20h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4225;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Presentation is disabled", 4225LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4229;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4229LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v5 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v12, *((struct _KTHREAD ***)a1 + 12));
    v6 = *((_QWORD *)a1 + 12);
    v7 = (*(_DWORD *)(v5 + 24) >> 6) & 0xFFFFFF;
    if ( v7 < *(_DWORD *)(v6 + 296) )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v6 + 280) + 16LL * v7 + 8);
      if ( ((*(_DWORD *)(v5 + 24) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v6 + 280) + 16LL * v7 + 8) & 0x60)
        && (v8 & 0x2000) == 0
        && (v8 & 0x1F) != 0 )
      {
        v9 = *(_QWORD *)(v6 + 280);
        if ( (*(_BYTE *)(v9 + 16LL * v7 + 8) & 0x1F) == 0xD )
        {
          v10 = *(DXGSHAREDVMOBJECT **)(v9 + 16LL * v7);
          if ( v10 && (*(_DWORD *)v10 == 11 || *(_DWORD *)v10 == 8) )
          {
            DXGSHAREDVMOBJECT::AddReference(v10);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
            v14 = DxgkSignalSynchronizationObjectFromGpuByReference(
                    *((_QWORD *)v10 + 1),
                    *(_QWORD *)(v5 + 32),
                    *(unsigned int *)(v5 + 28));
            DXGSHAREDVMOBJECT::ReleaseReference(v10);
            goto LABEL_14;
          }
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry1(2LL);
    v11 = *(unsigned int *)(v5 + 24);
    WdLogGlobalForLineNumber = 4244;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared object handle: 0x%I64x",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741811;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
LABEL_14:
    if ( v14 < 0 )
      HandleAsyncCommandError(a1, v14, *(_DWORD *)(v5 + 28), 1);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v14, 4u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v2;
}
