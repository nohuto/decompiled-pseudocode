/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x14012B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x140105B64 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  void **v4; // rdi
  __int64 v5; // r14
  __int64 result; // rax
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // r13
  ULONG *p_ByteCount; // rsi
  __int64 *v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-59h]
  _QWORD v17[6]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v19; // [rsp+90h] [rbp+17h]
  struct _MDL *v20; // [rsp+E8h] [rbp+6Fh]
  __int64 v21; // [rsp+F0h] [rbp+77h]

  v20 = a2;
  v4 = *(void ***)a3;
  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  v21 = **(_QWORD **)a3;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v5 + 40320) + 8LL * ((*(_DWORD *)(v21 + 52) >> 2) & 0x3F)) + 556LL) >= 0 )
    return 3221225473LL;
  v7 = a2 + 1;
  LogicalAddress = 0LL;
  p_ByteCount = &a2->ByteCount;
  v10 = (__int64 *)(a3 + 32);
  if ( *(_BYTE *)(v5 + 40098) )
  {
    LogicalAddress = VidMmiGetLogicalAddress(v4[43], *v10);
    v11 = SysMmMapPagesToIommu(
            *(_QWORD *)(*(_QWORD *)(v5 + 24) + 224LL),
            LogicalAddress,
            v7,
            (unsigned __int64)*p_ByteCount >> 12,
            0,
            7,
            v4);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, v4, v11);
      result = v12;
      WdLogGlobalForLineNumber = 3372;
      return result;
    }
    a2 = v20;
  }
  v13 = *p_ByteCount;
  v14 = *v10;
  v17[0] = 0LL;
  v17[2] = 0LL;
  v17[3] = 0LL;
  v18[1] = 0LL;
  v17[5] = a2 + 1;
  v18[0] = *((_QWORD *)a3 + 2);
  v17[4] = a2;
  v15 = *((_QWORD *)a3 + 1);
  v19 = 0LL;
  v17[1] = LogicalAddress;
  v18[3] = v14;
  v18[2] = (v15 + 8) & -(__int64)(v15 != 0);
  VIDMM_GLOBAL::MemoryTransfer(
    (VIDMM_GLOBAL *)v5,
    (struct VIDMM_GLOBAL_ALLOC *)v4,
    v13,
    v14,
    (struct VIDMM_TRANSFER_PARAMETER *)v17,
    (struct VIDMM_TRANSFER_PARAMETER *)v18,
    *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
  *v10 += v13;
  VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, (struct VIDMM_GLOBAL_ALLOC *)v4);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)(v21 + 52) >> 2) & 0x3F);
  if ( *(_BYTE *)(v5 + 40098) )
  {
    LOBYTE(v16) = 0;
    SysMmUnmapPagesFromIommu(
      *(_QWORD *)(*(_QWORD *)(v5 + 24) + 224LL),
      LogicalAddress,
      &v20[1],
      (unsigned __int64)*p_ByteCount >> 12,
      v16,
      7,
      v4);
  }
  return 0LL;
}
