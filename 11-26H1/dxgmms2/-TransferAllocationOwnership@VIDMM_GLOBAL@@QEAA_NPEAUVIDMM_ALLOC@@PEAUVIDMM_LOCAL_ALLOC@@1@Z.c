/*
 * XREFs of ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400DCDB8
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140012AD0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400DD220 (-VidMmRecordAlloc@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@PEAVVIDMM_PROCESS@@W.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VIDMM_GLOBAL::TransferAllocationOwnership(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  struct VIDMM_LOCAL_ALLOC *v4; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  bool result; // al
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rbx
  struct VIDMM_DEVICE *v15; // rdx
  __int64 v16; // rcx
  bool v17[8]; // [rsp+20h] [rbp-38h]
  struct DXGALLOCATION *v18; // [rsp+28h] [rbp-30h]
  struct VIDMM_ALLOC *v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = a4;
  v7 = **(_QWORD ***)a2;
  if ( !a4 )
  {
    if ( *((_DWORD *)v7 + 19) && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      WdLogGlobalForLineNumber = 213;
      goto LABEL_20;
    }
    v8 = *((_QWORD *)a2 + 2);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 40);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        if ( v10 )
        {
          if ( !*(_DWORD *)(v10 + 64) )
          {
            *((_DWORD *)v7 + 8) |= 1u;
            goto LABEL_8;
          }
          if ( (*(_DWORD *)v7[46] & 0x10) == 0 )
          {
            v15 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5065);
            v19 = 0LL;
            if ( (int)VIDMM_GLOBAL::OpenOneAllocation(this, v15, (struct VIDMM_GLOBAL_ALLOC *)v7, 0LL, 0, 0LL, &v19) >= 0 )
            {
              v4 = *(struct VIDMM_LOCAL_ALLOC **)v19;
LABEL_17:
              *((_DWORD *)v7 + 8) = v7[4] & 0xFFFFFFFB | (v4 != 0LL ? 4 : 0);
              goto LABEL_8;
            }
LABEL_20:
            WdLogSingleEntry1(3LL, v7);
            WdLogGlobalForLineNumber = 28876;
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_8:
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    if ( v4 )
      v16 = *(unsigned int *)(*((_QWORD *)v4 + 1) + 24LL);
    else
      v16 = 0LL;
    LODWORD(v18) = v16;
    *(_DWORD *)v17 = *(_DWORD *)(*((_QWORD *)a3 + 1) + 24LL);
    McTemplateK0pqq_EtwWriteTransfer(v16, &EventTransferAllocationOwnership, (__int64)a3, v7, *(_QWORD *)v17, v18);
  }
  if ( v4 )
  {
    v12 = *((_QWORD *)a3 + 1);
    if ( v12 )
    {
      v13 = *v7;
      if ( (*(_DWORD *)(*v7 + 56LL) & 1) != 0 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v13 + 52) >> 2) & 0x3F));
        VidMmRecordAlloc(v14, *v7, v12, 1LL);
        VidMmRecordAlloc(v14, v13, *((_QWORD *)v4 + 1), 0LL);
      }
    }
  }
  result = v4 != 0LL;
  v7[6] = v4;
  return result;
}
