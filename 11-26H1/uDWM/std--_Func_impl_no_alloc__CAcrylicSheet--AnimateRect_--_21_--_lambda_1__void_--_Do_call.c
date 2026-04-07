/*
 * XREFs of std::_Func_impl_no_alloc__CAcrylicSheet::AnimateRect_::_21_::_lambda_1__void_::_Do_call @ 0x180095C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18005E5B8 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void std::_Func_impl_no_alloc__CAcrylicSheet::AnimateRect_::_21_::_lambda_1__void_::_Do_call()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x287,
      (int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v0);
}
