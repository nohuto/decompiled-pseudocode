/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180098250
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot_0 @ 0x1800702F4 (RtlGetNtSystemRoot_0.c)
 *     NtClose_0 @ 0x180070318 (NtClose_0.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x180098188 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x1800982C8 (RtlpGetVolumeHandle.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot_0; // rax
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  Handle[0] = 0LL;
  NtSystemRoot_0 = RtlGetNtSystemRoot_0();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot_0, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose_0(Handle[0]);
  return VolumeHandle >= 0;
}
