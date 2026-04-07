/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_::_Do_call @ 0x1800A15D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x180037A44 (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A0908 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void std::_Func_impl_no_alloc__lambda_fe545bda8eea4d2e77db634168ef197a__void_::_Do_call()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(
         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
         0);
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      673LL,
      (__int64)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v0);
}
