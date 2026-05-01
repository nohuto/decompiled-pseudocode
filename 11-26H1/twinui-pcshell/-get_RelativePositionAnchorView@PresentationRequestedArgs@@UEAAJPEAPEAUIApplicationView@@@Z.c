/*
 * XREFs of ?get_RelativePositionAnchorView@PresentationRequestedArgs@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1802E9410
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180218F14 (--$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_RelativePositionAnchorView(
        PresentationRequestedArgs *this,
        struct IApplicationView **a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 64);
  if ( !*v2 )
    return 2147943568LL;
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
                           (void *)0x2D6,
                           (int)"pcshell\\twinui\\appmanager\\lib\\amcommon.cpp",
                           v4);
  }
  return result;
}
