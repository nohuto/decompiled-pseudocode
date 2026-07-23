/*
 * XREFs of HalpWheaNativeCpuid @ 0x140589B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HalpWheaNativeCpuid(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *result; // rax

  _RAX = a2;
  __asm { cpuid }
  *a3 = _RAX;
  *a4 = _RBX;
  *a5 = _RCX;
  result = a6;
  *a6 = _RDX;
  return result;
}
