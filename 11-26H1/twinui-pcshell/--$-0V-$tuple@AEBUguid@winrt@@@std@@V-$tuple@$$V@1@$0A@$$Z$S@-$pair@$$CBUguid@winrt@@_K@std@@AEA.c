/*
 * XREFs of ??$?0V?$tuple@AEBUguid@winrt@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBUguid@winrt@@_K@std@@AEAA@AEAV?$tuple@AEBUguid@winrt@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x18057C584
 * Callers:
 *     ??$?0AEBUguid@winrt@@$$Z$$V@?$pair@$$CBUguid@winrt@@_K@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBUguid@winrt@@@1@V?$tuple@$$V@1@@Z @ 0x18057C2F8 (--$-0AEBUguid@winrt@@$$Z$$V@-$pair@$$CBUguid@winrt@@_K@std@@QEAA@Upiecewise_construct_t@1@V-$tup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ____0V__tuple_AEBUguid_winrt___std__V__tuple___V_1__0A___Z_S___pair___CBUguid_winrt___K_std__AEAA_AEAV__tuple_AEBUguid_winrt___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        __int128 **a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = **a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
