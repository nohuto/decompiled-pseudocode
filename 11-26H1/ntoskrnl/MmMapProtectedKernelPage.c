/*
 * XREFs of MmMapProtectedKernelPage @ 0x140B48118
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
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
