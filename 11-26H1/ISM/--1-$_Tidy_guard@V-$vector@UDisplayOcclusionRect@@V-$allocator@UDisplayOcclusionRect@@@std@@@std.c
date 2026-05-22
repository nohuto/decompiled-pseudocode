/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A61CC
 * Callers:
 *     ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x1801A5F30 (--$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@-$vector@UDisplayOcclusionRect@@V-$alloca.c)
 * Callees:
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x18010C4B0 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<DisplayOcclusionRect>>::~_Tidy_guard<std::vector<DisplayOcclusionRect>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<DisplayOcclusionRect>::_Tidy(v1);
}
