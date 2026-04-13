/*
 * XREFs of ?GetDiagTrackFolder@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAAJPEA_W_K@Z @ 0x18008B66C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18008B2E0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18008BA70 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800B4C5C (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 */

__int64 __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetDiagTrackFolder(
        CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler *this,
        wchar_t *a2,
        unsigned __int64 a3)
{
  int SoftLandingFolderForUser; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, a2, a3);
  if ( SoftLandingFolderForUser < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      112LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser,
      v5);
  return 0LL;
}
