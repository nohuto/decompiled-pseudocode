/*
 * XREFs of ?VmBusSendCompleteTransaction@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x14022BAF4
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402260E0 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCompleteTransaction(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGVMBUSMESSAGE *a2)
{
  int v2; // eax
  __int64 v3; // rdi

  v2 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
         this,
         *((unsigned __int8 **)a2 + 1),
         *(struct DXGKVMB_COMMAND_BASE **)a2,
         *((_DWORD *)a2 + 4));
  v3 = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 14044;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCompleteTransaction failed: 0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v3;
}
