/*
 * XREFs of ?TryGetTopTwoApplicationViews@GamingPosturePositioner@@UEAAXPEAPEAUIApplicationView@@0@Z @ 0x180503950
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180218F14 (--$copy_to@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802C1CE0 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?GetLastViews@GamingApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804FD108 (-GetLastViews@GamingApplicationViewCollection@@QEAA-AV-$vector@V-$com_ptr_t@UIApplicationView@@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingPosturePositioner::TryGetTopTwoApplicationViews(
        GamingPosturePositioner *this,
        struct IApplicationView **a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v5; // rcx
  const char *v6; // r9
  RTL_SRWLOCK v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)this + 648) )
  {
    v5 = (RTL_SRWLOCK *)((char *)this + 712);
    try
    {
      GamingApplicationViewCollection::GetLastViews(v5, &v7, 2u);
      if ( v8 - (unsigned __int64)v7.Ptr == 8 )
      {
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
          (__int64 *)v7.Ptr,
          a2);
      }
      else if ( v8 - (unsigned __int64)v7.Ptr == 16 )
      {
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
          (__int64 *)v7.Ptr,
          a2);
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings>(
          (__int64 *)v7.Ptr + 1,
          a3);
      }
      std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x2C4,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
        v6);
    }
  }
}
