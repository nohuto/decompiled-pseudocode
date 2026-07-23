/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140B079E0
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x140B07DD4 (LdrInitSecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( _bittest16((const signed __int16 *)(a1 + 110), 9u) )
    return 0LL;
  result = MiProcessKernelCfgImageLoadConfig();
  if ( (int)result >= 0 )
  {
    result = MiProcessKernelUmaImageLoadConfig(a1);
    if ( (int)result >= 0 )
    {
      if ( a2 )
      {
        ExGenRandom(0, v5);
        ExGenRandom(0, v6);
        LdrInitSecurityCookie(*(PVOID *)(a1 + 48));
      }
      return 0LL;
    }
  }
  return result;
}
