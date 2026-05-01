/*
 * XREFs of ?AllowClose@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804DD9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18021B780 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::AllowClose(KioskPositioner *this, struct IApplicationView *a2, unsigned __int8 *a3)
{
  KioskPositioner *v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (KioskPositioner *)((char *)this - 128);
  try
  {
    *a3 = KioskPositioner::ShouldHandleView(v3, a2) ^ 1;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31B,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v4);
  }
  return result;
}
