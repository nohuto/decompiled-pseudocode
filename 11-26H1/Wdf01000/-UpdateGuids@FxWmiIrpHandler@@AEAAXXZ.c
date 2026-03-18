/*
 * XREFs of ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DC04
 * Callers:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x14003F684 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1400576AC (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A67C (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     ?_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14008E440 (-_UpdateGuids@FxWmiIrpHandler@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DFA8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 */

void __fastcall FxWmiIrpHandler::UpdateGuids(FxWmiIrpHandler *this)
{
  NTSTATUS _a2; // ecx

  _a2 = IoWMIRegistrationControl(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 4u);
  if ( _a2 < 0 )
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xDu,
      0xCu,
      WPP_FxWmiIrpHandler_cpp_Traceguids,
      this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a2);
  FxWmiIrpHandler::DecrementUpdateCount(this);
}
