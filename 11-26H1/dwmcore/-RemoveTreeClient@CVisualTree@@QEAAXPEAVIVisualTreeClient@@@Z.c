/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x18014B730
 * Callers:
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x18014B780 (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008DC40 (-clear_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansio.c)
 */

void __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  __int64 *v4; // rcx
  struct IVisualTreeClient **i; // rdx

  v4 = (__int64 *)((char *)this + 2448);
  for ( i = (struct IVisualTreeClient **)*v4; i != *((struct IVisualTreeClient ***)this + 307); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
        v4,
        ((__int64)i - *v4) >> 3,
        1LL);
      *((_BYTE *)this + 2628) = 1;
      return;
    }
  }
}
