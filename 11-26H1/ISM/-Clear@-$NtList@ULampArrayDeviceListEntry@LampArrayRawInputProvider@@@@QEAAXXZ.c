/*
 * XREFs of ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800970C0
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E336C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E44C0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E37A4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::Clear(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry *a1,
        unsigned int a2)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v3; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v3 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)a1;
    if ( *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)a1 + 8LL) != a1
      || (result = *(_QWORD *)v3,
          *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v3 == a1 )
      break;
    if ( v3 )
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v3, a2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
