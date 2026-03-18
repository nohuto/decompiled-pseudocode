/*
 * XREFs of ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4
 * Callers:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14014B150 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     CKeyboardSensor_Destroy @ 0x14014B180 (CKeyboardSensor_Destroy.c)
 *     ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x140152410 (--_GCTouchpadAcceleration@@UEAAPEAXI@Z.c)
 *     ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1402233E0 (--_GCMasterInputThread@@UEAAPEAXI@Z.c)
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x140223410 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall CDeviceAcceleration::operator delete(char *a1)
{
  if ( a1 )
    GreDeleteFastMutex(a1);
}
