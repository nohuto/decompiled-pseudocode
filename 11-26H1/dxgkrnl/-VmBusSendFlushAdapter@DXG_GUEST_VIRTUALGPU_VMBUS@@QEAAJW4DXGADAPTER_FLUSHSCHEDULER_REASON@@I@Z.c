/*
 * XREFs of ?VmBusSendFlushAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@I@Z @ 0x14018DDB4
 * Callers:
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushAdapter(struct DXG_VMBUS_CHANNEL_BASE *a1, int a2, int a3)
{
  _DWORD *v6; // rcx
  int v8; // edx
  unsigned int v9; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-128h]
  char v12; // [rsp+44h] [rbp-124h] BYREF

  v11 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, a1, 0x28u, 0LL, 0LL, 0LL);
  v6 = P[0];
  if ( P[0] )
  {
    v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 4800LL);
    *((_BYTE *)P[0] + 12) = 0;
    v6[3] &= 0x1FFu;
    *(_QWORD *)v6 = 0LL;
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = 43LL;
    v6[6] = v8;
    v6[7] = a2;
    v6[8] = a3;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
           a1,
           (unsigned __int8 *)P[1],
           (struct DXGKVMB_COMMAND_BASE *)P[0],
           v11);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v9;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v12 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
