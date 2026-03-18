/*
 * XREFs of ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x140230898
 * Callers:
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1403758D8 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_OFFERALLOCATIONS *a4,
        const unsigned int *a5)
{
  UINT NumAllocations; // r8d
  __int64 v9; // rsi
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  UINT i; // r12d
  unsigned int v12; // eax
  int v13; // r9d
  __int64 v14; // rcx
  struct DXGRESOURCE *v15; // rdx
  UINT j; // r12d
  unsigned int v17; // eax
  int v18; // r9d
  __int64 v19; // rcx
  struct DXGALLOCATION *v20; // rdx
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned int *v24; // [rsp+58h] [rbp-A8h]
  const struct DXGDEVICE *v25; // [rsp+60h] [rbp-A0h]
  DXG_VMBUS_CHANNEL_BASE *v26; // [rsp+68h] [rbp-98h]
  _BYTE v27[32]; // [rsp+70h] [rbp-90h] BYREF
  struct DXGKVMB_COMMAND_BASE *v28[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp-60h]

  v25 = a3;
  NumAllocations = a4->NumAllocations;
  v26 = this;
  LODWORD(v9) = -1073741811;
  v24 = a5;
  if ( NumAllocations > 0x8000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10886;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"NumAllocations is invalid", 10886LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v9;
  }
  *(_OWORD *)v28 = 0LL;
  v29 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v28, this, 4 * NumAllocations + 44, 0LL, 0LL, 0LL);
  v10 = v28[0];
  if ( !v28[0] )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 10895;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate storage for input buffer",
      10895LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  *((_BYTE *)v28[0] + 12) = 0;
  *((_DWORD *)v10 + 3) &= 0x1FFu;
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 57LL;
  *((_DWORD *)v10 + 6) = *((_DWORD *)a3 + 118);
  *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 122);
  *((_DWORD *)v10 + 7) = a4->NumAllocations;
  *((_DWORD *)v10 + 8) = a4->Priority;
  *((_DWORD *)v10 + 9) = a4->Flags.0;
  if ( a4->pResources )
  {
    *((_BYTE *)v10 + 40) = 1;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, (struct _KTHREAD **)a2);
    for ( i = 0; ; ++i )
    {
      if ( i >= a4->NumAllocations )
        goto LABEL_33;
      v12 = (v24[i] >> 6) & 0xFFFFFF;
      if ( v12 >= *((_DWORD *)a2 + 74) )
        goto LABEL_14;
      v13 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v12 + 8);
      if ( ((v24[i] >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v12 + 8) & 0x60)
        || (v13 & 0x2000) != 0
        || (v13 & 0x1F) == 0 )
      {
        goto LABEL_14;
      }
      v14 = *((_QWORD *)a2 + 35);
      if ( (*(_BYTE *)(v14 + 16LL * v12 + 8) & 0x1F) != 4 )
        break;
      v15 = *(struct DXGRESOURCE **)(v14 + 16LL * v12);
LABEL_15:
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23, v15);
      if ( !v23 )
      {
        WdLogSingleEntry3(3LL, v25, v24[i], -1073741811LL);
        WdLogGlobalForLineNumber = 10917;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
        goto LABEL_32;
      }
      *((_DWORD *)v10 + i + 11) = *(_DWORD *)(v23 + 20);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v23);
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_14:
    v15 = 0LL;
    goto LABEL_15;
  }
  *((_BYTE *)v10 + 40) = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, (struct _KTHREAD **)a2);
  for ( j = 0; ; ++j )
  {
    if ( j >= a4->NumAllocations )
    {
LABEL_33:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
      v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v26, (unsigned __int8 *)v28[1], v28[0], v29);
      v9 = v21;
      if ( v21 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 10945;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendOfferAllocations failed: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_35;
    }
    v17 = (v24[j] >> 6) & 0xFFFFFF;
    if ( v17 >= *((_DWORD *)a2 + 74) )
      goto LABEL_27;
    v18 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v17 + 8);
    if ( ((v24[j] >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v17 + 8) & 0x60)
      || (v18 & 0x2000) != 0
      || (v18 & 0x1F) == 0 )
    {
      goto LABEL_27;
    }
    v19 = *((_QWORD *)a2 + 35);
    if ( (*(_BYTE *)(v19 + 16LL * v17 + 8) & 0x1F) != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
      v20 = 0LL;
      goto LABEL_28;
    }
    v20 = *(struct DXGALLOCATION **)(v19 + 16LL * v17);
LABEL_28:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v20);
    if ( !v23 )
      break;
    *((_DWORD *)v10 + j + 11) = *(_DWORD *)(v23 + 20);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23);
  }
  WdLogSingleEntry3(3LL, v25, v24[j], -1073741811LL);
  WdLogGlobalForLineNumber = 10935;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23);
LABEL_32:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
LABEL_35:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v28);
  return (unsigned int)v9;
}
