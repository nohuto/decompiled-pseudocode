/*
 * XREFs of ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4
 * Callers:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14016F650 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 *     CKeyboardSensor_Destroy @ 0x14016F680 (CKeyboardSensor_Destroy.c)
 *     ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x140171B20 (--_GCTouchpadAcceleration@@UEAAPEAXI@Z.c)
 *     ??_GCMasterInputThread@@UEAAPEAXI@Z @ 0x1402253C0 (--_GCMasterInputThread@@UEAAPEAXI@Z.c)
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1402253F0 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall CDeviceAcceleration::operator delete(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 )
    GreDeleteFastMutex(a1, a2, a3, a4);
}
