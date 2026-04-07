/*
 * XREFs of ?StopAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800DB6AC
 * Callers:
 *     ?StopAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800DB680 (-StopAnimation@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLe.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::StopAnimation(
        winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *this)
{
  CTopLevelWindow3D *v1; // rcx
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CTopLevelWindow3D *)*((_QWORD *)this + 4);
  if ( *((_QWORD *)v1 + 36) )
  {
    v2 = CTopLevelWindow3D::StopAnimation(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        139LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\transitions.toplevelwindow3dwrapper.cpp",
        (const char *)(unsigned int)v2,
        v3);
  }
}
