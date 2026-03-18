/*
 * XREFs of ?VmBusUnlock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140428540
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE40 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkUnlock2 @ 0x14028E410 (DxgkUnlock2.c)
 *     DxgkUnlock @ 0x1402BB730 (DxgkUnlock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUnlock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  D3DKMT_HANDLE *v5; // rcx
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  struct _D3DKMT_UNLOCK Src; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+60h] [rbp-28h] BYREF
  int v10; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v4 )
    {
      v5 = (D3DKMT_HANDLE *)(v4 + 24);
      if ( *(_BYTE *)(v4 + 32) )
      {
        Src.hDevice = *v5;
        Src.phAllocations = (const D3DKMT_HANDLE *)(v4 + 28);
        Src.NumAllocations = 1;
        v6 = DxgkUnlock(&Src);
      }
      else
      {
        v6 = DxgkUnlock2(v5);
      }
      v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v10 = v6;
      VmBusCompletePacket(v7, &v10, 4u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2088;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2088LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return 0;
  }
}
