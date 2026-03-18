/*
 * XREFs of ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801CF7F8
 * Callers:
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801CF6DC (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CF830 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 *     ?clear_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802A662C (-clear_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource.c)
 * Callees:
 *     ??1CD2DFactory@@QEAA@XZ @ 0x18019B13C (--1CD2DFactory@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<CLegacySwapChain::CBufferResource>(CD2DFactory *this, CD2DFactory *a2)
{
  CD2DFactory *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CD2DFactory::~CD2DFactory(v3);
      v3 = (CD2DFactory *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
