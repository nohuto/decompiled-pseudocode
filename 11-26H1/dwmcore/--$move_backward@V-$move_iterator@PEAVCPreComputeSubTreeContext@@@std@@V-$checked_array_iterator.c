/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C904
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@Z @ 0x18022941C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@.c)
 *     ??4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CD88 (--4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeSubTreeContext *> &,__int64>(
         a4,
         0xD1745D1745D1745DuLL * ((a3 - a2) >> 5));
  while ( a2 != v7 )
  {
    v7 -= 352LL;
    CPreComputeSubTreeContext::operator=(v8 - 352, v7);
  }
  result = a1;
  a4[2] = 0x2E8BA2E8BA2E8BA3LL * ((v8 - *a4) >> 5);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
