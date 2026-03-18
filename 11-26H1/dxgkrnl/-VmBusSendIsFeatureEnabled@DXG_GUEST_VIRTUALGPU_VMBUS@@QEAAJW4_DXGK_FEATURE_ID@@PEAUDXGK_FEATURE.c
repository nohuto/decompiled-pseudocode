/*
 * XREFs of ?VmBusSendIsFeatureEnabled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1402304C0
 * Callers:
 *     ?DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140070FBC (-DxgkIsFeatureEnabledVmBus@@YAJPEAXW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUR.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsFeatureEnabled(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v8; // rax
  int v9; // ebx
  unsigned int v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  _DWORD v14[2]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v15; // [rsp+168h] [rbp+68h]
  int v16; // [rsp+16Ah] [rbp+6Ah]

  v13 = 0;
  v12 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v12, a1, 0x20u, 0LL, 0LL, 0LL);
  v8 = v12;
  if ( (_QWORD)v12 )
  {
    *(_BYTE *)(v12 + 12) = 0;
    *(_DWORD *)(v8 + 12) &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 16) = 68LL;
    *(_DWORD *)(v8 + 24) = a2;
    v11[0] = 16;
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(a1, (struct DXGVMBUSMESSAGE *)&v12, v14, v11);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13516;
    }
    else
    {
      v9 = -1073741823;
      if ( v11[0] >= 0x10 )
      {
        v9 = v14[0];
        *(_DWORD *)a3 = v14[1];
        *(_WORD *)(a3 + 4) = v15;
        *a4 = v16;
      }
    }
  }
  else
  {
    v9 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v12);
  return (unsigned int)v9;
}
