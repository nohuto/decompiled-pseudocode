/*
 * XREFs of ??$?0V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@AEAA@AEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18003E718
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002ADC4 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple___QEAV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std__V__tuple___V_1__0A___Z_S___pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std__UCRenderEndpointDuckingManagerContext___std__AEAA_AEAV__tuple___QEAV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v2 + 16);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 7LL;
  *(_WORD *)v2 = 0;
  result = a1;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
