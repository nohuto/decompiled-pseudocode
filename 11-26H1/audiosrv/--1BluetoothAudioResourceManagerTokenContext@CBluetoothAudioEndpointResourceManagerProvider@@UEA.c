/*
 * XREFs of ??1BluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F7348
 * Callers:
 *     ??_GBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z @ 0x1800F76C0 (--_GBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@UE.c)
 *     ??_ECMonitorNotification@CMonitor@@UEAAPEAXI@Z @ 0x180120F60 (--_ECMonitorNotification@CMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext::~BluetoothAudioResourceManagerTokenContext(
        CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
