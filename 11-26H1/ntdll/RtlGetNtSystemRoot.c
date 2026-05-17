/*
 * XREFs of RtlGetNtSystemRoot @ 0x180032E30
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x1800327F0 (GetOverlayFilePathUsingChecksum.c)
 *     LdrpGetModuleName @ 0x180033E20 (LdrpGetModuleName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A2FA0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106D68 (AVrfpLoadAndInitializeProvider.c)
 *     RtlpDiskSpeedInitialize @ 0x18010DE30 (RtlpDiskSpeedInitialize.c)
 *     RtlQueryResourcePolicy @ 0x18010F510 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtSystemRoot()
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return (__int64)NtCurrentPeb()->SharedData + 30;
  else
    return 2147352624LL;
}
