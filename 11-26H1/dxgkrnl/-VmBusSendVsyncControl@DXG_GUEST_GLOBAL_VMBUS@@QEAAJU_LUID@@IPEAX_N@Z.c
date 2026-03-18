/*
 * XREFs of ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x14023239C
 * Callers:
 *     ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x140284810 (-StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ @ 0x140284AA0 (-StopVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAXXZ.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        int a3,
        void *a4,
        bool a5)
{
  struct DXGKVMB_COMMAND_BASE *v9; // rcx
  int v10; // ebx
  struct _MDL *v12; // [rsp+30h] [rbp-D0h]
  unsigned int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+170h] [rbp+70h] BYREF

  v15 = 0;
  *(_OWORD *)v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, this, 0x38u, 0LL, 0LL, 0LL);
  v9 = v14[0];
  if ( v14[0] )
  {
    *((_DWORD *)v14[0] + 12) = a5;
    *((_BYTE *)v9 + 12) = 1;
    *((_DWORD *)v9 + 3) &= 0x1FFu;
    *(_QWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 2) = 1016LL;
    *((struct _LUID *)v9 + 3) = a2;
    *((_DWORD *)v9 + 8) = a3;
    *((_QWORD *)v9 + 5) = a4;
    v13[0] = 8;
    v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v14[1], v14[0], v15, &v16, v13, v12);
    if ( v10 >= 0 )
    {
      v10 = -1073741823;
      if ( v13[0] >= 4 )
        v10 = v16;
    }
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  return (unsigned int)v10;
}
