/*
 * XREFs of wil::details::ScopeExitFn__lambda_4288cfbe32da101b20fbed5755e1f157___::_ScopeExitFn__lambda_4288cfbe32da101b20fbed5755e1f157___ @ 0x180679B78
 * Callers:
 *     _XamlGamingTaskViewHost::DisplayGamingTaskView_::_1_::dtor$0 @ 0x1806DDC5C (_XamlGamingTaskViewHost--DisplayGamingTaskView_--_1_--dtor$0.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18049DBE0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18067C170 (-Stop@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4288cfbe32da101b20fbed5755e1f157___::_ScopeExitFn__lambda_4288cfbe32da101b20fbed5755e1f157___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    XamlSwitcherTelemetry::ShowGamingTaskView::Stop(
      (XamlSwitcherTelemetry::ShowGamingTaskView *)(*(_QWORD *)a1 + 528LL),
      0);
    return CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
