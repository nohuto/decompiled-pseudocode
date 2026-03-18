/*
 * XREFs of ??C?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@QEBAPEAVCPreComputeSubTreeContext@@XZ @ 0x18022CE7C
 * Callers:
 *     ??$emplace_back@PEAVCVisualTree@@@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCVisualTree@@@Z @ 0x180175418 (--$emplace_back@PEAVCVisualTree@@@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CPreComputeSubTreeContext *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 352 * v1;
}
