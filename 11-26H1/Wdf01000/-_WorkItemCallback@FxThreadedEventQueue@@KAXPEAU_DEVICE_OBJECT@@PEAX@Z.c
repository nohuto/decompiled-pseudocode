/*
 * XREFs of ?_WorkItemCallback@FxThreadedEventQueue@@KAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14005DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x14005DDD8 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkItemCallback(_DEVICE_OBJECT *DeviceObject, FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
