/*
 * XREFs of SymCryptInitEnvCommon @ 0x14051B408
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405184E8 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     SymCryptFatal @ 0x1405ADB00 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptInitEnvCommon(int a1)
{
  char v1; // al
  const char *v2; // rcx
  __int64 result; // rax

  if ( a1 != 6750216 )
    SymCryptFatal(1634756982LL);
  _InterlockedOr(&g_SymCryptFlags, 1u);
  v1 = aV1038120250530[0];
  v2 = "v103.8.1__2025-05-30T21:27:08+00:00_769e0a3_2025-05-30T22:24:34";
  while ( v1 )
    v1 = *++v2;
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
