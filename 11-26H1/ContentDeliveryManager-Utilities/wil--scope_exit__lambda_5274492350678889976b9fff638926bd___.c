/*
 * XREFs of wil::scope_exit__lambda_5274492350678889976b9fff638926bd___ @ 0x18007B934
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18007E9B4 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_5274492350678889976b9fff638926bd___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax
  __int64 v4; // xmm1_8

  v2 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 24) = 1;
  v4 = *((_QWORD *)a2 + 2);
  *(_OWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = v4;
  return result;
}
