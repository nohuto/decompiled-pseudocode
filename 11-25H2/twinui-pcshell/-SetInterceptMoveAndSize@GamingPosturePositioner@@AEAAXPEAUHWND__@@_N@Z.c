/*
 * XREFs of ?SetInterceptMoveAndSize@GamingPosturePositioner@@AEAAXPEAUHWND__@@_N@Z @ 0x1804E4D08
 * Callers:
 *     ?MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804E3B24 (-MakeViewPrimary@GamingPosturePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804E49D8 (-ReleasePrimaryView@GamingPosturePositioner@@AEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GamingPosturePositioner::SetInterceptMoveAndSize(GamingPosturePositioner *this, HWND a2)
{
  __int64 v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 22);
  if ( v2 && a2 )
  {
    try
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x2D4,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v3);
    }
  }
}
