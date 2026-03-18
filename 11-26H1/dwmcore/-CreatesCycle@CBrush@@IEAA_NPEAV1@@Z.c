/*
 * XREFs of ?CreatesCycle@CBrush@@IEAA_NPEAV1@@Z @ 0x1801D3200
 * Callers:
 *     ?SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D30E0 (-SetSource@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801D3170 (-SetMask@CMaskBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     ?SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV?$span@PEAVCBrush@@$0?0@gsl@@_N@Z @ 0x18026E718 (-SetOrAppendBrushes@CEffectBrush@@AEAAJAEBV-$span@PEAVCBrush@@$0-0@gsl@@_N@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x18027D248 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@QEAAXXZ @ 0x18021FC70 (-pop_back@-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBrush::CreatesCycle(CBrush *this, struct CBrush *a2)
{
  struct CBrush *v2; // r8
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( !a2 )
    return 0;
  if ( a2 != this )
  {
    v5 = *(_QWORD *)a2;
    v6 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      (*(void (__fastcall **)(struct CBrush *, __int128 *))(v5 + 368))(v2, &v6);
      if ( !((__int64)(*((_QWORD *)&v6 + 1) - v6) >> 3) )
        break;
      if ( *(CBrush **)(*((_QWORD *)&v6 + 1) - 8LL) == this )
      {
        if ( (_QWORD)v6 )
          std::_Deallocate<16>((void *)v6, (v7 - v6) & 0xFFFFFFFFFFFFFFF8uLL);
        return 1;
      }
      std::vector<CBrush *>::pop_back(&v6);
      v5 = *(_QWORD *)v2;
    }
    if ( (_QWORD)v6 )
      std::_Deallocate<16>((void *)v6, (v7 - v6) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0;
  }
  return 1;
}
