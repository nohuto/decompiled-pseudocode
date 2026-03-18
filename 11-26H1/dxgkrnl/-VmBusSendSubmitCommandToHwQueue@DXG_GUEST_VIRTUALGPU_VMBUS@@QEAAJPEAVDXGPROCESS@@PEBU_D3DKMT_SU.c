/*
 * XREFs of ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1402F814C
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402F8648 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14003BB64 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x140232200 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _EX_RUNDOWN_REF *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  unsigned int v6; // ebx
  char v7; // si
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r12
  size_t v12; // r8
  void *v13; // r14
  UINT PrivateDriverDataSize; // eax
  UINT i; // r14d
  DXGALLOCATIONREFERENCE *AllocationUnsafe; // rax
  int v17; // edi
  unsigned int v18; // edx
  int v19; // r9d
  __int64 v20; // rcx
  ULONG_PTR Count; // rdx
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v24; // [rsp+50h] [rbp-1B8h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-1B0h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v26; // [rsp+60h] [rbp-1A8h]
  _BYTE v27[8]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-198h]
  char v29; // [rsp+78h] [rbp-190h]
  _BYTE v30[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-168h] BYREF
  int v32; // [rsp+B0h] [rbp-158h]

  v26 = this;
  v25 = a2;
  v28 = *((_QWORD *)this + 9);
  v6 = 0;
  v29 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  v7 = 1;
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
LABEL_35:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    return v6;
  }
  v8 = 4 * a3->NumPrimaries;
  v9 = v8 + 80;
  if ( (unsigned int)v8 >= 0xFFFFFFB0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12705;
    goto LABEL_34;
  }
  v10 = v9 + a3->PrivateDriverDataSize;
  if ( v10 < v9 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12711;
LABEL_34:
    v6 = -1073741811;
    goto LABEL_35;
  }
  if ( v10 > 0x20000 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12717;
    v6 = -1073741637;
    goto LABEL_35;
  }
  v31 = 0LL;
  v32 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v31, this, v10, 0LL, 0LL, 0LL);
  v11 = v31;
  if ( !(_QWORD)v31 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 12725;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMANDTOHWQUEUE",
      12725LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v31);
    v6 = -1073741801;
    goto LABEL_35;
  }
  *(_QWORD *)v31 = 0LL;
  *(_DWORD *)(v11 + 8) = 0;
  *(_BYTE *)(v11 + 12) = 0;
  *(_DWORD *)(v11 + 12) &= 0x1FFu;
  *(_QWORD *)(v11 + 16) = 52LL;
  *(_DWORD *)(v11 + 8) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
  *(_OWORD *)(v11 + 24) = *(_OWORD *)&a3->hHwQueue;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)&a3->CommandBuffer;
  *(_OWORD *)(v11 + 56) = *(_OWORD *)&a3->pPrivateDriverData;
  *(_QWORD *)(v11 + 72) = a3->WrittenPrimaries;
  v12 = (unsigned int)v8;
  v13 = (void *)(v11 + 80 + v8);
  if ( a3->NumPrimaries )
    RtlCopyFromUser((void *)(v11 + 80), (void *)a3->WrittenPrimaries, v12);
  PrivateDriverDataSize = a3->PrivateDriverDataSize;
  if ( PrivateDriverDataSize )
    RtlCopyFromUser(v13, a3->pPrivateDriverData, PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)a2);
  for ( i = 0; i < a3->NumPrimaries; ++i )
  {
    v24 = 0LL;
    AllocationUnsafe = DXGPROCESS::GetAllocationUnsafe(
                         (__int64)a2,
                         (DXGALLOCATIONREFERENCE *)&v25,
                         *(_DWORD *)(v11 + 4LL * i + 80));
    DXGALLOCATIONREFERENCE::MoveAssign(&v24, AllocationUnsafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
    if ( !v24 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12767;
      v17 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
LABEL_18:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
      goto LABEL_31;
    }
    *(_DWORD *)(v11 + 4LL * i + 80) = HIDWORD(v24[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v24);
  }
  v18 = (*(_DWORD *)(v11 + 24) >> 6) & 0xFFFFFF;
  if ( v18 >= LODWORD(a2[37].Count)
    || (v19 = *(_DWORD *)(a2[35].Count + 16LL * v18 + 8),
        ((*(_DWORD *)(v11 + 24) >> 25) & 0x60) != (*(_BYTE *)(a2[35].Count + 16LL * v18 + 8) & 0x60))
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    v7 = 0;
  }
  if ( !v7 )
  {
LABEL_27:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12777;
    v17 = -1073741811;
    goto LABEL_18;
  }
  v20 = 2LL * v18;
  Count = a2[35].Count;
  if ( (*(_BYTE *)(Count + 8 * v20 + 8) & 0x1F) != 0xF )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_27;
  }
  v22 = *(_QWORD *)(Count + 8 * v20);
  if ( !v22 )
    goto LABEL_27;
  *(_DWORD *)(v11 + 24) = *(_DWORD *)(v22 + 28);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v30);
  v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v26, (struct DXGVMBUSMESSAGE *)&v31);
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12787;
  }
LABEL_31:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v31);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  return (unsigned int)v17;
}
