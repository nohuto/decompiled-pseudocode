/*
 * XREFs of IpmiLibpGetTimeout @ 0x14071D8AC
 * Callers:
 *     IpmiLibpKcsRequestAndReceive @ 0x14071DC74 (IpmiLibpKcsRequestAndReceive.c)
 *     IpmiLibpKcsSpinRegister @ 0x14071DF0C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

LONGLONG __fastcall IpmiLibpGetTimeout(__int64 a1, unsigned int a2)
{
  LARGE_INTEGER v3; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return v3.QuadPart + PerformanceFrequency.QuadPart / 1000000 * a2;
}
