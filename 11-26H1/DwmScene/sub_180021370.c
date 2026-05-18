/*
 * XREFs of sub_180021370 @ 0x180021370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 */

DWORDLONG sub_180021370()
{
  _MEMORYSTATUSEX Buffer; // [rsp+20h] [rbp-58h] BYREF

  memset(&Buffer, 0, sizeof(Buffer));
  Buffer.dwLength = 64;
  GlobalMemoryStatusEx(&Buffer);
  return Buffer.ullTotalPhys;
}
