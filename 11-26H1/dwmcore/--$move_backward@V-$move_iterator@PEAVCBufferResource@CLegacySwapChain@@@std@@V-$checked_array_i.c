/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802A58B0
 * Callers:
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801CF6DC (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??4CBufferResource@CLegacySwapChain@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A5AA0 (--4CBufferResource@CLegacySwapChain@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(a4);
  while ( a2 != a3 )
  {
    v8 -= 16LL;
    a3 -= 16LL;
    CLegacySwapChain::CBufferResource::operator=(v8, a3);
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
