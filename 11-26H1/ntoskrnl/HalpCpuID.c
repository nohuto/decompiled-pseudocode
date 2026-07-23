/*
 * XREFs of HalpCpuID @ 0x1404D09F0
 * Callers:
 *     HalpGetProcessorBrandString @ 0x140788864 (HalpGetProcessorBrandString.c)
 *     HalpMcaSetFeatureFlags @ 0x140BF0844 (HalpMcaSetFeatureFlags.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpCpuID(unsigned int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = _RAX;
  result = a5;
  *a3 = _RBX;
  *a4 = _RCX;
  *a5 = _RDX;
  return result;
}
