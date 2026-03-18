/*
 * XREFs of ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x140230D54
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct _LUID *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  unsigned int v15; // [rsp+180h] [rbp+80h] BYREF
  int v16; // [rsp+184h] [rbp+84h]
  unsigned int v17; // [rsp+188h] [rbp+88h]

  v14 = 0;
  v13 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v13, this, 0x28u, 0LL, 0LL, 0LL);
  v4 = v13;
  if ( (_QWORD)v13 )
  {
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v4 + 12) &= 0x1FFu;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    v9 = 16;
    *(_DWORD *)(v4 + 28) = 16;
    v10 = 16;
    *(_QWORD *)(v4 + 16) = 14LL;
    *(_DWORD *)(v4 + 24) = 45;
    *(struct _LUID *)(v4 + 32) = *a2;
    v11 = v13;
    v12[0] = 16;
    v5 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, &v15, v12);
    if ( v5 >= 0 )
    {
      if ( v12[0] < 0x10 )
      {
        *(_DWORD *)(v11 + 24) = 16;
        v10 = 4;
      }
      else
      {
        if ( v16 >= 0 )
          goto LABEL_15;
        if ( v16 != -1073741637 )
          goto LABEL_3;
        *(_DWORD *)(v11 + 24) = v17;
        v9 = v17;
      }
      *(_DWORD *)(v11 + 28) = v9;
      v9 = v10;
    }
    v12[0] = v9;
    v5 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v13, &v15, v12);
    if ( v5 < 0 || v12[0] < v10 )
      goto LABEL_3;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) = *(_DWORD *)(v11 + 24);
LABEL_15:
    v7 = v15;
    goto LABEL_4;
  }
  v5 = -1073741801;
LABEL_3:
  v6 = v5;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 10084;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendOpenAdapter failed: 0x%I64x", v6, 0LL, 0LL, 0LL, 0LL);
  v7 = 0;
LABEL_4:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v13);
  return v7;
}
