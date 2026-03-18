/*
 * XREFs of ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1402307C0
 * Callers:
 *     ?DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1403B6060 (-DxgkNotifyProcessThawCallout@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendNotifyProcessThaw(DXG_GUEST_GLOBAL_VMBUS *this, int a2)
{
  struct DXGKVMB_COMMAND_BASE *v4; // rax
  struct _MDL *v5; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v6[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-128h]

  v7 = 0;
  *(_OWORD *)v6 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v6, this, 0x18u, 0LL, 0LL, 0LL);
  v4 = v6[0];
  *((_BYTE *)v6[0] + 12) = 1;
  *((_DWORD *)v4 + 3) &= 0x1FFu;
  *(_QWORD *)v4 = 0LL;
  *((_DWORD *)v4 + 2) = a2;
  *((_QWORD *)v4 + 2) = 1008LL;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v6[1], v6[0], v7, 0LL, 0LL, v5);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v6);
}
