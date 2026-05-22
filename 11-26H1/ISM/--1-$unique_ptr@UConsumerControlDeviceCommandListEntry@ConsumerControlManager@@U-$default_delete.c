/*
 * XREFs of ??1?$unique_ptr@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlDeviceCommandListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E4FD4
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E53DC (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800E5698 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 * Callees:
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E5128 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlDeviceCommandListEntry>(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry **a1,
        unsigned int a2)
{
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
