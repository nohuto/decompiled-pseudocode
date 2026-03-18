/*
 * XREFs of ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14034E7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEHWQUEUE@@@@YAPEAUDXGKVMB_COMMAND_CREATEHWQUEUE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140062058 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEHWQUEUE@@@@YAPEAUDXGKVMB_COMMAND_CREATEHWQUEUE@@PEA.c)
 *     DxgkCreateHwQueueInternal @ 0x14034EA38 (DxgkCreateHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-39h]
  _BYTE v10[24]; // [rsp+58h] [rbp-9h] BYREF
  __int128 Src; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+80h] [rbp+1Fh]
  __int128 v13; // [rsp+90h] [rbp+2Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1185;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1185LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_7;
  }
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEHWQUEUE>((__int64)a1);
  v4 = v3;
  if ( !v3 )
  {
LABEL_7:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
  v5 = *(unsigned int *)(v3 + 64);
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 71 >= v5 )
  {
    Src = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    *(_QWORD *)&Src = *(_QWORD *)(v3 + 56);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_QWORD *)&v12 = v3 + 68;
      DWORD2(Src) = *(_DWORD *)(v3 + 64);
    }
    v7 = DxgkCreateHwQueueInternal(&Src);
    *(_DWORD *)(v4 + 24) = v7;
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1225;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create HwQueue, returning: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      *(_QWORD *)(v4 + 28) = *((_QWORD *)&v12 + 1);
      *(_OWORD *)(v4 + 40) = v13;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v4, v5 + 71);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v9 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 1191;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size: 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return v2;
}
