/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022A560
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1401BB9F0 (DxgkQueryAllocationResidency.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  const wchar_t *v4; // r9
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  int *v14; // r14
  int AllocationResidency; // eax
  __int64 v17; // [rsp+20h] [rbp-68h]
  _BYTE v18[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v18,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3189LL;
    v4 = L"The adapter is already closed by the guest";
LABEL_26:
    WdLogGlobalForLineNumber = v3;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v6 = v5;
  if ( !v5 )
  {
LABEL_27:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    return 0;
  }
  v7 = *(_DWORD *)(v5 + 28);
  if ( v7 )
    v8 = 0LL;
  else
    v8 = *(unsigned int *)(v5 + 40);
  v9 = 4 * v8;
  if ( v9 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3196LL;
    goto LABEL_25;
  }
  v10 = v9 + 56;
  if ( v10 < 0x38 )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3202LL;
    goto LABEL_25;
  }
  if ( v10 > *((_DWORD *)a1 + 36) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3207LL;
LABEL_25:
    v4 = L"Invalid packet size";
    goto LABEL_26;
  }
  v11 = 1LL;
  if ( !v7 )
    v11 = *(unsigned int *)(v6 + 40);
  v12 = 4 * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3216LL;
    goto LABEL_25;
  }
  v13 = v12 + 4;
  if ( (unsigned int)v12 >= 0xFFFFFFFC )
  {
    WdLogSingleEntry0(2LL);
    v3 = 3221LL;
    goto LABEL_25;
  }
  v14 = (int *)operator new[](v13, 0x4B677844u, 64LL);
  if ( v14 )
  {
    *(_QWORD *)(v6 + 32) = v6 + 56;
    *(_QWORD *)(v6 + 48) = v14 + 1;
    AllocationResidency = DxgkQueryAllocationResidency((_D3DKMT_QUERYALLOCATIONRESIDENCY *)(v6 + 24));
    *v14 = AllocationResidency;
    if ( AllocationResidency < 0 )
    {
      WdLogSingleEntry1(2LL);
      v17 = *v14;
      WdLogGlobalForLineNumber = 3240;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkQueryAllocationResidency failed: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v14, v13);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
    v2 = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3228;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Memory allocation failed", 3228LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
  return v2;
}
