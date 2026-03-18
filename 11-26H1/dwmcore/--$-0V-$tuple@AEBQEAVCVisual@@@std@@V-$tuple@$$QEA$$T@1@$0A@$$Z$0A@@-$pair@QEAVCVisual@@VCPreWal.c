/*
 * XREFs of ??$?0V?$tuple@AEBQEAVCVisual@@@std@@V?$tuple@$$QEA$$T@1@$0A@$$Z$0A@@?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@AEAA@AEAV?$tuple@AEBQEAVCVisual@@@1@AEAV?$tuple@$$QEA$$T@1@U?$integer_sequence@_K$0A@@1@2@Z @ 0x180231FE0
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18014C3A0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple_AEBQEAVCVisual___std__V__tuple___QEA__T_1__0A___Z_0A____pair_QEAVCVisual__VCPreWalkVisual___std__AEAA_AEAV__tuple_AEBQEAVCVisual___1_AEAV__tuple___QEA__T_1_U__integer_sequence__K_0A__1_2_Z(
        __int64 a1,
        __int64 **a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = **a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = 0;
  result = a1;
  *(_QWORD *)a1 = v2;
  return result;
}
