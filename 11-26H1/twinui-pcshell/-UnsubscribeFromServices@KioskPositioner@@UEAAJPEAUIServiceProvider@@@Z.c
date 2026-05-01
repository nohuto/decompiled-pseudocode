/*
 * XREFs of ?UnsubscribeFromServices@KioskPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804F2210
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800250B4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall KioskPositioner::UnsubscribeFromServices(KioskPositioner *this, struct IServiceProvider *a2)
{
  __int64 result; // rax
  SmartCookie *v4; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  v4 = (KioskPositioner *)((char *)this + 208);
  try
  {
    SmartCookie::Unregister(v4);
    SmartCookie::Unregister((KioskPositioner *)((char *)this + 336));
    SmartCookie::Unregister((KioskPositioner *)((char *)this + 464));
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 22);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 21);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23C,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v5);
  }
  return result;
}
