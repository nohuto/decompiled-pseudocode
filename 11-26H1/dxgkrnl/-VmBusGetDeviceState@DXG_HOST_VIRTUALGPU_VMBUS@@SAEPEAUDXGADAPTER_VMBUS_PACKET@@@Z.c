/*
 * XREFs of ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14036A260
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140050378 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 *     ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x14036ACC4 (-ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  unsigned int v3; // r14d
  __int64 v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // ecx
  _BYTE v8[32]; // [rsp+50h] [rbp-19h] BYREF
  _OWORD Src[4]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v10; // [rsp+D0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v8,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 592LL) + 392LL);
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
    if ( !v4 )
    {
LABEL_10:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
      return v2;
    }
    memset(Src, 0, sizeof(Src));
    Src[0] = *(_OWORD *)(v4 + 24);
    Src[1] = *(_OWORD *)(v4 + 40);
    Src[2] = *(_OWORD *)(v4 + 56);
    *(_QWORD *)&Src[3] = *(_QWORD *)(v4 + 72);
    if ( v3 >= 0x20 && *(_DWORD *)(v4 + 28) == 4 && (*(_BYTE *)(v4 + 80) & 1) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 32);
      v6 = *(_DWORD *)(v4 + 24);
      v10 = 0;
      DWORD2(Src[3]) = DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(v6, v5, &v10);
      if ( SDWORD2(Src[3]) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4539;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Fail to locate VidPnSourceId",
          4539LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_9;
      }
      DWORD2(Src[0]) = v10;
    }
    PsGetCurrentThreadPreviousMode();
    DWORD2(Src[3]) = DxgkGetDeviceStateInternal(Src);
LABEL_9:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), Src, 0x40u);
    v2 = 1;
    goto LABEL_10;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4517;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4517LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
  return 0;
}
