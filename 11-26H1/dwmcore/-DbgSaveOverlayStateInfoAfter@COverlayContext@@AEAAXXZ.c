/*
 * XREFs of ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800D6C54
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoAfter(COverlayContext *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  char *i; // rsi
  __int64 v5; // rbp
  __int64 v6; // r9
  char *v7; // rcx
  __int128 *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rcx

  v1 = *((_QWORD *)this + 1586);
  v2 = 0;
  for ( i = (char *)this + 1720 * *((int *)this + 7424);
        v2 < 438261969 * (unsigned int)((*((_QWORD *)this + 1587) - v1) >> 3);
        v1 = *((_QWORD *)this + 1586) )
  {
    if ( v2 >= 2 )
      break;
    v5 = 816LL * v2;
    v6 = 392LL * v2;
    v7 = &i[v5 + 19776];
    v8 = (__int128 *)(v6 + v1);
    v9 = 3LL;
    do
    {
      v10 = *v8;
      v8 += 8;
      *(_OWORD *)v7 = v10;
      v7 += 128;
      *((_OWORD *)v7 - 7) = *(v8 - 7);
      *((_OWORD *)v7 - 6) = *(v8 - 6);
      *((_OWORD *)v7 - 5) = *(v8 - 5);
      *((_OWORD *)v7 - 4) = *(v8 - 4);
      *((_OWORD *)v7 - 3) = *(v8 - 3);
      *((_OWORD *)v7 - 2) = *(v8 - 2);
      *((_OWORD *)v7 - 1) = *(v8 - 1);
      --v9;
    }
    while ( v9 );
    *(_QWORD *)v7 = *(_QWORD *)v8;
    *(_QWORD *)&i[v5 + 20176] = &i[v5 + 19776];
    v11 = *(_QWORD *)(*((_QWORD *)this + 1586) + v6 + 16);
    *(_DWORD *)&i[v5 + 20188] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 368LL))(v11);
    ++v2;
  }
}
