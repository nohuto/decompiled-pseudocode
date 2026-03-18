/*
 * XREFs of ??0CPreComputeSubTreeContext@@QEAA@$$QEAV0@@Z @ 0x18022CA4C
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@PEAVCPreComputeSubTreeContext@@@std@@YAPEAVCPreComputeSubTreeContext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@V20@PEAV1@@Z @ 0x18022C8BC (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@PEAVCPreC.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18017561C (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z @ 0x18022CD88 (--4CPreComputeSubTreeContext@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CPreComputeSubTreeContext::CPreComputeSubTreeContext(CBspPreComputeHelper *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  CBspPreComputeHelper::CBspPreComputeHelper(a1);
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_WORD *)(v1 + 344) = 0;
  CPreComputeSubTreeContext::operator=(v1, v2);
  return v3;
}
