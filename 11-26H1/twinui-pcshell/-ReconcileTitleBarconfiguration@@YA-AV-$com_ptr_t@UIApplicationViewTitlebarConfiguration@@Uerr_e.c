/*
 * XREFs of ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x1801A1E08
 * Callers:
 *     ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801A1B60 (-SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfig.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801A1F84 (-CloneTitleBarConfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_excep.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ReconcileTitleBarconfiguration(_QWORD *a1, _BYTE *a2, __int64 a3, char a4)
{
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  CloneTitleBarConfiguration(a1, a3);
  if ( (a4 & 1) == 0 && *a2 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, bool))(*(_QWORD *)*a1 + 24LL))(*a1, a2[1] == 0);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x594,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v7,
        1);
    v13 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a1 + 112LL))(*a1, &v13);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x597,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v8,
        1);
    if ( a2[1] )
      v9 = v13 | 0x100;
    else
      v9 = v13 & 0xFFFFFEFF;
    v13 = v9;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 104LL))(*a1);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x599,
        (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v10,
        1);
  }
  return a1;
}
