/*
 * XREFs of SmpGetVolumeDiskNumber @ 0x14000E708
 * Callers:
 *     SmpCreateVolumeDescriptor @ 0x1400102D4 (SmpCreateVolumeDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpGetVolumeDiskNumber(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+50h] [rbp-48h] BYREF
  __int128 v5; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v4 = 0LL;
  result = NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v4, 0x560000u, 0LL, 0, &v5, 0x20u);
  if ( result >= 0 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      *a2 = DWORD2(v5);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
