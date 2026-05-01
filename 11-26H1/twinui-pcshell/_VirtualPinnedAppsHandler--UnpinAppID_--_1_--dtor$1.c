/*
 * XREFs of _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$1 @ 0x1806F47A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((volatile signed __int32 **)(a2 + 160));
}
