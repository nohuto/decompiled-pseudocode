/*
 * XREFs of ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x18069F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x18009FC98 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 */

__int64 __fastcall XamlAltTabViewHost::ViewLoaded(XamlAltTabViewHost *this)
{
  XamlAltTabViewHost *v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (XamlAltTabViewHost *)((char *)this - 120);
  try
  {
    XamlAltTabViewHost::DisplayAltTab(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E2,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewhost.cpp",
                           v2);
  }
  return result;
}
