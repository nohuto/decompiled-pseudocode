/*
 * XREFs of ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x14018DB04
 * Callers:
 *     DxgkFreeGpuVirtualAddress @ 0x1403D1110 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  _DWORD *v9; // rcx
  unsigned int v11; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-128h]
  char v14; // [rsp+44h] [rbp-124h] BYREF

  v13 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x30u, 0LL, 0LL, 0LL);
  v9 = P[0];
  if ( P[0] )
  {
    *((_BYTE *)P[0] + 12) = 0;
    v9[3] &= 0x1FFu;
    *(_QWORD *)v9 = 0LL;
    v9[2] = a2;
    *((_QWORD *)v9 + 2) = 16LL;
    *((_QWORD *)v9 + 4) = a4;
    *((_QWORD *)v9 + 5) = a5;
    v9[6] = a3;
    v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v13);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v11;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v14 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
