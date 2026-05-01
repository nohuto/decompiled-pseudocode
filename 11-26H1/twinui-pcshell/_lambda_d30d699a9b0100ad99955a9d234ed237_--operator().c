/*
 * XREFs of _lambda_d30d699a9b0100ad99955a9d234ed237_::operator() @ 0x180584308
 * Callers:
 *     wistd::__function::__func__lambda_d30d699a9b0100ad99955a9d234ed237__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::operator() @ 0x180584410 (wistd--__function--__func__lambda_d30d699a9b0100ad99955a9d234ed237__void___cdecl(enum_wil--Folde.c)
 * Callees:
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180232938 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 */

void __fastcall lambda_d30d699a9b0100ad99955a9d234ed237_::operator()(StartupNotification **a1)
{
  StartupNotification *v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  try
  {
    StartupNotification::CheckForChange(v1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x93,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v2);
  }
}
