/*
 * XREFs of ACPIPepCleanupEpmNotificationSupport @ 0x1400B4010
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400B434C (ACPIPepInitializeEpmNotificationSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIPepCleanupEpmNotificationSupport(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 272) )
  {
    PoUnregisterFromEffectivePowerModeNotifications();
    result = 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 272) = 0LL;
    *(_DWORD *)(a1 + 264) = -1;
    *(_DWORD *)(a1 + 268) = -1;
    *(_BYTE *)(a1 + 257) = 0;
    *(_DWORD *)(a1 + 260) = 0;
    *(_BYTE *)(a1 + 280) = 0;
  }
  return result;
}
