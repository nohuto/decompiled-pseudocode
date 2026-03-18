/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402239D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1403A6E48 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  _DWORD *v5; // rbx
  unsigned __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-19h]
  _BYTE v10[24]; // [rsp+58h] [rbp+17h] BYREF
  _D3DKMT_CREATECONTEXTVIRTUAL Src; // [rsp+70h] [rbp+2Fh] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1129LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v5 = (_DWORD *)v4;
  if ( !v4 )
    goto LABEL_3;
  v6 = *(unsigned int *)(v4 + 48);
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 55 >= v6 )
  {
    Src.pPrivateDriverData = 0LL;
    Src.PrivateDriverDataSize = 0;
    *(_QWORD *)&Src.hContext = 0LL;
    Src.Flags.Value = *(_DWORD *)(v4 + 40);
    Src.hDevice = *(_DWORD *)(v4 + 28);
    Src.ClientHint = *(_DWORD *)(v4 + 44);
    Src.NodeOrdinal = *(_DWORD *)(v4 + 32);
    Src.EngineAffinity = *(_DWORD *)(v4 + 36);
    if ( *(_DWORD *)(v4 + 48) )
    {
      Src.pPrivateDriverData = (void *)(v4 + 52);
      Src.PrivateDriverDataSize = *(_DWORD *)(v4 + 48);
    }
    *(_DWORD *)(v4 + 24) = 0;
    v7 = DxgkCreateContextVirtualImpl(&Src, 0);
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create context: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v5[6] = Src.hContext;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v5, v6 + 55);
      v2 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v9 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 1135;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size: 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return v2;
}
