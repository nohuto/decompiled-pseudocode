/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x1407935A0
 * Callers:
 *     RawUserFsCtrl @ 0x140919C34 (RawUserFsCtrl.c)
 *     RawCleanup @ 0x14091A0A4 (RawCleanup.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x140AE4160 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION v3; // [rsp+20h] [rbp-38h] BYREF

  memset(&v3.Event, 0, 28);
  *(_DWORD *)v3.CustomDataBuffer = 0;
  *(_DWORD *)&v3.Version = 2359297;
  v3.NameBufferOffset = -1;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &v3);
}
