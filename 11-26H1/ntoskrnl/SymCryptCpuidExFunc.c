/*
 * XREFs of SymCryptCpuidExFunc @ 0x1405E7ED0
 * Callers:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1405586BC (SymCryptDetectCpuFeaturesByCpuid.c)
 * Callees:
 *     SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater @ 0x140555718 (SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater.c)
 */

__int64 __fastcall SymCryptCpuidExFunc(_DWORD *a1, unsigned int a2)
{
  return SymCryptCpuidExFuncEnvWindowsKernelmodeWin8_1nLater(a1, a2);
}
