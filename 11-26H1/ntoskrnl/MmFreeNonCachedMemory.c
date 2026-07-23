/*
 * XREFs of MmFreeNonCachedMemory @ 0x140B6B580
 * Callers:
 *     DifMmFreeNonCachedMemoryWrapper @ 0x14066A8F0 (DifMmFreeNonCachedMemoryWrapper.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MmFreePagesFromMdl @ 0x140347520 (MmFreePagesFromMdl.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  MiReleasePtes((__int64)&unk_140E34BC0, v7, (v6 >> 12) + ((v6 & 0xFFF) != 0));
  MmFreePagesFromMdl(v2);
  ExFreePoolWithTag(v2, 0);
}
