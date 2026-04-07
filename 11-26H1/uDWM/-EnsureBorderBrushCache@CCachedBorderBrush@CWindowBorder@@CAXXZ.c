/*
 * XREFs of ?EnsureBorderBrushCache@CCachedBorderBrush@CWindowBorder@@CAXXZ @ 0x18000D090
 * Callers:
 *     ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x18000C210 (-GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4Sha.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0CGraphicsResourceOwner@@IEAA@XZ @ 0x180027888 (--0CGraphicsResourceOwner@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void CWindowBorder::CCachedBorderBrush::EnsureBorderBrushCache(void)
{
  _OWORD *v0; // rbx
  _QWORD *v1; // rax
  __int64 v2; // rdx

  if ( !CWindowBorder::CCachedBorderBrush::s_cache )
  {
    v0 = operator new(0x28uLL);
    if ( v0 )
    {
      *v0 = 0LL;
      v0[1] = 0LL;
      *((_QWORD *)v0 + 3) = 0LL;
      *((_QWORD *)v0 + 4) = 0LL;
      v1 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
      *v1 = v1;
      v1[1] = v1;
      *((_QWORD *)v0 + 3) = v1;
      CGraphicsResourceOwner::CGraphicsResourceOwner((CGraphicsResourceOwner *)v0);
      *(_QWORD *)v0 = &CWindowBorder::CCachedBorderBrush::CBorderBrushCache::`vftable';
    }
    else
    {
      v0 = 0LL;
    }
    v2 = CWindowBorder::CCachedBorderBrush::s_cache;
    CWindowBorder::CCachedBorderBrush::s_cache = (__int64)v0;
    if ( v2 )
      std::default_delete<CWindowBorder::CCachedBorderBrush::CBorderBrushCache>::operator()();
  }
}
