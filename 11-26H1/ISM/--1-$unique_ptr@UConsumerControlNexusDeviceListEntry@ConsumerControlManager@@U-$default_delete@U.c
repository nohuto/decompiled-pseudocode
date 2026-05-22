/*
 * XREFs of ??1?$unique_ptr@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@U?$default_delete@UConsumerControlNexusDeviceListEntry@ConsumerControlManager@@@std@@@std@@QEAA@XZ @ 0x1800E334C
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E3D7C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800E53DC (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E37A4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>::~unique_ptr<ConsumerControlManager::ConsumerControlNexusDeviceListEntry>(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry **a1,
        unsigned int a2)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
