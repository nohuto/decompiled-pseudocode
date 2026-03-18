/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18020EF9C
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180177014 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@_J@Z @ 0x180176D1C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@PEAVOverlayPlaneInfo@COverlayContext@@@std@@YAPEAVOverlayPlaneInfo@COverlayContext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@V30@PEAV12@@Z @ 0x18020F038 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@PE.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *> &,__int64>(
         a4,
         0x7D6343EB1A1F58D1LL * ((a3 - a2) >> 3));
  a4[2] = 0x7D6343EB1A1F58D1LL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,COverlayContext::OverlayPlaneInfo *>(
              a2,
              a3,
              v8)
          - *a4) >> 3);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
