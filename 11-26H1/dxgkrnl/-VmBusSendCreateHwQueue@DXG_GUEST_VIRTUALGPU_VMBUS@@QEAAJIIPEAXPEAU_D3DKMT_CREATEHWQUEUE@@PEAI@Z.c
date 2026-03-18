/*
 * XREFs of ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x14022D10C
 * Callers:
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401E3B80 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        void *a4,
        struct _D3DKMT_CREATEHWQUEUE *a5,
        unsigned int *a6)
{
  UINT PrivateDriverDataSize; // edi
  unsigned int v12; // esi
  unsigned int v13; // edi
  char *v14; // rbx
  const void *v15; // r15
  UINT v16; // eax
  __int64 v17; // r14
  UINT v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  UINT v21; // eax
  unsigned int v22; // [rsp+50h] [rbp-178h] BYREF
  unsigned int *v23; // [rsp+58h] [rbp-170h]
  void *v24[2]; // [rsp+60h] [rbp-168h] BYREF
  int v25; // [rsp+70h] [rbp-158h]

  v23 = a6;
  PrivateDriverDataSize = a5->PrivateDriverDataSize;
  if ( PrivateDriverDataSize <= 0x20000 )
  {
    v12 = 0;
    *(_OWORD *)v24 = 0LL;
    v13 = (PrivateDriverDataSize + 78) & 0xFFFFFFF8;
    v25 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v24, this, v13, 0LL, 0LL, 0LL);
    v14 = (char *)v24[0];
    if ( v24[0] )
    {
      *((_BYTE *)v24[0] + 12) = 0;
      *((_DWORD *)v14 + 3) &= 0x1FFu;
      *((_DWORD *)v14 + 2) = a2;
      v15 = v14 + 68;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 2) = 50LL;
      *((_DWORD *)v14 + 14) = a3;
      *((_DWORD *)v14 + 15) = a5->Flags.0;
      *((_DWORD *)v14 + 16) = a5->PrivateDriverDataSize;
      v16 = a5->PrivateDriverDataSize;
      if ( v16 )
        memmove(v14 + 68, a4, v16);
      v22 = v13;
      LODWORD(v17) = -1073741823;
      if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)v24, v14, &v22) < 0
        || v22 < v13 )
      {
        v19 = v13;
        v20 = v22;
        WdLogSingleEntry2(2LL, v22, (unsigned int)v19);
        WdLogGlobalForLineNumber = 9184;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendSyncMessage failed. OutputSize:0x%I64x, OutputsizeOriginal:0x%I64x",
          v20,
          v19,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v17 = *((int *)v14 + 6);
        if ( (int)v17 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 9178;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"CreateHwQueue failed on host with Status: 0x%I64x",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          *v23 = *((_DWORD *)v14 + 7);
          a5->hHwQueueProgressFence = *((_DWORD *)v14 + 8);
          a5->HwQueueProgressFenceGPUVirtualAddress = *((_QWORD *)v14 + 6);
          a5->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)v14 + 5);
          v18 = a5->PrivateDriverDataSize;
          if ( v18 )
            memmove(a4, v14 + 68, v18);
        }
      }
      v21 = a5->PrivateDriverDataSize;
      if ( v21 )
        memmove(a4, v15, v21);
      v12 = v17;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 9143;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_CREATEHWQUEUE",
        9143LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v24);
    return v12;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9131;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      9131LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
