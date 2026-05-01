/*
 * XREFs of ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x1803086C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1800B1FE8 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[66]);
  return 0LL;
}
