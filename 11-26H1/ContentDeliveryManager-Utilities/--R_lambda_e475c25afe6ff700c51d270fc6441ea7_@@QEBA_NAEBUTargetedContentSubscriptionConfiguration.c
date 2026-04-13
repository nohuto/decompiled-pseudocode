/*
 * XREFs of ??R_lambda_e475c25afe6ff700c51d270fc6441ea7_@@QEBA_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@@Z @ 0x18004D930
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_e475c25afe6ff700c51d270fc6441ea7_@@$0A@@std@@V?$allocator@V?$_Func_class@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@@2@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@2@U72@U72@U72@U72@U72@@std@@UEAA_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@@Z @ 0x18005A770 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_e475c25afe6ff700c51d270fc6441ea7_@@$0A@@std@@V-.c)
 * Callees:
 *     <none>
 */

char __fastcall _lambda_e475c25afe6ff700c51d270fc6441ea7_::operator()(__int64 a1, __int64 a2)
{
  char v4; // di
  __int64 v5; // rax

  v4 = 1;
  if ( CompareStringOrdinal(*(LPCWCH *)a2, -1, **(LPCWCH **)a1, -1, 1) == 2
    || CompareStringOrdinal(*(LPCWCH *)(a2 + 8), -1, **(LPCWCH **)a1, -1, 1) == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v4 = 0;
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
  }
  return v4;
}
