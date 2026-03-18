/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14040A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140061FAC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  int v12; // eax
  _BYTE v13[32]; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5374;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5374LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = 4LL * *(unsigned int *)(v4 + 392);
    if ( v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v8 = 5383LL;
      v9 = L"Invalid history buffer array";
      WdLogGlobalForLineNumber = 5383;
    }
    else
    {
      v7 = *((unsigned int *)a1 + 36);
      if ( v7 - 408 >= (unsigned __int64)(unsigned int)v6 )
      {
        v10 = v7 - (unsigned int)v6 - 408;
        if ( v10 >= *(unsigned int *)(v5 + 320) )
        {
          *(_QWORD *)(v5 + 400) = v5 + 408;
          *(_QWORD *)(v5 + 312) = (unsigned int)v6 + v5 + 408;
          Current = DXGPROCESS::GetCurrent(v10);
          v12 = DxgkSubmitCommandInternal((struct _D3DKMT_SUBMITCOMMAND *)(v5 + 24), Current);
          v14 = v12;
          if ( v12 >= 0 )
            goto LABEL_15;
          goto LABEL_14;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5395;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5389;
      }
      v8 = *((unsigned int *)a1 + 36);
      v9 = L"Invalid packet size 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    v12 = -1073741811;
    v14 = -1073741811;
LABEL_14:
    HandleAsyncCommandError(a1, v12, *(_DWORD *)(v5 + 52), 1);
LABEL_15:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v14, 4u);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return v2;
}
