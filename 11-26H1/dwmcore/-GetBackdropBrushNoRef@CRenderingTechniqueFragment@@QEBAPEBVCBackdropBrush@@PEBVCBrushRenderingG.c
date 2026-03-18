/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18015D3B4
 * Callers:
 *     ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18015D24C (-GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18015D454 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CBackdropBrush *__fastcall CRenderingTechniqueFragment::GetBackdropBrushNoRef(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  unsigned int i; // edi
  __int64 v7; // rax
  struct CBrush *NamedInput; // rax
  struct CBrush *v9; // rsi

  v2 = 0LL;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v7 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v7 + 16LL * i + 8) && !*(_BYTE *)(v7 + 16LL * i + 4) )
    {
      NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)(v7 + 16LL * i));
      v9 = NamedInput;
      if ( NamedInput )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 64LL))(
               NamedInput,
               8LL) )
        {
          return v9;
        }
      }
    }
  }
  return (const struct CBackdropBrush *)v2;
}
