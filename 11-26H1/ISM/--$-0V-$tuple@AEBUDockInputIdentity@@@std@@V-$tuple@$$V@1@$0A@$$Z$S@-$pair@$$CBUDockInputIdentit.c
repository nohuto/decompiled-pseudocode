/*
 * XREFs of ??$?0V?$tuple@AEBUDockInputIdentity@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@AEAA@AEAV?$tuple@AEBUDockInputIdentity@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x180182668
 * Callers:
 *     ??$?0AEBUDockInputIdentity@@$$Z$$V@?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBUDockInputIdentity@@@1@V?$tuple@$$V@1@@Z @ 0x180182644 (--$-0AEBUDockInputIdentity@@$$Z$$V@-$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@QEAA@Upi.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

__int64 __fastcall ____0V__tuple_AEBUDockInputIdentity___std__V__tuple___V_1__0A___Z_S___pair___CBUDockInputIdentity__UDockInputInfo___std__AEAA_AEAV__tuple_AEBUDockInputIdentity___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
        __int64 a1,
        _OWORD **a2)
{
  _OWORD *v2; // rax

  v2 = *a2;
  *(_OWORD *)a1 = **a2;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v2 + 2);
  memset_0((void *)(a1 + 24), 0, 0x58uLL);
  return a1;
}
