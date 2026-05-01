/*
 * XREFs of ?IsViewFullScreen@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804E3A70
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DDAA8 (-ContainView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall GamingPosturePositioner::IsViewFullScreen(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rcx
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (RTL_SRWLOCK *)((char *)this + 584);
  try
  {
    *a3 = ApplicationViewCollection::ContainView(v3, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3A5,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v4);
  }
  return result;
}
