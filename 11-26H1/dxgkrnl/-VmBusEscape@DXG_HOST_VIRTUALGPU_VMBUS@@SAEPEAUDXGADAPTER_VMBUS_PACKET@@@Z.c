/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226570
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v3; // rax
  const wchar_t *v4; // r9
  _DWORD *v6; // rax
  int *v7; // rsi
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // [rsp+28h] [rbp-19h]
  _BYTE v11[24]; // [rsp+58h] [rbp+17h] BYREF
  _DWORD Src[4]; // [rsp+70h] [rbp+2Fh] BYREF
  void *v13; // [rsp+80h] [rbp+3Fh]
  unsigned int v14; // [rsp+88h] [rbp+47h]
  int v15; // [rsp+8Ch] [rbp+4Bh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    v3 = 5212LL;
    v4 = L"The adapter is already closed by the guest";
    WdLogGlobalForLineNumber = 5212;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
    return 0;
  }
  v6 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v6 )
    goto LABEL_4;
  v7 = v6 + 8;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*v7 || (v6[9] & 0x40) == 0) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5224;
    goto LABEL_4;
  }
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 55 < (unsigned int)v6[10] )
  {
    WdLogSingleEntry1(2LL);
    v3 = *((unsigned int *)a1 + 36);
    v4 = L"Invalid packet size 0x%I64x";
    WdLogGlobalForLineNumber = 5230;
    goto LABEL_3;
  }
  if ( (unsigned int)*v7 < 2 || *v7 == 3 || *v7 == 8 || *v7 == 28 || *v7 == 29 || *v7 == 40 )
  {
    Src[0] = v6[6];
    Src[3] = v6[9];
    Src[1] = v6[7];
    v15 = v6[11];
    Src[2] = *v7;
    v14 = v6[10];
    v13 = v6 + 12;
    v8 = DxgkEscape(Src);
    if ( v8 < 0 )
    {
      v9 = v8;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5266;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkEscapeInternal failed: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v13, v14);
      v2 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v10 = *v7;
    WdLogGlobalForLineNumber = 5245;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Unsupported escape type 0x%I64x", v10, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return v2;
}
