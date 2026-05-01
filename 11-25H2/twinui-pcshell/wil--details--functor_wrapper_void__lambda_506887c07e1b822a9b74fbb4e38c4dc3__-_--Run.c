/*
 * XREFs of wil::details::functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3__&_::Run @ 0x1804F01F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsPeoplePane @ 0x180117380 (IsPeoplePane.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804F13B4 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3____::Run(__int64 a1)
{
  __int64 v1; // rbx
  int LaunchPositionForPeoplePane; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( IsPeoplePane(**(__int64 ***)v1) )
  {
    LaunchPositionForPeoplePane = CDesktopPositioner::_GetLaunchPositionForPeoplePane(
                                    *(CDesktopPositioner **)(v1 + 8),
                                    **(struct IApplicationView ***)v1,
                                    **(struct IApplicationViewPosition ****)(v1 + 16));
    if ( LaunchPositionForPeoplePane < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6B4,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)LaunchPositionForPeoplePane);
  }
  return 0LL;
}
