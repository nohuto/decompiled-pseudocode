/*
 * XREFs of ??$?0V?$tuple@AEB_J@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@AEAA@AEAV?$tuple@AEB_J@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180128F80
 * Callers:
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x180129224 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ____0V__tuple_AEB_J_std__V__tuple___V_1__0A___Z_S___pair___CB_JV__ComPtr_UIUnknown___WRL_Microsoft___std__AEAA_AEAV__tuple_AEB_J_1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        _QWORD *a1,
        _QWORD **a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = **a2;
  a1[1] = 0LL;
  return result;
}
