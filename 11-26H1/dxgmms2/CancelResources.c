/*
 * XREFs of CancelResources @ 0x140050F84
 * Callers:
 *     ?PbmmCancelResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x14005151C (-PbmmCancelResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 * Callees:
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140053240 (-PbmmRemovePageFromPhysicalAlloc@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 */

__int64 *__fastcall CancelResources(struct PBMM_ALLOCATOR *a1, __int64 a2, __int64 **a3)
{
  __int64 *result; // rax
  __int64 *v6; // rsi
  unsigned int v7; // ecx
  struct PBMM_PHYSICAL_ALLOC *v8; // rcx
  unsigned int v9; // r14d
  _DWORD *v10; // r8
  __int64 *v11; // r8
  __int64 *i; // rcx
  __int64 **v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rbx

  for ( result = *a3; result; *a3 = result )
  {
    v6 = result - 3;
    while ( 1 )
    {
      v17 = v6[2];
      if ( !v17 )
        break;
      v6[2] = *(_QWORD *)v17;
      v7 = *(_DWORD *)(v17 + 64);
      *(_DWORD *)(v17 + 68) &= ~0x200000u;
      v8 = (struct PBMM_PHYSICAL_ALLOC *)((v7 >> 3) & 0xF);
      v9 = 1 << (char)v8;
      *(_OWORD *)v17 = 0LL;
      if ( *(__int64 **)(v17 + 56) != v6 )
      {
        PbmmRemovePageFromPhysicalAlloc(v8, (struct PBMM_PAGE *)v17);
        v10 = *(_DWORD **)(v17 + 56);
        if ( v10 )
        {
          if ( (v10[22] & 2) == 0 || v10[17] == v10[15] )
          {
            v11 = (__int64 *)(v10 + 8);
            for ( i = (__int64 *)*v11; i != v11; i = (__int64 *)*i )
            {
              if ( ((*((_DWORD *)i + 12) >> 11) & 0xFFFFFu) > ((*(_DWORD *)(v17 + 64) >> 11) & 0xFFFFFu) )
                break;
            }
            v13 = (__int64 **)i[1];
            v14 = (__int64 *)(v17 + 16);
            if ( *v13 != i )
              __fastfail(3u);
            *v14 = (__int64)i;
            *(_QWORD *)(v17 + 24) = v13;
            *v13 = v14;
            i[1] = (__int64)v14;
          }
          else
          {
            EvictOnePage(a1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*(_DWORD *)(v17 + 68) & 0x1F)), v10, v17);
          }
        }
      }
      v15 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*(_DWORD *)(v17 + 68) & 0x1F));
      v16 = *(_DWORD *)(v17 + 64);
      *((_DWORD *)v6 + 19) -= v9;
      *(_QWORD *)(v15 + 40) -= v9;
      --*(_QWORD *)(v15 + 8LL * ((v16 >> 3) & 0xF) + 304);
      MergePages(a1, (struct PBMM_SEGMENT *)v15, (struct PBMM_PAGE *)v17);
    }
    result = *a3;
    if ( !*a3 )
      break;
    result = (__int64 *)*result;
  }
  return result;
}
