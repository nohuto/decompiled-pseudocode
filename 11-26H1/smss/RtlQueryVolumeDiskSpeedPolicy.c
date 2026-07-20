/*
 * XREFs of RtlQueryVolumeDiskSpeedPolicy @ 0x14000DFF4
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x14000FF10 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     NtDeviceIoControlFile_0 @ 0x14000EB90 (NtDeviceIoControlFile_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlQueryVolumeDiskSpeedPolicy(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+50h] [rbp-48h] BYREF
  int v5; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+64h] [rbp-34h]
  __int64 v7; // [rsp+70h] [rbp-28h] BYREF
  int v8; // [rsp+78h] [rbp-20h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v5 = 7;
  v4 = 0LL;
  result = NtDeviceIoControlFile_0(a1, 0LL, 0LL, 0LL, &v4, 0x2D1400u, &v5, 0xCu, &v7, 0xCu);
  if ( result >= 0 )
  {
    *a2 = (_BYTE)v8 != 0 ? 10 : 20;
    return 0;
  }
  if ( result == -1073741823 || result == -1073741808 )
  {
    *a2 = 10;
    return 0;
  }
  return result;
}
