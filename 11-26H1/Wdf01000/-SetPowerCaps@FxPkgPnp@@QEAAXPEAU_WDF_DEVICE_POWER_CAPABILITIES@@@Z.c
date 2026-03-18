/*
 * XREFs of ?SetPowerCaps@FxPkgPnp@@QEAAXPEAU_WDF_DEVICE_POWER_CAPABILITIES@@@Z @ 0x140071DB8
 * Callers:
 *     imp_WdfDeviceSetPowerCapabilities @ 0x14007AAE0 (imp_WdfDeviceSetPowerCapabilities.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SetPowerCaps(FxPkgPnp *this, _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  _DEVICE_POWER_STATE *DeviceState; // rbx
  unsigned int v4; // r11d
  unsigned int v5; // ecx
  __int16 v6; // r9
  int v7; // eax
  int v8; // r8d
  _WDF_TRI_STATE DeviceD1; // ecx
  __int16 v10; // r8
  _WDF_TRI_STATE DeviceD2; // ecx
  _WDF_TRI_STATE WakeFromD0; // ecx
  __int16 v13; // r9
  __int16 v14; // ax
  _WDF_TRI_STATE WakeFromD1; // ecx
  __int16 v16; // r9
  __int16 v17; // ax
  _WDF_TRI_STATE WakeFromD2; // ecx
  __int16 v19; // r9
  __int16 v20; // ax
  _WDF_TRI_STATE WakeFromD3; // ecx
  __int16 v22; // r9
  __int16 v23; // ax

  DeviceState = PowerCapabilities->DeviceState;
  v4 = 0;
  v5 = 0;
  v6 = 4;
  do
  {
    v7 = (*DeviceState & 0xF) << v5;
    v8 = ~(15 << v5);
    v5 += 4;
    v4 = v7 | v8 & v4;
    ++DeviceState;
  }
  while ( v5 < 0x1C );
  this->m_PowerCaps.States = v4;
  DeviceD1 = PowerCapabilities->DeviceD1;
  if ( DeviceD1 )
  {
    if ( DeviceD1 == WdfTrue )
      v10 = 1;
    else
      v10 = 2;
  }
  else
  {
    v10 = 0;
  }
  DeviceD2 = PowerCapabilities->DeviceD2;
  if ( DeviceD2 )
  {
    if ( DeviceD2 != WdfTrue )
      v6 = 8;
  }
  else
  {
    v6 = 0;
  }
  WakeFromD0 = PowerCapabilities->WakeFromD0;
  v13 = v10 | v6;
  if ( WakeFromD0 )
  {
    if ( WakeFromD0 == WdfTrue )
      v14 = 16;
    else
      v14 = 32;
  }
  else
  {
    v14 = 0;
  }
  WakeFromD1 = PowerCapabilities->WakeFromD1;
  v16 = v14 | v13;
  if ( WakeFromD1 )
  {
    if ( WakeFromD1 == WdfTrue )
      v17 = 64;
    else
      v17 = 128;
  }
  else
  {
    v17 = 0;
  }
  WakeFromD2 = PowerCapabilities->WakeFromD2;
  v19 = v17 | v16;
  if ( WakeFromD2 )
  {
    if ( WakeFromD2 == WdfTrue )
      v20 = 256;
    else
      v20 = 512;
  }
  else
  {
    v20 = 0;
  }
  WakeFromD3 = PowerCapabilities->WakeFromD3;
  v22 = v20 | v19;
  if ( WakeFromD3 )
  {
    if ( WakeFromD3 == WdfTrue )
      v23 = 1024;
    else
      v23 = 2048;
  }
  else
  {
    v23 = 0;
  }
  this->m_PowerCaps.Caps = v23 | v22;
  if ( PowerCapabilities->DeviceWake != PowerDeviceMaximum )
    this->m_PowerCaps.DeviceWake = PowerCapabilities->DeviceWake;
  if ( PowerCapabilities->SystemWake != PowerSystemMaximum )
    this->m_PowerCaps.SystemWake = PowerCapabilities->SystemWake;
  this->m_PowerCaps.D1Latency = PowerCapabilities->D1Latency;
  this->m_PowerCaps.D2Latency = PowerCapabilities->D2Latency;
  this->m_PowerCaps.D3Latency = PowerCapabilities->D3Latency;
  if ( PowerCapabilities->IdealDxStateForSx != PowerDeviceMaximum )
    this->m_PowerPolicyMachine.m_Owner->m_IdealDxStateForSx = PowerCapabilities->IdealDxStateForSx;
}
