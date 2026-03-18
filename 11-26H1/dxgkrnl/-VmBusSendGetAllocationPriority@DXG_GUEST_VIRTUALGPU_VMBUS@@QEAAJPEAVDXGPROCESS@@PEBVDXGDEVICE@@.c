/*
 * XREFs of ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x14022EF8C
 * Callers:
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x140408124 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
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

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        struct _D3DKMT_GETALLOCATIONPRIORITY *a4)
{
  int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // r14d
  UINT AllocationCount; // eax
  unsigned int v12; // r13d
  __int64 v13; // rbx
  int *v14; // r15
  int v15; // eax
  D3DKMT_HANDLE hResource; // r8d
  __int64 v17; // r14
  __int64 i; // rbx
  unsigned int v19[2]; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-1A0h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-19Ch] BYREF
  const struct DXGDEVICE *v22; // [rsp+40h] [rbp-198h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v23; // [rsp+48h] [rbp-190h]
  _BYTE v24[32]; // [rsp+50h] [rbp-188h] BYREF
  __int128 v25; // [rsp+70h] [rbp-168h] BYREF
  int v26; // [rsp+80h] [rbp-158h]

  v22 = a3;
  v23 = this;
  v7 = -1073741811;
  v8 = 0;
  v9 = 40;
  v21 = 0;
  v25 = 0LL;
  v26 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) <= 0x10u )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v25);
    return 0LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v12 = 4;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_25;
      v8 = 4 * AllocationCount;
      v9 = 4 * AllocationCount + 40;
      v12 = 4 * AllocationCount;
    }
    v20 = v12 + 4;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v25, this, v9, v19, &v20, &v21);
    v13 = v25;
    if ( !(_QWORD)v25 )
    {
      v7 = -1073741801;
LABEL_26:
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11291;
      goto LABEL_27;
    }
    v14 = (int *)(v25 + v21);
    v15 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v25 = 0LL;
    *(_DWORD *)(v13 + 8) = v15;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 12) &= 0x1FFu;
    *(_QWORD *)(v13 + 16) = 60LL;
    *(_DWORD *)(v13 + 24) = *((_DWORD *)v22 + 118);
    *(_DWORD *)(v13 + 32) = a4->AllocationCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v24, (struct _KTHREAD **)a2);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)v19, hResource);
      if ( !*(_QWORD *)v19 )
      {
        v7 = -1073741811;
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v19);
LABEL_13:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
        goto LABEL_25;
      }
      *(_DWORD *)(v13 + 28) = *(_DWORD *)(*(_QWORD *)v19 + 20LL);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v19);
    }
    else
    {
      v17 = v13 + 40;
      RtlCopyFromUser((void *)(v13 + 40), (void *)a4->phAllocationList, v8);
      for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
      {
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v19, *(_DWORD *)(v17 + 4 * i));
        if ( !*(_QWORD *)v19 )
        {
          v7 = -1073741811;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v19);
          goto LABEL_13;
        }
        *(_DWORD *)(v17 + 4 * i) = *(_DWORD *)(*(_QWORD *)v19 + 20LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v19);
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(v23, (struct DXGVMBUSMESSAGE *)&v25, v14, &v20);
    if ( v7 >= 0 )
    {
      if ( v12 + 4 > v20 )
      {
        v7 = -1073741811;
        goto LABEL_26;
      }
      v7 = *v14;
      if ( *v14 < 0 )
        goto LABEL_26;
      RtlCopyToUser(a4->pPriorities, v14 + 1, v12);
    }
  }
LABEL_25:
  if ( v7 < 0 )
    goto LABEL_26;
LABEL_27:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v25);
  return (unsigned int)v7;
}
