/*
 * XREFs of wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___ @ 0x180234DC0
 * Callers:
 *     _UndockedSearchAppExperienceManager::HideWithArgs_::_1_::dtor$5 @ 0x1806B8022 (_UndockedSearchAppExperienceManager--HideWithArgs_--_1_--dtor$5.c)
 *     _UndockedSearchAppExperienceManager::Hide_::_1_::dtor$4 @ 0x1806C010B (_UndockedSearchAppExperienceManager--Hide_--_1_--dtor$4.c)
 * Callees:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800149D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___::_ScopeExitFn__lambda_b287da9325cbe351da9d75104ebe6547___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    UndockedSearchAppExperienceManager::UnboostPriority(*(UndockedSearchAppExperienceManager **)a1);
  }
}
