/*
 * XREFs of ?ConvertShellTransitionToAnimationType@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@CA?AW4WindowAnimationType@CTopLevelWindow3D@@W4ShellTransitionType@345@@Z @ 0x180081E0C
 * Callers:
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransitionType@345@AEBURect@Foundation@Windows@5@@Z @ 0x180081CC4 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::ConvertShellTransitionToAnimationType(
        int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = 2LL;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 2 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xFC,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
              (const char *)0x8000FFFFLL,
              v6);
          return 18LL;
        }
        else
        {
          return 13LL;
        }
      }
      else
      {
        return 12LL;
      }
    }
    else
    {
      return 4LL;
    }
  }
  return result;
}
