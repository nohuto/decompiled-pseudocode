/*
 * XREFs of ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400BFDCC
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x14009A15C (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@I.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z @ 0x14009B2A0 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkMemoryBlocks(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rdi
  unsigned int i; // ebx
  union _LARGE_INTEGER v9; // rdx
  int v10; // eax
  unsigned int v11; // r14d
  _BYTE *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // r8
  __int64 v20; // rcx
  void *v22; // [rsp+50h] [rbp-28h] BYREF

  v5 = a2;
  for ( i = 0; i < a3; ++i )
  {
    v22 = 0LL;
    v9 = *(union _LARGE_INTEGER *)(a4 + 16LL * i);
    if ( v9.QuadPart >= *((_QWORD *)a1 + 1) )
      continue;
    v10 = VIDMM_LINEAR_POOL::AllocateAt(a1, v9, *(_QWORD *)(a4 + 16LL * i + 8), 0LL, &v22);
    v11 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(1LL, v5, *(_QWORD *)(a4 + 16LL * i), *(_QWORD *)(a4 + 16LL * i + 8), v10);
      WdLogGlobalForLineNumber = 1422;
      DxgkLogInternalTriageEvent(v20, 0x40000LL);
      return v11;
    }
    v12 = v22;
    if ( (_DWORD)v5 == 6 )
    {
      v13 = (char *)v22 + 24;
      v17 = *((_QWORD *)v22 + 3);
      if ( *(void **)(v17 + 8) != (char *)v22 + 24 || (v18 = (_QWORD *)*((_QWORD *)v22 + 4), (_QWORD *)*v18 != v13) )
LABEL_17:
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v16 = (_QWORD *)((char *)a1 + 128);
      goto LABEL_13;
    }
    if ( (_DWORD)v5 == 7 )
    {
      v13 = (char *)v22 + 24;
      v14 = *((_QWORD *)v22 + 3);
      if ( *(void **)(v14 + 8) != (char *)v22 + 24 )
        goto LABEL_17;
      v15 = (_QWORD *)*((_QWORD *)v22 + 4);
      if ( (_QWORD *)*v15 != v13 )
        goto LABEL_17;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = (_QWORD *)((char *)a1 + 144);
LABEL_13:
      v19 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v19 != v16 )
        goto LABEL_17;
      *v13 = v16;
      v13[1] = v19;
      *v19 = v13;
      v16[1] = v13;
    }
    v12[56] = v5;
  }
  return 0LL;
}
