/*
 * XREFs of ??_GToken@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAAPEAXI@Z @ 0x1800C1990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Token@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ @ 0x1800C1740 (--1Token@-$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@UEAA@XZ.c)
 */

void *__fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::Token::~Token((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
