/*
 * XREFs of ?VidMmPbmmVerifyCommitLimitCB@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@PEBUVIDMM_PHYSICAL_ALLOC@@II@Z @ 0x1400B0F58
 * Callers:
 *     ?PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGMENT@@W4PBMM_PAGE_SIZE@@IPEAPEAUPBMM_PAGE@@@Z @ 0x140052434 (-PbmmAllocateOneSysMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SYSMEM_SEGM.c)
 *     ?PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@W4PBMM_PAGE_SIZE@@44IPEAPEAUPBMM_PAGE@@@Z @ 0x14005256C (-PbmmAllocateOneVidMemPage@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_VIDMEM_SEGM.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmPbmmVerifyCommitLimitCB(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        const struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // rax

  v4 = (unsigned __int64)a4 << 12;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * a3);
  v6 = (v5 + 8) & -(__int64)(v5 != 0);
  v7 = *(_QWORD *)(v6 + 0x50);
  if ( v7 + v4 > *(_QWORD *)(v6 + 0x48) || v7 + v4 < v7 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
      v15[3] = v6;
      v15[4] = v4;
      v15[5] = *(_QWORD *)(v6 + 80);
      v15[6] = *(_QWORD *)(v6 + 72);
      WdLogGlobalForLineNumber = 3614;
    }
  }
  else
  {
    v8 = *((_DWORD *)a1 + 24);
    if ( !_bittest(&v8, a3) )
      return 1;
    v9 = *(_QWORD **)(*(_QWORD *)a2 + 328LL);
    v10 = *v9;
    v11 = *(_QWORD *)(*v9 + 56LL);
    v12 = v11 + v4;
    if ( v11 + v4 <= v9[2] && v12 >= v11 )
      return 1;
    if ( g_IsInternalReleaseOrDbg )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v13[3] = v6;
      v13[4] = v4;
      v13[5] = *(_QWORD *)(v10 + 56);
      v13[6] = v9[2];
      WdLogGlobalForLineNumber = 3634;
    }
  }
  return 0;
}
