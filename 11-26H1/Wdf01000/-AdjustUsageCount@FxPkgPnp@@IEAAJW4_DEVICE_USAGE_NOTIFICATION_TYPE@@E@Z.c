/*
 * XREFs of ?AdjustUsageCount@FxPkgPnp@@IEAAJW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x140078518
 * Callers:
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x14007830C (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1400A6E28 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::AdjustUsageCount(
        FxPkgPnp *this,
        _DEVICE_USAGE_NOTIFICATION_TYPE Usage,
        unsigned __int8 Add)
{
  __int64 v3; // rdx

  v3 = (unsigned int)(Usage - 1);
  if ( Add )
    return (unsigned int)_InterlockedIncrement(&this->m_SpecialFileCount[v3]);
  else
    return (unsigned int)_InterlockedDecrement(&this->m_SpecialFileCount[v3]);
}
