/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@PEAVCPreComputeSubTreeContext@@@std@@YAPEAVCPreComputeSubTreeContext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@V20@PEAV1@@Z @ 0x18022C8BC
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x18022C9B0 (--$uninitialized_move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_ite.c)
 * Callees:
 *     ??0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z @ 0x18022CA4C (--0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CPreComputeSubTreeContext *>,CPreComputeSubTreeContext *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdx

  while ( a1 != a2 )
  {
    CPreComputeSubTreeContext::CPreComputeSubTreeContext(a3, a1);
    a3 += 352LL;
    a1 = v6 + 352;
  }
  return a3;
}
