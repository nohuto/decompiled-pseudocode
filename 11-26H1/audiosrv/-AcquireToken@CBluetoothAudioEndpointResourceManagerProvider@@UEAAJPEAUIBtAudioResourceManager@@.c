/*
 * XREFs of ?AcquireToken@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAUIBtAudioResourceManager@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800F77C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEAAJAEBQEAUIBtAudioResourceManager@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800F6600 (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpoi_ea_1800F6600.c)
 */

__int64 __fastcall CBluetoothAudioEndpointResourceManagerProvider::AcquireToken(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  return TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::AcquireToken<IBtAudioResourceManager *>(
           a1 + 4,
           &v5,
           a3,
           a4);
}
