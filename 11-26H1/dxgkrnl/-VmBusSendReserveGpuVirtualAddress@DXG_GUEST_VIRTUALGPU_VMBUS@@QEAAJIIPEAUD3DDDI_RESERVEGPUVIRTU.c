/*
 * XREFs of ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x14018CCAC
 * Callers:
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  char *v8; // rax
  __int128 v10; // xmm0
  int v11; // edi
  unsigned int v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  char v15; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v16[2]; // [rsp+180h] [rbp+80h] BYREF

  v14 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x60u, 0LL, 0LL, 0LL);
  v8 = (char *)P[0];
  if ( P[0] )
  {
    *((_BYTE *)P[0] + 12) = 0;
    *((_DWORD *)v8 + 3) &= 0x1FFu;
    *(_QWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 2) = 18LL;
    v10 = *(_OWORD *)&a4->hPagingQueue;
    v12[0] = 16;
    *(_OWORD *)(v8 + 24) = v10;
    *(_OWORD *)(v8 + 40) = *(_OWORD *)&a4->MinimumAddress;
    *(_OWORD *)(v8 + 56) = *(_OWORD *)&a4->Size;
    *(_OWORD *)(v8 + 72) = *(_OWORD *)&a4->DriverProtection;
    *((_QWORD *)v8 + 11) = a4->PagingFenceValue;
    *((_DWORD *)v8 + 6) = a3;
    v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)P, v16, v12);
    if ( v11 < 0 || (v11 = -1073741823, v12[0] < 0x10) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12906;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendReserveGpuVirtualAddress failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v11 = 0;
      a4->VirtualAddress = v16[0];
      a4->PagingFenceValue = v16[1];
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v11;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v15 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
