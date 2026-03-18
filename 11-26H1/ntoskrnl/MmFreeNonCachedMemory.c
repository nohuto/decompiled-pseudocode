/*
 * XREFs of MmFreeNonCachedMemory @ 0x140B685F0
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x140666D10 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x14028B2D0 (MiMakeDemandZeroPte.c)
 *     MmFreePagesFromMdl @ 0x1403454A0 (MmFreePagesFromMdl.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  struct _MDL *v2; // rbx
  unsigned __int64 DemandZeroPte; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // rdx

  v2 = *(struct _MDL **)(48 * ((*(_QWORD *)MiGetPteAddress((unsigned __int64)BaseAddress) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  DemandZeroPte = MiMakeDemandZeroPte(4);
  *(_QWORD *)(v5 + 8 * v4 + 16) = DemandZeroPte;
  MiReleasePtes((__int64)&unk_140E34A40, v7, (v6 >> 12) + ((v6 & 0xFFF) != 0));
  MmFreePagesFromMdl(v2);
  ExFreePoolWithTag(v2, 0);
}
