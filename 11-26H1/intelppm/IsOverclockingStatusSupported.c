/*
 * XREFs of IsOverclockingStatusSupported @ 0x14002B444
 * Callers:
 *     GetHwDebugRegisters @ 0x14002B1D0 (GetHwDebugRegisters.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

bool IsOverclockingStatusSupported()
{
  char v0; // bl
  unsigned __int64 v1; // rax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = 0;
  v4 = 0LL;
  GetCpuIdInfo(0, &v3);
  if ( (unsigned int)v3 >= 7 )
  {
    GetCpuIdInfo(7u, &v4);
    if ( (HIDWORD(v4) & 0x20000000) != 0 )
    {
      v1 = __readmsr(0x10Au);
      return (v1 & 0x800000) != 0;
    }
  }
  return v0;
}
