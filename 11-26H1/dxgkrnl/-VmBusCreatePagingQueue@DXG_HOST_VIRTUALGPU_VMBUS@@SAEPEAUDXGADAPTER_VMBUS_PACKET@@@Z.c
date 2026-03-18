/*
 * XREFs of ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402244C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x14035018C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int PagingQueueInternal; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  __int64 v8; // rbx
  _BYTE v9[24]; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v10[2]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v5 = (_DWORD *)v4;
    if ( v4 )
    {
      PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v4 + 24), 0);
      if ( PagingQueueInternal < 0 )
      {
        v8 = PagingQueueInternal;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4571;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkCreatePagingQueueInternal failed: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
        v10[0] = v5[8];
        v10[1] = v5[9];
        v12 = (unsigned int)v5[10];
        v11 = *((_QWORD *)v5 + 5);
        VmBusCompletePacket(v7, v10, 0x18u);
        v2 = 1;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4554;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4554LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return 0;
  }
}
