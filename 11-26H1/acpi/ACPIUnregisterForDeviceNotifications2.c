/*
 * XREFs of ACPIUnregisterForDeviceNotifications2 @ 0x1400525C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIUnregisterForDeviceNotifications @ 0x1400525E0 (ACPIUnregisterForDeviceNotifications.c)
 */

__int64 __fastcall ACPIUnregisterForDeviceNotifications2(__int64 a1)
{
  return ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768), 0LL);
}
