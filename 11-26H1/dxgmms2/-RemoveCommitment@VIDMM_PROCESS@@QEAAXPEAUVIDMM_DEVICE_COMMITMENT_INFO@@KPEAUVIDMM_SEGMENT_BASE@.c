/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAUVIDMM_DEVICE_COMMITMENT_INFO@@KPEAUVIDMM_SEGMENT_BASE@@_NPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010F4A8
 * Callers:
 *     RemoveCommitmentCb @ 0x140128380 (RemoveCommitmentCb.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003D780 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x14010F778 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT_BASE *a4,
        bool a5,
        const struct VIDMM_GLOBAL_ALLOC *a6)
{
  struct VIDMM_DEVICE_COMMITMENT_INFO *v7; // r9
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  unsigned __int8 v15; // si
  _QWORD *v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r9
  int v20; // ecx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 AllocationPriorityClassFromPriority; // r8

  v7 = a2;
  v9 = a3;
  v10 = *(_QWORD *)a6;
  v11 = *(_QWORD *)(*(_QWORD *)a6 + 16LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7 = a2;
    v12[3] = this;
    v12[4] = v9;
    v12[5] = a4;
    v12[6] = a5;
    v12[7] = v11;
    WdLogGlobalForLineNumber = 1277;
  }
  v13 = *(_QWORD **)(*((_QWORD *)this + 4) + 8 * v9);
  if ( v13 )
  {
    v13 = (_QWORD *)v13[1];
    v14 = v13[38 * *((unsigned __int16 *)a4 + 30)] + 184LL * *((unsigned __int16 *)a4 + 31);
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)(v14 + 16) -= v11;
  --*(_DWORD *)(v14 + 56);
  if ( !a5 )
    goto LABEL_6;
  --*(_DWORD *)(v14 + 8);
  v24 = (_QWORD *)((char *)v7 + 16);
  v25 = *((_QWORD *)v7 + 2);
  if ( *(struct VIDMM_DEVICE_COMMITMENT_INFO **)(v25 + 8) != (struct VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v7 + 16) )
    goto LABEL_23;
  v13 = (_QWORD *)*((_QWORD *)v7 + 3);
  if ( (_QWORD *)*v13 != v24 )
    goto LABEL_23;
  *v13 = v25;
  v15 = 1;
  *(_QWORD *)(v25 + 8) = v13;
  *v24 = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  if ( *(_DWORD *)(v14 + 8) )
LABEL_6:
    v15 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v16[3] = v14;
    v16[4] = a4;
    v16[5] = v15;
    v16[6] = v11;
    WdLogGlobalForLineNumber = 6742;
  }
  if ( v15 )
  {
    v21 = (_QWORD *)(v14 + 24);
    v22 = *v21;
    if ( *(_QWORD **)(*v21 + 8LL) == v21 )
    {
      v23 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v23 == v21 )
      {
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        *v21 = 0LL;
        v21[1] = 0LL;
        goto LABEL_10;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
LABEL_10:
  v17 = *(__int64 **)(*((_QWORD *)this + 4) + 8 * v9);
  v18 = v17[1] + 304 * ((*(_DWORD *)(v10 + 52) >> 2) & 0x3FLL);
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 8LL * *((int *)a4 + 24) + 208), -v11) - v11;
  if ( (byte_14008A201 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v17[2], &EventVidMmProcessCommitmentChange, v19 + v11);
  v20 = *(_DWORD *)(*((_QWORD *)a4 + 1) + 96LL);
  if ( _bittest(&v20, *((unsigned __int8 *)a4 + 62)) && (*((_DWORD *)a6 + 6) & 0x10) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(*(unsigned int *)(*(_QWORD *)a6 + 48LL));
    *(_QWORD *)(v18 + 8 * AllocationPriorityClassFromPriority + 264) -= v11;
    if ( (byte_14008A201 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *v17,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
  }
}
