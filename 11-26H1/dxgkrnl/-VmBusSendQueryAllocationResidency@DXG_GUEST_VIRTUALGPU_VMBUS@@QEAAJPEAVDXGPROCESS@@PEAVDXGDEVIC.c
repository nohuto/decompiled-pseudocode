/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x140231464
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401BA4F4 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1400467D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r8d
  __int64 AllocationCount; // rdx
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v12; // rbx
  UINT v13; // eax
  int v14; // esi
  int *v15; // r12
  D3DKMT_HANDLE hResource; // r8d
  D3DKMT_HANDLE v17; // ecx
  UINT i; // r13d
  const D3DKMT_HANDLE *phAllocationList; // rax
  unsigned int *v20; // rcx
  unsigned int v21; // r8d
  UINT v22; // ebx
  UINT v23; // r13d
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v24; // rdx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  unsigned int v27; // [rsp+54h] [rbp-1B4h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-1B0h] BYREF
  UINT v29; // [rsp+5Ch] [rbp-1ACh]
  __int64 v30; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-1A0h]
  _QWORD v32[2]; // [rsp+70h] [rbp-198h] BYREF
  struct DXGPROCESS *v33; // [rsp+80h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v34; // [rsp+88h] [rbp-180h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v35; // [rsp+90h] [rbp-178h]
  _BYTE v36[24]; // [rsp+98h] [rbp-170h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-158h] BYREF
  int v38; // [rsp+C0h] [rbp-148h]

  v33 = a2;
  v34 = this;
  v35 = this;
  v7 = 56;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    WdLogSingleEntry0(2LL);
    v9 = 11765LL;
    v10 = L"Invalid resource and allocation count";
LABEL_3:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      WdLogSingleEntry0(2LL);
      v9 = 11772LL;
    }
    else
    {
      if ( (unsigned int)(4 * AllocationCount + 56) >= 0x38 )
      {
        v7 = 4 * AllocationCount + 56;
        goto LABEL_8;
      }
      WdLogSingleEntry0(2LL);
      v9 = 11777LL;
    }
    v10 = L"Math overflow";
    goto LABEL_3;
  }
LABEL_8:
  v37 = 0LL;
  v38 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v37, this, v7, 0LL, 0LL, 0LL);
  v12 = v37;
  if ( !(_QWORD)v37 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11786;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_QUERYALLOCATIONRESIDENCY",
      11786LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v37);
    return 3221225495LL;
  }
  *(_QWORD *)v37 = 0LL;
  *(_DWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 12) = 0;
  *(_DWORD *)(v12 + 12) &= 0x1FFu;
  *(_QWORD *)(v12 + 16) = 41LL;
  *(_DWORD *)(v12 + 8) = *((_DWORD *)a2 + 122);
  *(_DWORD *)(v12 + 24) = *((_DWORD *)a3 + 118);
  *(_DWORD *)(v12 + 40) = a5->AllocationCount;
  v13 = 1;
  if ( !a5->hResource )
    v13 = a5->AllocationCount;
  v29 = v13;
  v14 = -1073741811;
  LODWORD(v30) = -1073741811;
  v31 = 4 * v13 + 4;
  v28 = (4 * v13 + 11) & 0xFFFFFFF8;
  v15 = (int *)operator new[](v28, 0x4B677844u, 64LL);
  v32[1] = v15;
  if ( v15 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, (struct _KTHREAD **)a2);
    hResource = a5->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&v30, hResource);
      if ( !v30 || (v17 = *(_DWORD *)(v30 + 20)) == 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 11817;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid resource handle", 11817LL, 0LL, 0LL, 0LL, 0LL);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v30);
LABEL_22:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
        goto LABEL_41;
      }
      a5->hResource = v17;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v30);
    }
    else
    {
      for ( i = 0; i < a5->AllocationCount; ++i )
      {
        v27 = 0;
        phAllocationList = a5->phAllocationList;
        v20 = (unsigned int *)&phAllocationList[i];
        if ( a4 )
        {
          RtlCopyFromUser(&v27, (void *)&phAllocationList[i], 4uLL);
          v21 = v27;
        }
        else
        {
          v21 = *v20;
          v27 = *v20;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v33, (DXGALLOCATIONREFERENCE *)v32, v21);
        if ( !v32[0] || (*(_BYTE *)(v32[0] + 128LL) & 4) == 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 11850;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle",
            11850LL,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v32);
          goto LABEL_22;
        }
        *(_DWORD *)(v12 + 4LL * i + 56) = *(_DWORD *)(v32[0] + 20LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v32);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v36);
    v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v34, (struct DXGVMBUSMESSAGE *)&v37, v15, &v28);
    if ( v14 >= 0 )
    {
      v14 = -1073741823;
      if ( v28 >= v31 )
      {
        v14 = *v15;
        if ( *v15 >= 0 )
        {
          v22 = 0;
          v23 = v29;
          while ( v22 < v23 )
          {
            v24 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v15[v22 + 1];
            pResidencyStatus = a5->pResidencyStatus;
            if ( a4 )
              RtlCopyToUser(&pResidencyStatus[v22], v24, 4uLL);
            else
              pResidencyStatus[v22] = *v24;
            ++v22;
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11805;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate D3DKMT_ALLOCATIONRESIDENCYSTATUS",
      11805LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
  }
LABEL_41:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11903;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendQueryAllocationResidency failed: 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v37);
  return (unsigned int)v14;
}
