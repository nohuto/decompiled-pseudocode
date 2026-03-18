/*
 * XREFs of ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404048D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14004FE10 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140056FF0 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140061770 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x14034BD5C (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 Pool2; // rsi
  __int64 v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  void *v13; // r9
  _BYTE v14[24]; // [rsp+50h] [rbp-9h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+68h] [rbp+Fh] BYREF
  int v16; // [rsp+C0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v14,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v4 = v3;
    if ( v3 )
    {
      v16 = -1073741811;
      memset(&Src, 0, sizeof(Src));
      Pool2 = 0LL;
      v6 = *(unsigned int *)(v3 + 28);
      if ( (_DWORD)v6 && (v8 = 4 * v6, v8 <= 0xFFFFFFFF) && (v9 = 8LL * *(unsigned int *)(v4 + 28), v9 <= 0xFFFFFFFF) )
      {
        v10 = v8 + 56;
        if ( v10 < 0x38 )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 4291;
        }
        else
        {
          v11 = v10 + v9;
          if ( v11 < v10 )
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4296;
          }
          else if ( *((_DWORD *)a1 + 36) >= v11 )
          {
            if ( *(_QWORD *)(v4 + 40) )
            {
              Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
              if ( Pool2 )
              {
                v12 = *(_QWORD *)(v4 + 40);
                *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
                *(_QWORD *)(Pool2 + 8) = v12;
                *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v4 + 48);
                *(_BYTE *)(Pool2 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 408LL) & 0x10) != 0;
                DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
                Src.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 56);
                Src.FenceValueArray = (const UINT64 *)(v4 + 56 + 4LL * *(unsigned int *)(v4 + 28));
                Src.Flags.Value = *(_DWORD *)(v4 + 32);
                Src.hDevice = *(_DWORD *)(v4 + 24);
                Src.ObjectCount = *(_DWORD *)(v4 + 28);
                Src.hAsyncEvent = (HANDLE)Pool2;
                v16 = DxgkWaitForSynchronizationObjectFromCpuInternal(&Src, 0, (void *)Pool2, v13);
              }
              else
              {
                WdLogSingleEntry0(6LL);
                WdLogGlobalForLineNumber = 4317;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                  4317LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v16 = -1073741801;
              }
            }
            else
            {
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 4310;
            }
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 4301;
          }
        }
      }
      else
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4286;
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
      if ( v16 < 0 )
      {
        if ( Pool2 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4350;
      }
      v2 = 1;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return v2;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4271;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4271LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
}
