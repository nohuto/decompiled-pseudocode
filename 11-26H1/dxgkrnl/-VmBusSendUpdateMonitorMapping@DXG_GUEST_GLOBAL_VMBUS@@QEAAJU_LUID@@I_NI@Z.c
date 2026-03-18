/*
 * XREFs of ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x140232260
 * Callers:
 *     ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z @ 0x1401FD604 (-AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_HOST@1@PEAUPATH_IDENTIFIER_GUEST@1@@Z.c)
 *     ?RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z @ 0x1401FD9C4 (-RemoveMappingEntry@REMOTEMONITORMAPPING@@AEAAXPEAUREMOTE_MONITOR_MAPPING_ENTRY@1@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendUpdateMonitorMapping(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        int a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  int v5; // r14d
  int v9; // edi
  struct DXGKVMB_COMMAND_BASE *v10; // rcx
  struct _MDL *v12; // [rsp+30h] [rbp-D0h]
  unsigned int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+170h] [rbp+70h] BYREF

  v5 = a4;
  v9 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x23u )
  {
    *(_OWORD *)v14 = 0LL;
    v15 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v14, this, 0x30u, 0LL, 0LL, 0LL);
    v10 = v14[0];
    if ( !v14[0] )
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
      return 3221225495LL;
    }
    *((_DWORD *)v14[0] + 9) = a5;
    *((_BYTE *)v10 + 12) = 1;
    *((_DWORD *)v10 + 3) &= 0x1FFu;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 0;
    *((_QWORD *)v10 + 2) = 1019LL;
    *((struct _LUID *)v10 + 3) = a2;
    *((_DWORD *)v10 + 8) = a3;
    *((_DWORD *)v10 + 10) = v5;
    v13[0] = 8;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v14[1], v14[0], v15, &v16, v13, v12);
    if ( v9 >= 0 )
    {
      v9 = -1073741823;
      if ( v13[0] >= 4 )
        v9 = v16;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v14);
  }
  return (unsigned int)v9;
}
