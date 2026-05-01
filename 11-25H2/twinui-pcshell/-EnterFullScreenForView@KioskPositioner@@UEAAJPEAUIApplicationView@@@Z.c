/*
 * XREFs of ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804DDE80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DD894 (-AddView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall KioskPositioner::EnterFullScreenForView(KioskPositioner *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 504);
  try
  {
    ApplicationViewCollection::AddView(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36C,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
