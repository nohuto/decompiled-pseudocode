/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x140A36420
 * Callers:
 *     IopInvalidateVolumesForDevice @ 0x140A34D8C (IopInvalidateVolumesForDevice.c)
 *     RawMountVolume @ 0x140A35E6C (RawMountVolume.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x140A36470 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  __int128 v3; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v4; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  v3 = 0LL;
  LODWORD(v3) = 196624;
  IoCreateStreamFileObjectEx2(&v3, FileObject, DeviceObject, &v4, 0LL);
  return v4;
}
