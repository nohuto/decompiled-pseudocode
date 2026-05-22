/*
 * XREFs of ??0?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800536A4
 * Callers:
 *     ??$?0V?$tuple@AEBI@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@AEAA@AEAV?$tuple@AEBI@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180099164 (--$-0V-$tuple@AEBI@std@@V-$tuple@$$V@1@$0A@$$Z$S@-$pair@$$CBIV-$unordered_set@_KU-$hash@_K@std@@.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F785C (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Prox.c)
 * Callees:
 *     ??0?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@_K@1@@Z @ 0x1800536D4 (--0-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 */

__int64 __fastcall std::unordered_set<unsigned __int64>::unordered_set<unsigned __int64>(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>(
    a1,
    &v3);
  return a1;
}
