/*
 * XREFs of ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x140231B60
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x1402C12E8 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _D3DKMT_QUERYSTATISTICS *a2,
        struct DXGPROCESS *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  _OWORD *v8; // rdx
  __int64 v9; // rdi
  struct _D3DKMT_QUERYSTATISTICS *v10; // rax
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD *v14; // rcx
  char *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+160h] [rbp+60h] BYREF
  char v28; // [rsp+168h] [rbp+68h] BYREF

  v26 = 0;
  v25 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v25, this, 0x340u, 0LL, 0LL, 0LL);
  v6 = v25;
  if ( (_QWORD)v25 )
  {
    v8 = (_OWORD *)(v25 + 24);
    v9 = 6LL;
    *(_DWORD *)(v25 + 8) = *((_DWORD *)a3 + 122);
    *(_BYTE *)(v6 + 12) = 0;
    v10 = a2;
    *(_DWORD *)(v6 + 12) &= 0x1FFu;
    v11 = 6LL;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = 48LL;
    do
    {
      *v8 = *(_OWORD *)v10;
      v8[1] = *((_OWORD *)v10 + 1);
      v8[2] = *((_OWORD *)v10 + 2);
      v8[3] = *((_OWORD *)v10 + 3);
      v8[4] = *((_OWORD *)v10 + 4);
      v8[5] = *((_OWORD *)v10 + 5);
      v8[6] = *((_OWORD *)v10 + 6);
      v8 += 8;
      v12 = *((_OWORD *)v10 + 7);
      v10 = (struct _D3DKMT_QUERYSTATISTICS *)((char *)v10 + 128);
      *(v8 - 1) = v12;
      --v11;
    }
    while ( v11 );
    v13 = *(_OWORD *)v10;
    v24[0] = 784;
    *v8 = v13;
    v8[1] = *((_OWORD *)v10 + 1);
    *((_QWORD *)v8 + 4) = *((_QWORD *)v10 + 4);
    *(_QWORD *)(v6 + 40) = 0LL;
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v25, &v27, v24);
    if ( v7 < 0 || (v7 = -1073741823, v24[0] < 0x310) || (v7 = v27, v27 < 0) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 13078;
    }
    else
    {
      v14 = (_OWORD *)((char *)a2 + 24);
      v15 = &v28;
      do
      {
        v16 = *((_OWORD *)v15 + 1);
        *v14 = *(_OWORD *)v15;
        v17 = *((_OWORD *)v15 + 2);
        v14[1] = v16;
        v18 = *((_OWORD *)v15 + 3);
        v14[2] = v17;
        v19 = *((_OWORD *)v15 + 4);
        v14[3] = v18;
        v20 = *((_OWORD *)v15 + 5);
        v14[4] = v19;
        v21 = *((_OWORD *)v15 + 6);
        v14[5] = v20;
        v22 = *((_OWORD *)v15 + 7);
        v15 += 128;
        v14[6] = v21;
        v14 += 8;
        *(v14 - 1) = v22;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)v14 = *(_QWORD *)v15;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v25);
  return (unsigned int)v7;
}
