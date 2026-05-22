/*
 * XREFs of ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x180098624
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x180020C3C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800221D0 (-IsEdition@@YA_N_K@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009BACC (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall GetRIMRawInputProviderSpecific(int a1)
{
  unsigned int v1; // edx
  unsigned __int8 v2; // bl
  __int64 v3; // rcx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
      return 2048;
  }
  else
  {
    v2 = IsEdition(253345LL);
    return (v2 != 0 ? 1065152 : 16512) | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v3) != 0 ? 0x2400 : 0);
  }
  return v1;
}
