/*
 * XREFs of ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x140054FF4
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x14001CE90 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x140053E80 (imp_WdfDeviceQueryPropertyEx.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x140054DDC (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfFdoInitQueryPropertyEx @ 0x140090FD0 (imp_WdfFdoInitQueryPropertyEx.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x140018E54 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxDevice::_QueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID ResultLength,
        unsigned int *PropertyType,
        unsigned int *DriverGlobals_0)
{
  unsigned int *v9; // r14
  unsigned int *v10; // r15
  __int64 result; // rax
  _DEVICE_OBJECT *PhysicalDevice; // rcx
  unsigned int DevicePropertyData; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v19; // rbx
  unsigned int propType[4]; // [rsp+40h] [rbp-28h] BYREF

  v9 = PropertyType;
  v10 = DriverGlobals_0;
  propType[0] = 0;
  BufferLength = 0;
  *PropertyType = 0;
  *v10 = 0;
  result = FxDevice::_ValidateOpenKeyParams(DriverGlobals, DeviceInit, Device);
  if ( (int)result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
LABEL_4:
    DevicePropertyData = IoGetDevicePropertyData(
                           PhysicalDevice,
                           *((const DEVPROPKEY **)PropertyData + 1),
                           *((_DWORD *)PropertyData + 4),
                           0,
                           PropertyBuffer,
                           ResultLength,
                           &BufferLength,
                           propType);
    if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
    {
      *v9 = BufferLength;
      *v10 = propType[0];
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x19u, WPP_FxDeviceKm_cpp_Traceguids, DevicePropertyData);
    }
    return DevicePropertyData;
  }
  PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  if ( PhysicalDevice )
    goto LABEL_4;
  m_ObjectSize = Device->m_ObjectSize;
  v19 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v19 = 0LL;
  WPP_IFR_SF_qd(DriverGlobals, 2u, 0x12u, 0x18u, WPP_FxDeviceKm_cpp_Traceguids, v19, -1073741436);
  return 3221225860LL;
}
