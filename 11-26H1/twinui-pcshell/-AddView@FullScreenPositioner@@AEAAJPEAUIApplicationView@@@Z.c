/*
 * XREFs of ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031F924
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18031FDF8 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803206F0 (-HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$emplace_back@PEAUIApplicationView@@@?$vector@PEAUIApplicationView@@V?$allocator@PEAUIApplicationView@@@std@@@std@@QEAAAEAPEAUIApplicationView@@$$QEAPEAU2@@Z @ 0x18031F064 (--$emplace_back@PEAUIApplicationView@@@-$vector@PEAUIApplicationView@@V-$allocator@PEAUIApplicat.c)
 */

__int64 __fastcall FullScreenPositioner::AddView(FullScreenPositioner *this, struct IApplicationView *a2)
{
  _QWORD *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (_QWORD *)((char *)this + 232);
  try
  {
    std::vector<IApplicationView *>::emplace_back<IApplicationView *>(v2, (__int64 *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4EC,
                           (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           v3);
  }
  return result;
}
