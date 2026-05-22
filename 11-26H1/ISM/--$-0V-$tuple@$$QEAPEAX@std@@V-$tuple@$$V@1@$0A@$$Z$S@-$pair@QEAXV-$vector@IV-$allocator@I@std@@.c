/*
 * XREFs of ??$?0V?$tuple@$$QEAPEAX@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@AEAA@AEAV?$tuple@$$QEAPEAX@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1800F03B0
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18002B030 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002CA74 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ??$_Try_emplace@PEAX$$V@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAX@Z @ 0x180059878 (--$_Try_emplace@PEAX$$V@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uha.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ____0V__tuple___QEAPEAX_std__V__tuple___V_1__0A___Z_S___pair_QEAXV__vector_IV__allocator_I_std___std___std__AEAA_AEAV__tuple___QEAPEAX_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _QWORD *a1,
        __int64 **a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = **a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  result = a1;
  *a1 = v2;
  return result;
}
