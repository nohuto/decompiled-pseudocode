/*
 * XREFs of wil::details::lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___::_lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___ @ 0x180409D60
 * Callers:
 *     __lambda_fc6cce9727cf9f8deae1663544b26742_::operator()_::_1_::dtor$1 @ 0x1806E9B2E (__lambda_fc6cce9727cf9f8deae1663544b26742_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x18040D1E0 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___::_lambda_call__lambda_6b2d16a6f0ff53413980038f93fd9c4d___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
