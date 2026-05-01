/*
 * XREFs of IsPeoplePane @ 0x1801EABE8
 * Callers:
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800AF4A0 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801DA4B0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180254A40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     wil::details::functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3__&_::Run @ 0x180511800 (wil--details--functor_wrapper_void__lambda_506887c07e1b822a9b74fbb4e38c4dc3__-_--Run.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall IsPeoplePane(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  v5 = 0;
  if ( (*(int (__fastcall **)(__int64 *, const WCHAR *, int *))(v1 + 152))(
         a1,
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         &v5) >= 0
    && v5
    || (*(int (__fastcall **)(__int64 *, const WCHAR *, int *))(*a1 + 152))(
         a1,
         L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
         &v5) >= 0
    && v5 )
  {
    return 1;
  }
  return v2;
}
