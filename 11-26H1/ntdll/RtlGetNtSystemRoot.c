/*
 * XREFs of RtlGetNtSystemRoot @ 0x18001DF90
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18001D950 (GetOverlayFilePathUsingChecksum.c)
 *     LdrpGetModuleName @ 0x18001EF80 (LdrpGetModuleName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800A20D0 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180106768 (AVrfpLoadAndInitializeProvider.c)
 *     RtlpDiskSpeedInitialize @ 0x18010D980 (RtlpDiskSpeedInitialize.c)
 *     RtlQueryResourcePolicy @ 0x18010F0A0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

PWSTR RtlGetNtSystemRoot(void)
{
  _DWORD *SharedData; // rax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
