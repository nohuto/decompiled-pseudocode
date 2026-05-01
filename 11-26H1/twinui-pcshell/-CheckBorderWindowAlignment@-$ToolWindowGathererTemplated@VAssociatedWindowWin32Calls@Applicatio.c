/*
 * XREFs of ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18030AB14
 * Callers:
 *     ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180089044 (-CheckBorderWindowAttributes@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 *     ??$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x1801175F0 (--$LambdaEnumWindowsProc@V_lambda_df7356024bf744f3615be68a3ea90a6d_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x18030B02C (-GetExternalWindowAlignmentWithRect@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Ap.c)
 *     ?GetInternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x18030B2D0 (-GetInternalWindowAlignmentWithRect@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Ap.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
        RECT *a1,
        HWND a2,
        int a3,
        _DWORD *a4)
{
  int ExternalWindowAlignmentWithRect; // eax
  unsigned int v6; // ebx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8[0] = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
      v6 = -2147467259;
      goto LABEL_11;
    }
    ExternalWindowAlignmentWithRect = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetExternalWindowAlignmentWithRect(
                                        a1,
                                        a2);
  }
  else
  {
    ExternalWindowAlignmentWithRect = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetInternalWindowAlignmentWithRect(
                                        a1,
                                        a2,
                                        v8);
  }
  v6 = ExternalWindowAlignmentWithRect;
  if ( ExternalWindowAlignmentWithRect < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)v6);
    return v6;
  }
  if ( !v8[0] || (*a4 & v8[0]) != 0 )
    return 2147500036LL;
  *a4 |= v8[0];
  return 0LL;
}
