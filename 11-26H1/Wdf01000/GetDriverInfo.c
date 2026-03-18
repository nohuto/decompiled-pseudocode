/*
 * XREFs of GetDriverInfo @ 0x14007CC20
 * Callers:
 *     LogDriverInfoStream @ 0x14007C864 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned int v4; // r9d
  unsigned __int8 v5; // r8
  unsigned int v6; // r9d
  FxPkgPnp *m_PkgPnp; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned __int16 m_DeviceTelemetryInfoFlags; // di
  int v10; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r10
  unsigned int v12; // edx
  unsigned __int8 Enabled; // al
  int v14; // ecx
  unsigned __int8 *p_WakeFromS0Capable; // rdx
  unsigned __int8 v16; // al
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // r10d
  unsigned int v21; // r10d
  FxPowerPolicyOwnerSettings *v22; // rax

  v4 = ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0 ? 8 : 0) | (DriverInfo->Dword & 0xFFFFFFFB ^ (4 * (Globals->FxVerifierOn & 1))) & 0xFFFFFFF7;
  DriverInfo->Dword = v4;
  v5 = 0;
  if ( Fdo )
  {
    m_PkgPnp = Fdo->m_PkgPnp;
    m_DeviceObject = Fdo->m_DeviceObject.m_DeviceObject;
    m_DeviceTelemetryInfoFlags = Fdo->m_DeviceTelemetryInfoFlags;
    if ( m_DeviceObject )
      v10 = (__int64)m_DeviceObject[1].CurrentIrp & 1;
    else
      v10 = 0;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v12 = (m_Owner != 0LL ? 0x80 : 0) | (32 * v10) & 0xFFFFFF3F | (v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(16 * LOBYTE(m_PkgPnp[1].m_DeviceBase))) & 0x10) & 0xFFFFFF1F;
    if ( m_Owner )
      Enabled = m_Owner->m_IdleSettings.Enabled;
    else
      Enabled = 0;
    v14 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(Enabled << 8)) & 0x100;
    p_WakeFromS0Capable = &m_Owner->m_IdleSettings.WakeFromS0Capable;
    if ( m_Owner )
      v16 = *p_WakeFromS0Capable;
    else
      v16 = 0;
    v17 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(v16 << 9)) & 0x200;
    if ( !m_Owner || !*p_WakeFromS0Capable || (v18 = 1, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v18 = 0;
    v19 = (v18 << 10) | v17 & 0xFFFFFBFF;
    if ( m_Owner )
      v20 = ((unsigned int)m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus >> 1) & 1;
    else
      v20 = 0;
    v21 = v19 & 0xFFFFF7FF | (v20 << 11);
    v22 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    DriverInfo->Dword = v21;
    if ( v22 )
      v5 = v22->m_WakeSettings.Enabled;
    v6 = ((m_DeviceTelemetryInfoFlags & 0x80 | m_DeviceTelemetryInfoFlags & 0x100) << 14) & 0xFF7FFFFF | (m_PkgPnp->m_InterruptObjectCount > 1 ? 0x20000 : 0) | (v21 & 0xFFFFEFFF ^ ((v5 & 1) << 12)) & 0xFF001FFF | ((m_DeviceTelemetryInfoFlags & 8 | m_DeviceTelemetryInfoFlags & 4 | m_DeviceTelemetryInfoFlags & 1 | m_DeviceTelemetryInfoFlags & 2 | (2 * (m_DeviceTelemetryInfoFlags & 0x200 | m_DeviceTelemetryInfoFlags & 0x70))) << 13);
  }
  else
  {
    v6 = Globals->Public.DriverFlags & 2 | Globals->Public.DriverFlags & 1 ^ v4 & 0xFFFFFFFC;
  }
  DriverInfo->Dword = v6;
}
