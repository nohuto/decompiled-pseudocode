/*
 * XREFs of ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x180539890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x180539B78 (-RegisterForEvents@JointResize@@AEAAJXZ.c)
 */

__int64 __fastcall JointResize::OnSettingChanged(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 5 )
    return 0LL;
  v2 = JointResize::RegisterForEvents((JointResize *)(a1 - 104));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
