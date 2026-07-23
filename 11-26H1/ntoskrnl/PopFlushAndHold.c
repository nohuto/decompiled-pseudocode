/*
 * XREFs of PopFlushAndHold @ 0x140506AF0
 * Callers:
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1407280A0 (ZwDeviceIoControlFile.c)
 */

NTSTATUS __fastcall PopFlushAndHold(void *a1, struct _IO_STATUS_BLOCK *a2)
{
  _QWORD v3[2]; // [rsp+50h] [rbp-28h] BYREF
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  v3[0] = 0LL;
  v3[1] = 0LL;
  v4 = 1;
  v5 = -1;
  return ZwDeviceIoControlFile(a1, 0LL, 0LL, 0LL, a2, 0x53C000u, v3, 0x18u, 0LL, 0);
}
