/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E3764
 * Callers:
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E3EA4 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  struct VIDMM_ALLOC *v2; // r10
  __int64 *v4; // r11
  int v5; // r8d
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rax
  struct VIDMM_ALLOC **v15; // rdx
  VIDMM_DEVICE **v16; // rcx
  char *v17; // rcx
  VIDMM_DEVICE **v18; // rdx

  v2 = a2;
  v4 = **(__int64 ***)a2;
  v5 = *((_DWORD *)v4 + 6);
  if ( (v5 & 1) == 0 || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 336LL) == *(_QWORD *)v4[41] )
  {
    v6 = *v4;
    v7 = 304LL * ((*(_DWORD *)(*v4 + 52) >> 2) & 0x3F) + *(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 8LL;
    if ( (*((_BYTE *)a2 + 36) & 1) != 0 && (v4[3] & 0xF000) == 0x2000 )
      v8 = 0LL;
    else
      v8 = (unsigned __int16)v5 >> 12;
    v9 = *(_QWORD *)(v6 + 16);
    v10 = *(_QWORD *)(v7 + 8 * v8 + 72);
    if ( v9 <= v10 )
    {
      *(_QWORD *)(v7 + 8 * v8 + 72) = v10 - v9;
      v12 = *(_QWORD *)(v6 + 16);
      v11 = (*((_DWORD *)v4 + 6) >> 8) & 0xF;
      v13 = *(_QWORD *)(v7 + 8 * v11 + 136);
      if ( v12 > v13 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        v14 = (VIDMM_DEVICE *)WdLogSingleEntry5(0LL, 270LL, 68LL, v7, v13, v12);
        WdLogGlobalForLineNumber = 213;
        goto LABEL_14;
      }
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      v11 = WdLogSingleEntry5(0LL, 270LL, 68LL, v7, v10, v9);
      WdLogGlobalForLineNumber = 213;
    }
    *(_QWORD *)(v7 + 8 * v11 + 136) = v13 - v12;
  }
  v14 = (struct VIDMM_ALLOC *)((char *)v2 + 632);
  v15 = (struct VIDMM_ALLOC **)*((_QWORD *)v2 + 79);
  if ( v15[1] != (struct VIDMM_ALLOC *)((char *)v2 + 632)
    || (v16 = (VIDMM_DEVICE **)*((_QWORD *)v2 + 80), *v16 != v14)
    || (*v16 = (VIDMM_DEVICE *)v15,
        v15[1] = (struct VIDMM_ALLOC *)v16,
        v17 = (char *)this + 168,
        v18 = (VIDMM_DEVICE **)*((_QWORD *)this + 22),
        *v18 != (VIDMM_DEVICE *)((char *)this + 168)) )
  {
    __fastfail(3u);
  }
LABEL_14:
  *(_QWORD *)v14 = v17;
  *((_QWORD *)v14 + 1) = v18;
  *v18 = v14;
  *((_QWORD *)v17 + 1) = v14;
}
