/*
 * XREFs of ZwWorkerFactoryWorkerReady @ 0x140723410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWorkerFactoryWorkerReady()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
