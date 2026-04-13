/*
 * XREFs of ?Commit@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXXZ @ 0x18008B570
 * Callers:
 *     <none>
 * Callees:
 *     ?wnf_publish@wil@@YAXAEBU_WNF_STATE_NAME@@@Z @ 0x180065D18 (-wnf_publish@wil@@YAXAEBU_WNF_STATE_NAME@@@Z.c)
 */

void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::Commit(
        CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler *this,
        const struct _WNF_STATE_NAME *a2)
{
  if ( *((_BYTE *)this + 24) )
    wil::wnf_publish((wil *)&WNF_SHEL_SOFTLANDING_RULES_UPDATED, a2);
}
