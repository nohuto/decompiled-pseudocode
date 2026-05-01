/*
 * XREFs of _lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator() @ 0x18017E7C4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___::Run @ 0x18017E770 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_cc5ed20aaab4032583b283f4fa22eb03___--.c)
 * Callees:
 *     ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18017EC68 (-PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall lambda_cc5ed20aaab4032583b283f4fa22eb03_::operator()(__int64 *a1)
{
  __int64 v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  try
  {
    UwpWindowWrapperBase::PushBoundsToWindow(v1, 1LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x142,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v2);
  }
  return result;
}
