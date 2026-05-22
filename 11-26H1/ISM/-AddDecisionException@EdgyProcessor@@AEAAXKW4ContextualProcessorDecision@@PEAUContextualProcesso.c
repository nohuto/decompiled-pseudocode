/*
 * XREFs of ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180156B50
 * Callers:
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180157F1C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 *     ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180158908 (-OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProce.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18001E688 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compar.c)
 *     ?GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z @ 0x180157784 (-GetDecisionPriority@EdgyProcessor@@CAIW4ContextualProcessorDecision@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180159124 (-find@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 */

__int64 __fastcall EdgyProcessor::AddDecisionException(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 result; // rax
  unsigned int v8; // edx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v10 = a1;
  v4 = (_QWORD *)(a4 + 16);
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::find(
    a4 + 16,
    &v10,
    &v11);
  if ( v10 == *(_QWORD *)(a4 + 24)
    || (EdgyProcessor::GetDecisionPriority(*(unsigned int *)(v10 + 20)),
        result = EdgyProcessor::GetDecisionPriority(a3),
        (unsigned int)result < v8) )
  {
    result = std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Try_emplace<unsigned long const &,>(
               v4,
               (__int64)v9,
               (unsigned __int8 *)&v11);
    *(_DWORD *)(*(_QWORD *)result + 20LL) = a3;
  }
  return result;
}
