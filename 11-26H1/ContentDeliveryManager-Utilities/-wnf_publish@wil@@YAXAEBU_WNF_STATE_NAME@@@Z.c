/*
 * XREFs of ?wnf_publish@wil@@YAXAEBU_WNF_STATE_NAME@@@Z @ 0x180065D18
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180063840 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ?Commit@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXXZ @ 0x18008B570 (-Commit@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::wnf_publish(wil *this, const struct _WNF_STATE_NAME *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = RtlPublishWnfStateData(*(_QWORD *)this, 0LL, 0LL, 0LL) | 0x10000000;
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      858LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v2,
      0);
}
