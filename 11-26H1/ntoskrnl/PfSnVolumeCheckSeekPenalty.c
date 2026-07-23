/*
 * XREFs of PfSnVolumeCheckSeekPenalty @ 0x140AF3568
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140983B38 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 *     ZwResetEvent @ 0x14072B0C0 (ZwResetEvent.c)
 */

__int64 __fastcall PfSnVolumeCheckSeekPenalty(HANDLE *a1, void *a2)
{
  unsigned int v4; // edi
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  int InputBuffer; // [rsp+60h] [rbp-38h] BYREF
  __int64 v9; // [rsp+64h] [rbp-34h]
  __int64 OutputBuffer; // [rsp+70h] [rbp-28h] BYREF
  int v11; // [rsp+78h] [rbp-20h]

  v9 = 0LL;
  InputBuffer = 7;
  OutputBuffer = 0LL;
  v11 = 0;
  v4 = 1;
  IoStatusBlock = 0LL;
  ZwResetEvent(a2, 0LL);
  Status = ZwDeviceIoControlFile(*a1, a2, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &OutputBuffer, 0xCu);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(a2, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    return (_BYTE)v11 != 0;
  return v4;
}
