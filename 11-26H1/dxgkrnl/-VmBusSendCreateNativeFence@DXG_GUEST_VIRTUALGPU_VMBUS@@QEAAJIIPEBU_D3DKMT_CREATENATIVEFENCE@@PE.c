/*
 * XREFs of ?VmBusSendCreateNativeFence@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEBU_D3DKMT_CREATENATIVEFENCE@@PEAUDXGKVMB_COMMAND_CREATENATIVEFENCE_RETURN@@@Z @ 0x14022D3E8
 * Callers:
 *     NtDxgkCreateNativeFenceInternal @ 0x140200CD8 (NtDxgkCreateNativeFenceInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateNativeFence(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        const struct _D3DKMT_CREATENATIVEFENCE *a4,
        struct DXGKVMB_COMMAND_CREATENATIVEFENCE_RETURN *a5)
{
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  char *v13; // rdi
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v22; // [rsp+28h] [rbp-E0h]
  unsigned int v23; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v25; // [rsp+78h] [rbp-90h]
  _OWORD v26[7]; // [rsp+188h] [rbp+80h] BYREF

  v25 = 0;
  *(_OWORD *)&v24[1] = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v24[1], this, 0xF8u, 0LL, 0LL, 0LL);
  v9 = v24[1];
  if ( v24[1] )
  {
    *(_BYTE *)(v24[1] + 12LL) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 8) = a2;
    *(_QWORD *)(v9 + 16) = 69LL;
    v11 = *(_OWORD *)a4;
    v23 = 112;
    *(_OWORD *)(v9 + 24) = v11;
    *(_OWORD *)(v9 + 40) = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v9 + 56) = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v9 + 72) = *((_OWORD *)a4 + 3);
    *(_OWORD *)(v9 + 88) = *((_OWORD *)a4 + 4);
    *(_OWORD *)(v9 + 104) = *((_OWORD *)a4 + 5);
    *(_OWORD *)(v9 + 120) = *((_OWORD *)a4 + 6);
    v12 = *((_OWORD *)a4 + 7);
    v13 = (char *)a4 + 128;
    *(_OWORD *)(v9 + 136) = v12;
    *(_OWORD *)(v9 + 152) = *(_OWORD *)v13;
    *(_OWORD *)(v9 + 168) = *((_OWORD *)v13 + 1);
    *(_OWORD *)(v9 + 184) = *((_OWORD *)v13 + 2);
    *(_OWORD *)(v9 + 200) = *((_OWORD *)v13 + 3);
    *(_OWORD *)(v9 + 216) = *((_OWORD *)v13 + 4);
    *(_QWORD *)(v9 + 232) = *((_QWORD *)v13 + 10);
    *(_DWORD *)(v9 + 24) = a3;
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v24[1], v26, &v23);
    *(_DWORD *)a5 = v14;
    if ( v14 >= 0 )
    {
      if ( v23 < 0x70 )
      {
        *(_DWORD *)a5 = -1073741823;
      }
      else
      {
        v15 = v26[1];
        *(_OWORD *)a5 = v26[0];
        v16 = v26[2];
        *((_OWORD *)a5 + 1) = v15;
        v17 = v26[3];
        *((_OWORD *)a5 + 2) = v16;
        v18 = v26[4];
        *((_OWORD *)a5 + 3) = v17;
        v19 = v26[5];
        *((_OWORD *)a5 + 4) = v18;
        v20 = v26[6];
        *((_OWORD *)a5 + 5) = v19;
        *((_OWORD *)a5 + 6) = v20;
      }
    }
    if ( *(int *)a5 < 0 )
    {
      WdLogSingleEntry1(2LL);
      v22 = *(int *)a5;
      WdLogGlobalForLineNumber = 9279;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNativeFence failed: 0x%I64x",
        v22,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = *(_DWORD *)a5;
  }
  else
  {
    v10 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v24[1]);
  return v10;
}
