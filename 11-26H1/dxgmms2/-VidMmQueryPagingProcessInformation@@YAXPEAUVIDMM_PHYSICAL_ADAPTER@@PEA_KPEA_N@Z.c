/*
 * XREFs of ?VidMmQueryPagingProcessInformation@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEA_KPEA_N@Z @ 0x1400B4E08
 * Callers:
 *     ?QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N1PEAI2@Z @ 0x1400AAC38 (-QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N1PEAI2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmQueryPagingProcessInformation(struct VIDMM_PHYSICAL_ADAPTER *a1, unsigned __int64 *a2, bool *a3)
{
  unsigned int v3; // r10d
  unsigned __int16 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = *((_DWORD *)a1 + 34);
  v4 = 0;
  if ( v3 )
  {
    v5 = *((_QWORD *)a1 + 219);
    do
    {
      v6 = *(_QWORD *)(v5 + 8LL * v4);
      v7 = v6 + 108;
      if ( !v6 )
        v7 = 100LL;
      if ( *(_DWORD *)v7 == 1 )
      {
        v8 = v6 + 40;
        if ( !v6 )
          v8 = 32LL;
        if ( *(_QWORD *)v8 > *a2 )
          *a2 = *(_QWORD *)v8;
        v9 = v6 + 132;
        if ( !v6 )
          v9 = 124LL;
        if ( *(_DWORD *)v9 == 0x10000 )
          *a3 = 1;
      }
      ++v4;
    }
    while ( v4 < v3 );
  }
}
