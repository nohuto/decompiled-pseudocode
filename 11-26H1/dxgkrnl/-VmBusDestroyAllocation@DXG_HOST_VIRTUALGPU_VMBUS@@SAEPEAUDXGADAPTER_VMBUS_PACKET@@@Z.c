/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140415610
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004ED14 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkDestroyAllocation2 @ 0x140359150 (DxgkDestroyAllocation2.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  __int128 Src; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  _BYTE v11[24]; // [rsp+68h] [rbp-18h] BYREF
  int v12; // [rsp+90h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1572;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1572LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( !v4 )
    goto LABEL_3;
  v5 = *(unsigned int *)(v4 + 32);
  if ( (_DWORD)v5 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 < 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1579;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 1579LL, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    *(_QWORD *)&Src = *(_QWORD *)(v4 + 24);
    v9 = *(_DWORD *)(v4 + 32);
    *((_QWORD *)&Src + 1) = v4 + 40;
    v10 = *(_DWORD *)(v4 + 36);
    v6 = DxgkDestroyAllocation2(&Src);
    v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v12 = v6;
    VmBusCompletePacket(v7, &v12, 4u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return v2;
}
