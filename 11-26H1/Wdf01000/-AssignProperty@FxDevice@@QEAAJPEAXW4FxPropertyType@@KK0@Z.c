/*
 * XREFs of ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x14007D1A8
 * Callers:
 *     imp_WdfDeviceAssignProperty @ 0x140091BD0 (imp_WdfDeviceAssignProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID Data)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rcx
  LCID v8; // r8d
  DEVPROPTYPE v9; // r9d
  const DEVPROPKEY *v10; // r10
  ULONG v11; // r11d
  NTSTATUS v12; // edi
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  const void *v15; // rdx

  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( SafePhysicalDevice )
  {
    v12 = IoSetDevicePropertyData(SafePhysicalDevice, v10, v8, v11, v9, PropertyBuffer, Data);
    if ( v12 >= 0 )
      return (unsigned int)v12;
    v13 = 22;
    v14 = 12;
  }
  else
  {
    v12 = -1073741436;
    v13 = 21;
    v14 = 18;
  }
  v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v15 = 0LL;
  WPP_IFR_SF_qd(this->m_Globals, 2u, v14, v13, WPP_FxDeviceKm_cpp_Traceguids, v15, v12);
  return (unsigned int)v12;
}
