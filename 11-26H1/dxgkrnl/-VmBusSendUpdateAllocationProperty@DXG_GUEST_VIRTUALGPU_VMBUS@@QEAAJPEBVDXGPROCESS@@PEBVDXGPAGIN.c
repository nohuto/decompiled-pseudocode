/*
 * XREFs of ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1402BED7C
 * Callers:
 *     DxgkUpdateAllocationProperty @ 0x1401F28D0 (DxgkUpdateAllocationProperty.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        const struct DXGPROCESS *a2,
        const struct DXGPAGINGQUEUE *a3,
        const struct DXGALLOCATION *a4,
        struct D3DDDI_UPDATEALLOCPROPERTY *a5)
{
  __int64 v9; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  __int128 v14; // xmm0
  int v15; // edi
  unsigned int v16; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+78h] [rbp-90h]
  char v19; // [rsp+7Ch] [rbp-8Ch] BYREF
  UINT64 v20; // [rsp+188h] [rbp+80h] BYREF
  int v21; // [rsp+190h] [rbp+88h]

  v18 = 0;
  v17 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v17, this, 0x40u, 0LL, 0LL, 0LL);
  v9 = v17;
  if ( (_QWORD)v17 )
  {
    v11 = *((_DWORD *)a4 + 5);
    v12 = *((_DWORD *)a3 + 7);
    v13 = *((_DWORD *)a2 + 122);
    *(_BYTE *)(v17 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 8) = v13;
    *(_QWORD *)(v9 + 16) = 56LL;
    v14 = *(_OWORD *)&a5->hPagingQueue;
    v16 = 16;
    *(_OWORD *)(v9 + 24) = v14;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)&a5->Flags.0;
    *(_QWORD *)(v9 + 56) = *(_QWORD *)&a5->0;
    *(_DWORD *)(v9 + 24) = v12;
    *(_DWORD *)(v9 + 28) = v11;
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v17, &v20, &v16);
    if ( v15 < 0 || (v15 = -1073741823, v16 < 0x10) || (v15 = v21, v21 < 0) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9993;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendUpdateAllocationProperty failed: 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      a5->PagingFenceValue = v20;
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v17);
    return (unsigned int)v15;
  }
  else
  {
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( *((char **)&v17 + 1) != &v19 )
        ExFreePoolWithTag(*((PVOID *)&v17 + 1), 0x4D767844u);
    }
    return 3221225495LL;
  }
}
