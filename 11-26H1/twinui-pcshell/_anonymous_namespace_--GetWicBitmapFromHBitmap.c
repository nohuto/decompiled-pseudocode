/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromHBitmap @ 0x1805EFD6C
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1805EF9C0 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?WicBitmapCreatedFromHBitmap@PinManagerTelemetry@@SAXXZ @ 0x1805F0F00 (-WicBitmapCreatedFromHBitmap@PinManagerTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall anonymous_namespace_::GetWicBitmapFromHBitmap(_QWORD *a1, __int64 a2)
{
  HRESULT Instance; // eax
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-38h]
  int v10[2]; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)&v11);
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)Instance,
      v9);
  *(_QWORD *)v10 = 0LL;
  v5 = *v11;
  *(_QWORD *)v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v5 + 168))(v11, a2, 0LL, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v6,
      (int)v10);
  PinManagerTelemetry::WicBitmapCreatedFromHBitmap();
  v7 = *(_QWORD *)v10;
  *(_QWORD *)v10 = 0LL;
  *a1 = v7;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return a1;
}
