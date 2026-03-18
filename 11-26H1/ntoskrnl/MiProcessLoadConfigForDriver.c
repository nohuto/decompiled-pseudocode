/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140B0594C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B059BC (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B05B58 (MiProcessKernelCfgImageLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x140B05D40 (LdrInitSecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // r8

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
        v6 = (unsigned __int64)(unsigned int)ExGenRandom(0, v5) << 32;
        v8 = ExGenRandom(0, v7);
        LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v9, v6 | v8);
      }
      return 0LL;
    }
  }
  return result;
}
