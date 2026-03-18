/*
 * XREFs of SymCryptInitEnvCommon @ 0x1405563AC
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     SymCryptFatal @ 0x1405E5578 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptInitEnvCommon(int a1)
{
  char v1; // al
  const char *v2; // rcx
  __int64 result; // rax

  if ( a1 != 6750217 )
    SymCryptFatal(1634756982LL);
  _InterlockedOr(&g_SymCryptFlags, 1u);
  v1 = aV1039120250725[0];
  v2 = "v103.9.1__2025-07-25T01:19:34+00:00_ac2c15c_2025-07-25T19:54:35";
  while ( v1 )
    v1 = *++v2;
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
