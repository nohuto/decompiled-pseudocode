/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802A594C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CF830 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@PEAVCBufferResource@CLegacySwapChain@@@std@@YAPEAVCBufferResource@CLegacySwapChain@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@V30@PEAV12@@Z @ 0x1802A54F8 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@PE.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(a4);
  a4[2] = ((__int64)std::_Uninitialized_move_unchecked<std::move_iterator<CLegacySwapChain::CBufferResource *>,CLegacySwapChain::CBufferResource *>(
                      a2,
                      a3,
                      v8)
         - *a4) >> 4;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
