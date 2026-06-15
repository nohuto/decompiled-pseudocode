/*
 * XREFs of ??_GCBluetoothAudioEndpointResourceManagerProvider@@UEAAPEAXI@Z @ 0x1800F7700
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ @ 0x1800F7370 (--1CBluetoothAudioEndpointResourceManagerProvider@@UEAA@XZ.c)
 */

CBluetoothAudioEndpointResourceManagerProvider *__fastcall CBluetoothAudioEndpointResourceManagerProvider::`scalar deleting destructor'(
        CBluetoothAudioEndpointResourceManagerProvider *this,
        char a2)
{
  CBluetoothAudioEndpointResourceManagerProvider::~CBluetoothAudioEndpointResourceManagerProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
