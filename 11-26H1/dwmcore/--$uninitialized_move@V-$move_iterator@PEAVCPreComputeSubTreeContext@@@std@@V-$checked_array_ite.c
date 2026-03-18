/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C9B0
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@Z @ 0x18022941C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@PEAVCPreComputeSubTreeContext@@@std@@YAPEAVCPreComputeSubTreeContext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@V20@PEAV1@@Z @ 0x18022C8BC (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@PEAVCPreC.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeSubTreeContext *> &,__int64>(
         a4,
         0x2E8BA2E8BA2E8BA3LL * ((a3 - a2) >> 5));
  a4[2] = 0x2E8BA2E8BA2E8BA3LL
        * ((std::_Uninitialized_move_unchecked<std::move_iterator<CPreComputeSubTreeContext *>,CPreComputeSubTreeContext *>(
              a2,
              a3,
              v8)
          - *a4) >> 5);
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
