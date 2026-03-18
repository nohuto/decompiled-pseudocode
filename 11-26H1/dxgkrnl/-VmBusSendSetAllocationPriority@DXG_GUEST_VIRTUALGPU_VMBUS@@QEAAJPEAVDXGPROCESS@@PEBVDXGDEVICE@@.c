/*
 * XREFs of ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x140231D68
 * Callers:
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1403BEDFC (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1400467D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetAllocationPriority(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_SETALLOCATIONPRIORITY *a4)
{
  int v6; // ebx
  int v7; // r14d
  unsigned int v8; // r15d
  UINT AllocationCount; // eax
  unsigned int v11; // r12d
  struct DXGKVMB_COMMAND_BASE *v12; // r14
  int v13; // eax
  char *v14; // r13
  D3DKMT_HANDLE hResource; // r8d
  __int64 i; // r14
  size_t Size; // [rsp+30h] [rbp-198h] BYREF
  struct DXGPROCESS *v18; // [rsp+38h] [rbp-190h]
  struct DXG_VMBUS_CHANNEL_BASE *v19; // [rsp+40h] [rbp-188h]
  void *v20; // [rsp+48h] [rbp-180h]
  _BYTE v21[32]; // [rsp+50h] [rbp-178h] BYREF
  struct DXGKVMB_COMMAND_BASE *v22[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v23; // [rsp+80h] [rbp-148h]

  Size = (size_t)a3;
  v18 = a2;
  v19 = this;
  v6 = -1073741811;
  v7 = 40;
  v8 = 0;
  *(_OWORD *)v22 = 0LL;
  v23 = 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) <= 0x10u )
  {
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v22);
    return 0LL;
  }
  AllocationCount = a4->AllocationCount;
  if ( AllocationCount <= 0x20000 )
  {
    if ( a4->hResource )
    {
      v11 = 4;
    }
    else
    {
      if ( !AllocationCount )
        goto LABEL_21;
      v8 = 4 * AllocationCount;
      v7 = 4 * AllocationCount + 40;
      v11 = 4 * AllocationCount;
    }
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v22, v19, v11 + v7, 0LL, 0LL, 0LL);
    v12 = v22[0];
    if ( !v22[0] )
    {
      v6 = -1073741801;
LABEL_22:
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 11172;
      goto LABEL_23;
    }
    v13 = *((_DWORD *)a2 + 122);
    *(_QWORD *)v22[0] = 0LL;
    *((_DWORD *)v12 + 2) = v13;
    *((_BYTE *)v12 + 12) = 0;
    *((_DWORD *)v12 + 3) &= 0x1FFu;
    *((_QWORD *)v12 + 2) = 59LL;
    *((_DWORD *)v12 + 6) = *(_DWORD *)(Size + 472);
    *((_DWORD *)v12 + 8) = a4->AllocationCount;
    v14 = (char *)v12 + 40;
    Size = v8;
    v20 = (char *)v12 + v8 + 40;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v21, (struct _KTHREAD **)v18);
    hResource = a4->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)v18, (DXGRESOURCEREFERENCE *)&Size, hResource);
      if ( !Size )
      {
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Size);
LABEL_13:
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21);
        goto LABEL_21;
      }
      *((_DWORD *)v12 + 7) = *(_DWORD *)(Size + 20);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&Size);
    }
    else
    {
      RtlCopyFromUser((char *)v12 + 40, (void *)a4->phAllocationList, Size);
      for ( i = 0LL; (unsigned int)i < a4->AllocationCount; i = (unsigned int)(i + 1) )
      {
        DXGPROCESS::GetAllocationUnsafe((__int64)v18, (DXGALLOCATIONREFERENCE *)&Size, *(_DWORD *)&v14[4 * i]);
        if ( !Size )
        {
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Size);
          goto LABEL_13;
        }
        *(_DWORD *)&v14[4 * i] = *(_DWORD *)(Size + 20);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&Size);
      }
    }
    RtlCopyFromUser(v20, (void *)a4->pPriorities, v11);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21);
    v6 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v19, (unsigned __int8 *)v22[1], v22[0], v23);
  }
LABEL_21:
  if ( v6 < 0 )
    goto LABEL_22;
LABEL_23:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v22);
  return (unsigned int)v6;
}
