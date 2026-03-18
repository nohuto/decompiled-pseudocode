/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x14012B250
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1400D1900 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  void **v4; // rsi
  __int64 v6; // rbx
  __int64 result; // rax
  unsigned __int64 ByteCount; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 LogicalAddress; // r12
  int v12; // eax
  unsigned int v13; // r15d
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-59h]
  _QWORD v17[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v19; // [rsp+90h] [rbp+17h]
  unsigned __int64 v20; // [rsp+F0h] [rbp+77h]
  __int64 v21; // [rsp+F8h] [rbp+7Fh]

  v4 = *(void ***)a3;
  v6 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  v21 = **(_QWORD **)a3;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v6 + 40320) + 8LL * ((*(_DWORD *)(v21 + 52) >> 2) & 0x3F)) + 556LL) >= 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  v20 = ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v6) )
  {
    *(_QWORD *)(v10 + 32) += ByteCount;
  }
  else
  {
    LogicalAddress = v9;
    if ( *(_BYTE *)(v6 + 40098) != (_BYTE)v9 )
    {
      LogicalAddress = VidMmiGetLogicalAddress(v4[43], *(_QWORD *)(v10 + 32));
      v12 = SysMmMapPagesToIommu(
              *(_QWORD *)(*(_QWORD *)(v6 + 24) + 224LL),
              LogicalAddress,
              &a1[1],
              (unsigned __int64)a1->ByteCount >> 12,
              0,
              7,
              v4);
      v9 = 0LL;
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry2(3LL, v4, v12);
        result = v13;
        WdLogGlobalForLineNumber = 3236;
        return result;
      }
      ByteCount = v20;
    }
    v14 = *((_QWORD *)a3 + 4);
    v18[0] = *((_QWORD *)a3 + 2);
    v18[1] = v9;
    v17[0] = v9;
    v17[2] = v9;
    v17[3] = v9;
    v15 = *((_QWORD *)a3 + 1);
    v19 = 0LL;
    v18[3] = v14;
    v17[4] = a1;
    v17[5] = a1 + 1;
    v17[1] = LogicalAddress;
    v18[2] = (v15 + 8) & -(__int64)(v15 != 0);
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v6,
      (struct VIDMM_GLOBAL_ALLOC *)v4,
      ByteCount,
      v14,
      (struct VIDMM_TRANSFER_PARAMETER *)v18,
      (struct VIDMM_TRANSFER_PARAMETER *)v17,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v6, (struct VIDMM_GLOBAL_ALLOC *)v4);
    VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v6, (*(_DWORD *)(v21 + 52) >> 2) & 0x3F);
    if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v6)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 744LL) + 3284LL) & 4) != 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, 0LL, 10LL, 0LL);
      WdLogGlobalForLineNumber = 213;
    }
    if ( *(_BYTE *)(v6 + 40098) )
    {
      LOBYTE(v16) = 0;
      SysMmUnmapPagesFromIommu(
        *(_QWORD *)(*(_QWORD *)(v6 + 24) + 224LL),
        LogicalAddress,
        &a1[1],
        (unsigned __int64)a1->ByteCount >> 12,
        v16,
        7,
        v4);
    }
  }
  return 0LL;
}
