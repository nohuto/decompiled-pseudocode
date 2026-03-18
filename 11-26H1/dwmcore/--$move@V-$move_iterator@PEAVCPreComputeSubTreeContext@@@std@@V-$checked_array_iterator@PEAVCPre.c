/*
 * XREFs of ??$move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x1802296C0
 * Callers:
 *     ?clear_region@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180175724 (-clear_region@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeCont.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@Z @ 0x18022941C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@_J@std@.c)
 *     ??4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CD88 (--4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall std::move<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CPreComputeSubTreeContext *> &,__int64>(
         a4,
         0x2E8BA2E8BA2E8BA3LL * ((a3 - a2) >> 5));
  while ( v4 != a3 )
  {
    CPreComputeSubTreeContext::operator=(v8, v4);
    v8 = v9 + 352;
    v4 += 352LL;
  }
  result = a1;
  a4[2] = 0x2E8BA2E8BA2E8BA3LL * ((v8 - *a4) >> 5);
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
