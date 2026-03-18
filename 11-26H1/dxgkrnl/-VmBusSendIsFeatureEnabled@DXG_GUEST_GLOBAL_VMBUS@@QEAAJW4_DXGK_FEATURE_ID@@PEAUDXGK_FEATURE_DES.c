/*
 * XREFs of ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140230370
 * Callers:
 *     ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140070FBC (-DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUR.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendIsFeatureEnabled(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  struct DXGKVMB_COMMAND_BASE *v8; // rax
  int v9; // ebx
  struct _MDL *v11; // [rsp+30h] [rbp-D0h]
  unsigned int v12[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+60h] [rbp-A0h]
  _DWORD v15[2]; // [rsp+170h] [rbp+70h] BYREF
  __int16 v16; // [rsp+178h] [rbp+78h]
  int v17; // [rsp+17Ah] [rbp+7Ah]

  v14 = 0;
  *(_OWORD *)v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v13, a1, 0x20u, 0LL, 0LL, 0LL);
  v8 = v13[0];
  if ( v13[0] )
  {
    *((_BYTE *)v13[0] + 12) = 1;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = 0;
    *((_QWORD *)v8 + 2) = 1022LL;
    *((_DWORD *)v8 + 6) = a2;
    v12[0] = 16;
    v9 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(a1, (unsigned __int8 *)v13[1], v13[0], v14, v15, v12, v11);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 14469;
    }
    else
    {
      v9 = -1073741823;
      if ( v12[0] >= 0x10 )
      {
        v9 = v15[0];
        *(_DWORD *)a3 = v15[1];
        *(_WORD *)(a3 + 4) = v16;
        *a4 = v17;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v13);
  return (unsigned int)v9;
}
