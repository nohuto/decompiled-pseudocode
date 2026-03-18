/*
 * XREFs of ?VmBusSubmitCommandToHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402F7E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE_VB@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140050378 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_GETDEVICESTATE_VB@@@@YAPEAUDXGKVMB_COMMAND_GETDEVICESTATE.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140220E20 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648 (DxgkSubmitCommandToHwQueueInternal.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommandToHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdx
  struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 v11; // rax
  const wchar_t *v12; // r9
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v13,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_GETDEVICESTATE_VB>((__int64)a1);
    v4 = v3;
    if ( !v3 )
    {
LABEL_8:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
      return v2;
    }
    v5 = (struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 64);
    if ( v6 > 0x10 )
    {
      WdLogSingleEntry0(2LL);
      v11 = 5429LL;
      v12 = L"Invalid Written Primaries array";
      WdLogGlobalForLineNumber = 5429;
    }
    else
    {
      v7 = *((unsigned int *)a1 + 36);
      v8 = 4 * v6;
      if ( v7 - 80 < v8 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5437;
      }
      else
      {
        if ( (unsigned int)v7 - v8 - 80 >= *(unsigned int *)(v4 + 52) )
        {
          *(_QWORD *)(v4 + 72) = v4 + 80;
          *(_QWORD *)(v4 + 56) = v8 + v4 + 80;
          v9 = DxgkSubmitCommandToHwQueueInternal(v5);
          v14 = v9;
          if ( v9 >= 0 )
          {
LABEL_7:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v14, 4u);
            v2 = 1;
            goto LABEL_8;
          }
LABEL_14:
          HandleAsyncCommandError(a1, v9, v5->hHwQueue, 2);
          goto LABEL_7;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5444;
      }
      v11 = *((unsigned int *)a1 + 36);
      v12 = L"Invalid packet size 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
    v9 = -1073741811;
    v14 = -1073741811;
    goto LABEL_14;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5420;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5420LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  return 0;
}
