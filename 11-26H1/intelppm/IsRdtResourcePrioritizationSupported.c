/*
 * XREFs of IsRdtResourcePrioritizationSupported @ 0x14002AFE8
 * Callers:
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x140010330 (GetCpuIdInfo.c)
 */

char __fastcall IsRdtResourcePrioritizationSupported(bool *a1)
{
  char v1; // bl
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF

  v1 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 )
    *a1 = 0;
  GetCpuIdInfo(0, &v9);
  if ( (unsigned int)v9 >= 0x10 )
  {
    GetCpuIdInfo(7u, &v10);
    if ( (WORD2(v10) & 0x8000) != 0 )
    {
      GetCpuIdInfo(0x10u, &v11);
      if ( (BYTE4(v11) & 0x40) != 0 )
      {
        _RAX = 16LL;
        __asm { cpuid }
        v1 = 1;
        if ( a1 )
          *a1 = (_RAX & 2) != 0;
      }
    }
  }
  return v1;
}
