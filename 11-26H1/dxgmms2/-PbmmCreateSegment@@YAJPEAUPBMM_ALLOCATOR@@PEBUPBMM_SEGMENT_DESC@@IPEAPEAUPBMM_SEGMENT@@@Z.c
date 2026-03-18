/*
 * XREFs of ?PbmmCreateSegment@@YAJPEAUPBMM_ALLOCATOR@@PEBUPBMM_SEGMENT_DESC@@IPEAPEAUPBMM_SEGMENT@@@Z @ 0x140053BB8
 * Callers:
 *     ?PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@PEAPEAUPBMM_ALLOCATOR@@@Z @ 0x140051614 (-PbmmCreateAllocator@@YAJPEAUVIDMM_PHYSICAL_ADAPTER@@IPEBUPBMM_SEGMENT_DESC@@W4PBMM_PAGE_SIZE@@P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     CreateSlabArray @ 0x140053978 (CreateSlabArray.c)
 *     ?PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z @ 0x140053ECC (-PbmmDestroySegment@@YAXPEAUPBMM_SEGMENT@@@Z.c)
 *     ?PbmmCreateRegion@@YAJW4PBMM_REGIONTYPE@@PEAPEAUPBMM_REGION@@@Z @ 0x1400540D8 (-PbmmCreateRegion@@YAJW4PBMM_REGIONTYPE@@PEAPEAUPBMM_REGION@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall PbmmCreateSegment(
        struct PBMM_ALLOCATOR *a1,
        const struct PBMM_SEGMENT_DESC *a2,
        unsigned int a3,
        struct PBMM_SEGMENT **a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rcx
  _DWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  int Region; // eax
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rcx
  int SlabArray; // eax

  v4 = a3;
  *a4 = 0LL;
  v6 = *(_QWORD *)a2;
  if ( a3 )
  {
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      v10 = 151;
      goto LABEL_11;
    }
    v13 = 4096 << *((_DWORD *)a1 + 36);
    if ( ((v13 - 1) & (unsigned int)v6) != 0 )
    {
      WdLogSingleEntry1(1LL, v6);
      WdLogGlobalForLineNumber = 160;
      goto LABEL_12;
    }
    v16 = (_DWORD *)operator new(2904LL, 0x356D6250u, 256LL);
    v12 = v16;
    if ( !v16 )
    {
LABEL_8:
      _InterlockedIncrement(&dword_14008A8A0);
      WdLogSingleEntry1(6LL, v4);
      WdLogGlobalForLineNumber = 188;
      DxgkLogInternalTriageEvent(v14, 262145LL);
      return 3221225495LL;
    }
    memset(v16, 0, 0xB58uLL);
  }
  else
  {
    if ( v6 )
    {
      WdLogSingleEntry0(1LL);
      v10 = 169;
LABEL_11:
      WdLogGlobalForLineNumber = v10;
LABEL_12:
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
      return 3221225485LL;
    }
    v11 = (_DWORD *)operator new(2904LL, 0x356D6250u, 256LL);
    v12 = v11;
    if ( v11 )
      memset(v11, 0, 0xB58uLL);
    else
      v12 = 0LL;
    v13 = 0;
    if ( !v12 )
      goto LABEL_8;
  }
  *(_QWORD *)v12 = *(_QWORD *)a2 >> 12;
  v17 = v12[716];
  *((_QWORD *)v12 + 1) = a1;
  v18 = v17 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v17) & 0x1Fu;
  v12[716] = v18;
  if ( !(_DWORD)v4 )
  {
    *((_QWORD *)v12 + 362) = 0LL;
    *((_QWORD *)v12 + 361) = v12 + 720;
    *((_QWORD *)v12 + 360) = v12 + 720;
LABEL_19:
    *a4 = (struct PBMM_SEGMENT *)v12;
    return 0LL;
  }
  Region = PbmmCreateRegion(v18, v12 + 722);
  if ( Region < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = Region;
      WdLogGlobalForLineNumber = 210;
    }
    goto LABEL_23;
  }
  if ( (*((_DWORD *)a2 + 3) & 1) != 0 && (int)PbmmCreateRegion(v20, v12 + 724) < 0 )
  {
    _InterlockedIncrement(&dword_14008A898);
    WdLogSingleEntry1(6LL, 2LL);
    WdLogGlobalForLineNumber = 221;
    DxgkLogInternalTriageEvent(v22, 262145LL);
LABEL_23:
    v21 = -1073741801;
    goto LABEL_30;
  }
  *((_QWORD *)v12 + 359) = *(_QWORD *)a2 / (unsigned __int64)v13;
  SlabArray = CreateSlabArray(a1, (struct PBMM_VIDMEM_SEGMENT *)v12, v13);
  v21 = SlabArray;
  if ( SlabArray >= 0 )
    goto LABEL_19;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = SlabArray;
    WdLogGlobalForLineNumber = 233;
  }
LABEL_30:
  PbmmDestroySegment((struct PBMM_SEGMENT *)v12);
  return v21;
}
