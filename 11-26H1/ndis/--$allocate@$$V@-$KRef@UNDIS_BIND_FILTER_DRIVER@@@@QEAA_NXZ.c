/*
 * XREFs of ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x140137910
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x140161C10 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x140161630 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(_QWORD *a1)
{
  _WORD *PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _WORD *v5; // rbx
  _QWORD *v6; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x446C4642u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    v6 = PoolWithTag + 4;
    v6[1] = v6;
    *v6 = v6;
    *((_DWORD *)v5 + 10) = 0;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_DWORD *)v5 + 16) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( *a1 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1, v3, v4);
    *a1 = 0LL;
  }
  if ( !v5 )
    return 0;
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1, v3, v4);
  *a1 = v5;
  return 1;
}
