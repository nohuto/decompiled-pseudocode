/*
 * XREFs of ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E3EC
 * Callers:
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1403B77F0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(DXG_GUEST_GLOBAL_VMBUS *this, int a2, int a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rax
  struct _MDL *v7; // [rsp+30h] [rbp-148h]
  struct DXGKVMB_COMMAND_BASE *v8[2]; // [rsp+40h] [rbp-138h] BYREF
  unsigned int v9; // [rsp+50h] [rbp-128h]

  v9 = 0;
  *(_OWORD *)v8 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v8, this, 0x20u, 0LL, 0LL, 0LL);
  v6 = v8[0];
  *((_BYTE *)v8[0] + 12) = 1;
  *((_DWORD *)v6 + 3) &= 0x1FFu;
  *(_QWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = a2;
  *((_QWORD *)v6 + 2) = 1013LL;
  *((_DWORD *)v6 + 6) = a3;
  DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v8[1], v8[0], v9, 0LL, 0LL, v7);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v8);
}
