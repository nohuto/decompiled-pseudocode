/*
 * XREFs of SymCryptInitEnvCommon @ 0x14055883C
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14055577C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 * Callees:
 *     SymCryptFatal @ 0x1405E7EE8 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptInitEnvCommon(int a1)
{
  char v1; // al
  const char *v2; // rcx
  __int64 result; // rax

  if ( a1 != 6750220 )
    SymCryptFatal(1634756982LL);
  _InterlockedOr(&g_SymCryptFlags, 1u);
  v1 = aV1031202026050[0];
  v2 = "v103.12.0__2026-05-07T00:16:03+00:00_0df2f18_2026-05-09T04:02:31";
  while ( v1 )
    v1 = *++v2;
  result = (unsigned int)~g_SymCryptCpuFeaturesNotPresent;
  g_SymCryptCpuFeaturesPresentCheck = ~g_SymCryptCpuFeaturesNotPresent;
  return result;
}
