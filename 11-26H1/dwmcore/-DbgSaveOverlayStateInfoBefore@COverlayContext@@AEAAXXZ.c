/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x1800D6B18
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1800D6554 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  CComposition **v3; // rbx
  __int64 v4; // rdx
  unsigned int i; // esi
  CComposition *v6; // xmm0_8
  __int64 v7; // rbp
  __int64 v8; // r9
  CComposition **v9; // rcx
  __int128 *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx

  v2 = (*((_DWORD *)this + 7424) + 1) % 6u;
  *((_DWORD *)this + 7424) = v2;
  v3 = (CComposition **)((char *)this + 1720 * (int)v2 + 19376);
  memset_0(v3, 0, 0x6B8uLL);
  *v3 = GetCurrentFrameId();
  v4 = *((_QWORD *)this + 1586);
  for ( i = 0; i < 438261969 * (unsigned int)((*((_QWORD *)this + 1587) - v4) >> 3); v4 = *((_QWORD *)this + 1586) )
  {
    if ( i >= 2 )
      break;
    v7 = 102LL * i;
    v8 = 392LL * i;
    v9 = &v3[v7 + 1];
    v10 = (__int128 *)(v8 + v4);
    v11 = 3LL;
    do
    {
      v12 = *v10;
      v10 += 8;
      *(_OWORD *)v9 = v12;
      v9 += 16;
      *((_OWORD *)v9 - 7) = *(v10 - 7);
      *((_OWORD *)v9 - 6) = *(v10 - 6);
      *((_OWORD *)v9 - 5) = *(v10 - 5);
      *((_OWORD *)v9 - 4) = *(v10 - 4);
      *((_OWORD *)v9 - 3) = *(v10 - 3);
      *((_OWORD *)v9 - 2) = *(v10 - 2);
      *((_OWORD *)v9 - 1) = *(v10 - 1);
      --v11;
    }
    while ( v11 );
    *v9 = *(CComposition **)v10;
    v3[v7 + 99] = (CComposition *)&v3[v7 + 1];
    v13 = *(_QWORD *)(v8 + *((_QWORD *)this + 1586) + 16);
    LODWORD(v3[v7 + 101]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 368LL))(v13);
    ++i;
    ++*((_DWORD *)v3 + 410);
  }
  if ( *((_BYTE *)this + 19052) )
  {
    *(_OWORD *)((char *)v3 + 1644) = *(_OWORD *)((char *)this + 18984);
    *(_OWORD *)((char *)v3 + 1660) = *(_OWORD *)((char *)this + 19000);
    *(_OWORD *)((char *)v3 + 1676) = *(_OWORD *)((char *)this + 19016);
    *(_OWORD *)((char *)v3 + 1692) = *(_OWORD *)((char *)this + 19032);
    v6 = (CComposition *)*((_QWORD *)this + 2381);
    ++*((_DWORD *)v3 + 429);
    *(CComposition **)((char *)v3 + 1708) = v6;
  }
}
