/*
 * XREFs of wil::details::ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___::_ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___ @ 0x1802BE9DC
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$4 @ 0x1806D158E (_XamlAltTabViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180077C80 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x18009FDB8 (-Stop@ShowAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___::_ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    XamlSwitcherTelemetry::ShowAltTab::Stop(*(XamlSwitcherTelemetry::ShowAltTab **)a1, 0);
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)(a1 + 8));
  }
  return result;
}
