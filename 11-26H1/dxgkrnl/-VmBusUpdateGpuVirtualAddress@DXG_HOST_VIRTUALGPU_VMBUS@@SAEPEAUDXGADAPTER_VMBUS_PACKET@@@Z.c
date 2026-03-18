/*
 * XREFs of ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234690
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400840F0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_UPDATEGP.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x140376110 (DxgkUpdateGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUpdateGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // r8d
  int updated; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v9; // [rsp+28h] [rbp-29h]
  _BYTE v10[24]; // [rsp+58h] [rbp+7h] BYREF
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v11; // [rsp+70h] [rbp+1Fh] BYREF
  int v12; // [rsp+B8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEGPUVIRTUALADDRESS>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)&v11.Flags + 1) = 0;
      *(_OWORD *)&v11.Reserved0 = 0LL;
      v11.FenceValue = *(_QWORD *)(v4 + 24);
      v11.Flags.Value = *(_DWORD *)(v4 + 48);
      v11.hContext = *(_DWORD *)(v4 + 36);
      v11.hDevice = *(_DWORD *)(v4 + 32);
      v11.hFenceObject = *(_DWORD *)(v4 + 40);
      v11.NumOperations = *(_DWORD *)(v4 + 44);
      v11.Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(v4 + 56);
      v6 = *(_DWORD *)(v4 + 44);
      if ( v6 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 120) >> 6 >= (unsigned int)(v6 - 1) )
      {
        updated = DxgkUpdateGpuVirtualAddress(&v11);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        v9 = *(unsigned int *)(v5 + 44);
        WdLogGlobalForLineNumber = 5667;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid NumOperations: 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
        updated = -1073741811;
      }
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v12 = updated;
      VmBusCompletePacket(v8, &v12, 4u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5650;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5650LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    return 0;
  }
}
