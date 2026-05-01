/*
 * XREFs of _lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_ @ 0x1805E37D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1805EA248 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 */

__int64 __fastcall lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_(
        SharedDesktopBackgroundVisualHost *Parameter)
{
  SharedDesktopBackgroundVisualHost *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v3);
  winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v3);
  v3 = Parameter;
  LODWORD(Parameter) = SharedDesktopBackgroundVisualHost::XamlHostThreadProc(Parameter);
  winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v3);
  return (unsigned int)Parameter;
}
