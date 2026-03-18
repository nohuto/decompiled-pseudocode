/*
 * XREFs of ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x140296ACC
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
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

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _EX_RUNDOWN_REF *a2,
        struct _D3DKMT_SUBMITCOMMAND *a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // rdi
  _OWORD *v11; // rax
  struct _D3DKMT_SUBMITCOMMAND *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  UINT i; // esi
  DXGALLOCATIONREFERENCE *AllocationUnsafe; // rax
  int v17; // edi
  UINT j; // esi
  DXGALLOCATIONREFERENCE *v19; // rax
  unsigned int k; // r8d
  unsigned int v21; // edx
  int v23; // r10d
  __int64 v24; // rcx
  ULONG_PTR Count; // rdx
  __int64 v26; // rax
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp-1B8h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-1B0h] BYREF
  DXG_GUEST_VIRTUALGPU_VMBUS *v30; // [rsp+60h] [rbp-1A8h]
  _BYTE v31[8]; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-198h]
  char v33; // [rsp+78h] [rbp-190h]
  _BYTE v34[32]; // [rsp+80h] [rbp-188h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-168h] BYREF
  int v36; // [rsp+B0h] [rbp-158h]

  v30 = this;
  v29 = a2;
  v32 = *((_QWORD *)this + 9);
  v6 = 0;
  v33 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
LABEL_44:
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    return v6;
  }
  v7 = 4LL * a3->NumHistoryBuffers;
  if ( v7 > 0xFFFFFFFF )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12581;
    goto LABEL_43;
  }
  v8 = v7 + 408;
  if ( (unsigned int)v7 >= 0xFFFFFE68 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12586;
    goto LABEL_43;
  }
  v9 = v8 + a3->PrivateDriverDataSize;
  if ( v9 < v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12591;
LABEL_43:
    v6 = -1073741811;
    goto LABEL_44;
  }
  if ( v9 > 0x20000 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 12596;
    v6 = -1073741637;
    goto LABEL_44;
  }
  v35 = 0LL;
  v36 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v35, this, v9, 0LL, 0LL, 0LL);
  v10 = v35;
  if ( !(_QWORD)v35 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 12603;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGKVMB_COMMAND_SUBMITCOMMAND",
      12603LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v35);
    v6 = -1073741801;
    goto LABEL_44;
  }
  *(_QWORD *)v35 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_BYTE *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 12) &= 0x1FFu;
  *(_QWORD *)(v10 + 16) = 20LL;
  *(_DWORD *)(v10 + 8) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
  v11 = (_OWORD *)(v10 + 24);
  v12 = a3;
  v13 = 3LL;
  do
  {
    *v11 = *(_OWORD *)&v12->Commands;
    v11[1] = *(_OWORD *)&v12->PresentHistoryToken;
    v11[2] = *(_OWORD *)&v12->BroadcastContext[1];
    v11[3] = *(_OWORD *)&v12->BroadcastContext[5];
    v11[4] = *(_OWORD *)&v12->BroadcastContext[9];
    v11[5] = *(_OWORD *)&v12->BroadcastContext[13];
    v11[6] = *(_OWORD *)&v12->BroadcastContext[17];
    v11 += 8;
    *(v11 - 1) = *(_OWORD *)&v12->BroadcastContext[21];
    v12 = (struct _D3DKMT_SUBMITCOMMAND *)((char *)v12 + 128);
    --v13;
  }
  while ( v13 );
  v14 = v10 + 408;
  RtlCopyFromUser((void *)(v10 + 408), a3->HistoryBufferArray, (unsigned int)v7);
  RtlCopyFromUser((void *)((unsigned int)v7 + v10 + 408), a3->pPrivateDriverData, a3->PrivateDriverDataSize);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, (struct _KTHREAD **)a2);
  for ( i = 0; i < a3->NumPrimaries; ++i )
  {
    v28 = 0LL;
    AllocationUnsafe = DXGPROCESS::GetAllocationUnsafe(
                         (__int64)a2,
                         (DXGALLOCATIONREFERENCE *)&v29,
                         *(_DWORD *)(v10 + 4LL * i + 328));
    DXGALLOCATIONREFERENCE::MoveAssign(&v28, AllocationUnsafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    if ( !v28 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12639;
LABEL_17:
      v17 = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
LABEL_18:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v34);
      goto LABEL_39;
    }
    *(_DWORD *)(v10 + 4LL * i + 328) = HIDWORD(v28[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
  }
  for ( j = 0; j < a3->NumHistoryBuffers; ++j )
  {
    v28 = 0LL;
    v19 = DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)&v29, *(_DWORD *)(v14 + 4LL * j));
    DXGALLOCATIONREFERENCE::MoveAssign(&v28, v19);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    if ( !v28 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12651;
      goto LABEL_17;
    }
    *(_DWORD *)(v14 + 4LL * j) = HIDWORD(v28[2].Ptr);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
  }
  for ( k = 0; k < *(_DWORD *)(v10 + 48); ++k )
  {
    v21 = (*(_DWORD *)(v10 + 4LL * k + 52) >> 6) & 0xFFFFFF;
    if ( !(v21 < LODWORD(a2[37].Count)
        && (v23 = *(_DWORD *)(a2[35].Count + 16LL * v21 + 8),
            ((*(_DWORD *)(v10 + 4LL * k + 52) >> 25) & 0x60) == (*(_BYTE *)(a2[35].Count + 16LL * v21 + 8) & 0x60))
        && (v23 & 0x2000) == 0
        && (v23 & 0x1F) != 0) )
      goto LABEL_36;
    v24 = 2LL * v21;
    Count = a2[35].Count;
    if ( (*(_BYTE *)(Count + 8 * v24 + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_36:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 12662;
      v17 = -1073741811;
      goto LABEL_18;
    }
    v26 = *(_QWORD *)(Count + 8 * v24);
    if ( !v26 )
      goto LABEL_36;
    *(_DWORD *)(v10 + 4LL * k + 52) = *(_DWORD *)(v26 + 28);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v34);
  v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v30, (struct DXGVMBUSMESSAGE *)&v35);
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 12673;
  }
LABEL_39:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v35);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
  return (unsigned int)v17;
}
