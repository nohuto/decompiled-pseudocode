/*
 * XREFs of MmMapProtectedKernelPage @ 0x140B460E8
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmMapProtectedKernelPage(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rbx
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  result = MiMakeValidPte((unsigned __int64)PteAddress, v2, 536870913);
  *PteAddress = result;
  return result;
}
