/*
 * XREFs of ?VmBusLock2@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402B8960
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_LOCK2@@@@YAPEAUDXGKVMB_COMMAND_LOCK2@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140063330 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_LOCK2@@@@YAPEAUDXGKVMB_COMMAND_LOCK2@@PEAUDXGADAPTER_VMBU.c)
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     DxgkLock @ 0x1402B9040 (DxgkLock.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct VMBPACKETCOMPLETION__ *v12; // rcx
  _DWORD v13[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v14; // [rsp+60h] [rbp-1h]
  _BYTE v15[24]; // [rsp+68h] [rbp+7h] BYREF
  __int128 Src; // [rsp+80h] [rbp+1Fh] BYREF
  __int128 v17; // [rsp+90h] [rbp+2Fh]
  __int128 v18; // [rsp+A0h] [rbp+3Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v15,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_LOCK2>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v13[1] = 0;
      v6 = v4 + 24;
      if ( *(_BYTE *)(v4 + 48) )
      {
        v9 = *(_DWORD *)(v4 + 28);
        Src = 0LL;
        DWORD1(Src) = v9;
        LODWORD(Src) = *(_DWORD *)v6;
        v10 = *(_DWORD *)(v5 + 52);
        v18 = 0LL;
        LODWORD(v18) = v10;
        v11 = *(_DWORD *)(v5 + 56);
        v17 = 0LL;
        DWORD2(Src) = v11;
        v7 = DxgkLock(&Src);
        v8 = *((_QWORD *)&v17 + 1);
      }
      else
      {
        v7 = DxgkLock2((unsigned int *)(v4 + 24));
        v8 = *(_QWORD *)(v6 + 16);
      }
      v13[0] = v7;
      v12 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v14 = v8;
      VmBusCompletePacket(v12, v13, 0x10u);
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2057;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2057LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return 0;
  }
}
