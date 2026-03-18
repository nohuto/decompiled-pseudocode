/*
 * XREFs of ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x14038F1AC
 * Callers:
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x14038E5C0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1400467D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReclaimAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a5,
        const unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  const wchar_t *v10; // r9
  UINT NumAllocations; // eax
  __int64 v12; // r14
  __int64 v13; // rsi
  int *v14; // r14
  __int64 i; // r15
  __int64 j; // r15
  int v17; // eax
  BOOL *pDiscarded; // rcx
  struct _EX_RUNDOWN_REF *v20; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned int v22; // [rsp+5Ch] [rbp-1ACh]
  const struct DXGDEVICE *v23; // [rsp+68h] [rbp-1A0h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v24; // [rsp+70h] [rbp-198h]
  const struct DXGDEVICE *v25; // [rsp+78h] [rbp-190h]
  _BYTE v26[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-168h] BYREF
  int v28; // [rsp+B0h] [rbp-158h]

  v20 = a4;
  v23 = a3;
  v24 = this;
  v25 = a3;
  LODWORD(v8) = -1073741811;
  if ( !a4 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 10967LL;
    v10 = L"Paging queue must be present";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v8;
  }
  NumAllocations = a5->NumAllocations;
  if ( NumAllocations > 0x8000 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 10972LL;
    v10 = L"NumAllocations is invalid";
    goto LABEL_3;
  }
  v12 = 4 * NumAllocations + 44;
  v22 = v12;
  v21 = (4 * NumAllocations + 51) & 0xFFFFFFF8;
  v27 = 0LL;
  v28 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v27, this, v21 + v12, 0LL, 0LL, 0LL);
  v13 = v27;
  if ( (_QWORD)v27 )
  {
    *(_QWORD *)v27 = 0LL;
    *(_DWORD *)(v13 + 8) = 0;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 12) &= 0x1FFu;
    *(_QWORD *)(v13 + 16) = 58LL;
    v14 = (int *)(v13 + v12);
    *(_DWORD *)(v13 + 24) = *((_DWORD *)a3 + 118);
    *(_DWORD *)(v13 + 8) = *((_DWORD *)a2 + 122);
    *(_DWORD *)(v13 + 32) = a5->NumAllocations;
    *(_DWORD *)(v13 + 28) = HIDWORD(v20[3].Ptr);
    *(_BYTE *)(v13 + 37) = a5->pDiscarded != 0LL;
    if ( a5->pResources )
    {
      *(_BYTE *)(v13 + 36) = 1;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, (struct _KTHREAD **)a2);
      for ( i = 0LL; (unsigned int)i < a5->NumAllocations; i = (unsigned int)(i + 1) )
      {
        DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v20, a6[i]);
        if ( !v20 )
        {
          WdLogSingleEntry3(3LL, v23, a6[i], -1073741811LL);
          WdLogGlobalForLineNumber = 11008;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
          goto LABEL_19;
        }
        *(_DWORD *)(v13 + 4 * i + 40) = HIDWORD(v20[2].Ptr);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
      }
    }
    else
    {
      *(_BYTE *)(v13 + 36) = 0;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v26, (struct _KTHREAD **)a2);
      for ( j = 0LL; (unsigned int)j < a5->NumAllocations; j = (unsigned int)(j + 1) )
      {
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)&v20, a6[j]);
        if ( !v20 )
        {
          WdLogSingleEntry3(3LL, v23, a6[j], -1073741811LL);
          WdLogGlobalForLineNumber = 11026;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
LABEL_19:
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26);
          goto LABEL_30;
        }
        *(_DWORD *)(v13 + 4 * j + 40) = HIDWORD(v20[2].Ptr);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v20);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26);
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v24, (struct DXGVMBUSMESSAGE *)&v27, v14, &v21);
    v8 = v17;
    if ( v17 < 0 || v21 > v22 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11036;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendOfferAllocations failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( (int)v8 >= 0 )
        LODWORD(v8) = -1073741823;
    }
    else
    {
      v8 = v14[2];
      if ( (int)v8 >= 0 )
      {
        pDiscarded = a5->pDiscarded;
        if ( pDiscarded )
          RtlCopyToUser(pDiscarded, v14 + 3, 4LL * a5->NumAllocations);
        a5->PagingFenceValue = *(_QWORD *)v14;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11046;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendOfferAllocations failed by host: 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 10984;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate storage for input buffer",
      10984LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_30:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v27);
  return (unsigned int)v8;
}
