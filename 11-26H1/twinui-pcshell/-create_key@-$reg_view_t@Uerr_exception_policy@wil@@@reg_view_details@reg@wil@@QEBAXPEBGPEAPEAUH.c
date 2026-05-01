/*
 * XREFs of ?create_key@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBAXPEBGPEAPEAUHKEY__@@W4key_access@34@@Z @ 0x1805DB0B0
 * Callers:
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CFA34 (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z @ 0x1803BD0E4 (-get_access_flags@reg_view_details@reg@wil@@YAKW4key_access@23@@Z.c)
 */

int __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::create_key(
        HKEY *a1,
        __int64 a2,
        HKEY *a3,
        const char *a4)
{
  REGSAM samDesired; // eax
  int result; // eax
  bool v8; // sf
  DWORD dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD dwDisposition; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  dwDisposition = 0;
  samDesired = wil::reg::reg_view_details::get_access_flags(0, a2, (__int64)a3, a4);
  result = RegCreateKeyExW(
             *a1,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\DSH\\Widgets",
             0,
             0LL,
             0,
             samDesired,
             0LL,
             a3,
             &dwDisposition);
  v8 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v8 = result < 0;
  }
  if ( v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C89,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)result,
      dwOptions);
  return result;
}
