/*
 * XREFs of ??$?0V?$tuple@AEBK@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@AEAA@AEAV?$tuple@AEBK@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802BDD6C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18018B6D4 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 *     ??$?0AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$Z$$V@?$pair@$$CBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@_K@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@@1@V?$tuple@$$V@1@@Z @ 0x1802BE048 (--$-0AEBW4BackgroundIdentifier@Themes@UI@Internal@Windows@winrt@@$$Z$$V@-$pair@$$CBW4BackgroundI.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1804EA514 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple_AEBK_std__V__tuple___V_1__0A___Z_S___pair___CBKV__ComPtr_UIApplicationFrame___WRL_Microsoft___std__AEAA_AEAV__tuple_AEBK_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        _DWORD **a2)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)a1 = **a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
