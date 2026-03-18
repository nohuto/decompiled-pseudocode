/*
 * XREFs of HalpHvCpuid @ 0x1404FFA1C
 * Callers:
 *     HalpInterruptGetIrtInfo @ 0x1407815A8 (HalpInterruptGetIrtInfo.c)
 *     HalpInitializeProfiling @ 0x140BED728 (HalpInitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpHvCpuid(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
