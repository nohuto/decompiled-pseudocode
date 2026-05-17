/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18010DE30
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180032E30 (RtlGetNtSystemRoot.c)
 *     RtlpGetVolumeHandle @ 0x18010DEAC (RtlpGetVolumeHandle.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18010E084 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
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
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
