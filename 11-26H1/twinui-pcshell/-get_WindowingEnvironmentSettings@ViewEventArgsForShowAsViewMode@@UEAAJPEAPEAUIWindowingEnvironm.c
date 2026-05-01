/*
 * XREFs of ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsViewMode@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180420C30
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180218F14 (--$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_WindowingEnvironmentSettings(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2)
{
  __int64 *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 80);
  try
  {
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
      v2,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x172,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           v3);
  }
  return result;
}
