/*
 * XREFs of SymCryptCpuidExFunc @ 0x1405E5560
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14055622C (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x140553288 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptCpuidExFunc(_DWORD *a1, unsigned int a2)
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(a1, a2);
}
