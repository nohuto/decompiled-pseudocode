/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF3C
 * Callers:
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF10 (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnCADScreenEnabled(CloudPCHelpers *this)
{
  unsigned int ValueW; // eax
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+40h] [rbp-18h] BYREF
  DWORD v6; // [rsp+44h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  v6 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
             L"EnablePhysicalDeviceAccessOnCtrlAltDel",
             0x10u,
             0LL,
             &v5,
             &v6);
  if ( ValueW )
  {
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)0x56,
      (unsigned int)"OnecoreUAP\\Internal\\Shell\\Inc\\private\\cloudpccommon.h",
      (const char *)ValueW,
      v4);
    LOBYTE(v2) = 0;
  }
  else
  {
    return v5 == 1;
  }
  return v2;
}
