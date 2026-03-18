/*
 * XREFs of ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14003A4B4
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x140079BE0 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x14001FF68 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x14003A720 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x14003BBC0 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?Invoke@FxDriverDeviceAdd@@QEAAJPEAUWDFDRIVER__@@PEAUWDFDEVICE_INIT@@@Z @ 0x14003BDE4 (-Invoke@FxDriverDeviceAdd@@QEAAJPEAUWDFDRIVER__@@PEAUWDFDEVICE_INIT@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

__int64 __fastcall FxDriver::AddDevice(FxDriver *this, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  WDFDRIVER__ *v5; // rdx
  bool v6; // zf
  int v7; // eax
  signed int v8; // ebx
  _FX_DRIVER_GLOBALS *v9; // rcx
  WDFDEVICE_INIT init; // [rsp+30h] [rbp-3D8h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxDriverKm_cpp_Traceguids, PhysicalDeviceObject);
  init.CreatedOnStack = 1;
  v5 = (WDFDRIVER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  init.InitType = FxDeviceInitTypeFdo;
  v6 = this->m_ObjectSize == 0;
  init.Fdo.PhysicalDevice = PhysicalDeviceObject;
  if ( v6 )
    v5 = 0LL;
  v7 = FxDriverDeviceAdd::Invoke(&this->m_DriverDeviceAdd, v5, &init);
  v8 = v7;
  if ( init.CreatedDevice )
  {
    if ( v7 < 0 )
      v8 = FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)init.CreatedDevice, v7, 1u);
    else
      *(_DWORD *)(*((_QWORD *)init.CreatedDevice + 18) + 48LL) &= ~0x80u;
    v9 = this->m_Globals;
    if ( v9->FxVerboseOn )
      WPP_IFR_SF_D(v9, 5u, 0xCu, 0xDu, WPP_FxDriverKm_cpp_Traceguids, v8);
  }
  else
  {
    WPP_IFR_SF_D(this->m_Globals, 3u, 0xCu, 0xBu, WPP_FxDriverKm_cpp_Traceguids, v7);
    if ( init.Fdo.Filter && v8 < 0 )
    {
      WPP_IFR_SF_D(this->m_Globals, 4u, 0xCu, 0xCu, WPP_FxDriverKm_cpp_Traceguids, v8);
      v8 = 0;
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return (unsigned int)v8;
}
