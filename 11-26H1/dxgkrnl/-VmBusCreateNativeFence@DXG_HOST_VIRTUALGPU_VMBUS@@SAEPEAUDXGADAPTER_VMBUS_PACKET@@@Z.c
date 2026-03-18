/*
 * XREFs of ?VmBusCreateNativeFence@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATENATIVEFENCE@@@@YAPEAUDXGKVMB_COMMAND_CREATENATIVEFENCE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140083FD0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATENATIVEFENCE@@@@YAPEAUDXGKVMB_COMMAND_CREATENATIVEFE.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateNativeFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rdi
  __int64 v5; // rax
  const wchar_t *v6; // r9
  int v7; // edx
  int v8; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v9[24]; // [rsp+60h] [rbp-41h] BYREF
  _OWORD v10[7]; // [rsp+78h] [rbp-29h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v9,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3974;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3974LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATENATIVEFENCE>((__int64)a1);
  if ( v4 )
  {
    memset((char *)v10 + 4, 0, 0x6CuLL);
    v8 = 0;
    if ( *(_DWORD *)(v4 + 24) )
    {
      LODWORD(v10[0]) = NtDxgkCreateNativeFenceInternal((_OWORD *)(v4 + 24), &v8, 0);
      if ( SLODWORD(v10[0]) < 0 )
      {
        WdLogSingleEntry1(2LL);
        v5 = SLODWORD(v10[0]);
        v6 = L"DxgkCreateNativeFenceInternal failed: 0x%I64x";
        v7 = 0x40000;
        WdLogGlobalForLineNumber = 4003;
      }
      else
      {
        DWORD1(v10[0]) = *(_DWORD *)(v4 + 28);
        *(_QWORD *)&v10[2] = *(_QWORD *)(v4 + 120);
        v10[1] = *(_OWORD *)(v4 + 128);
        DWORD2(v10[0]) = v8;
        v10[3] = *(_OWORD *)(v4 + 32);
        v10[4] = *(_OWORD *)(v4 + 48);
        v10[5] = *(_OWORD *)(v4 + 64);
        v10[6] = *(_OWORD *)(v4 + 80);
        if ( (*(_DWORD *)(v4 + 112) & 1) == 0 || v8 )
          goto LABEL_12;
        WdLogSingleEntry0(1LL);
        v5 = 3998LL;
        v6 = L"Output.hGlobalSyncObject";
        WdLogGlobalForLineNumber = 3998;
        v7 = 262146;
      }
      DxgkLogInternalTriageEvent(0LL, v7, -1, (__int64)v6, v5, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3981;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device handle is zero for native fence",
        3981LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v10[0]) = -1073741811;
    }
LABEL_12:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v10, 0x70u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  return v2;
}
