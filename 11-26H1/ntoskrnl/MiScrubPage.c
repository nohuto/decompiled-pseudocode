/*
 * XREFs of MiScrubPage @ 0x140408114
 * Callers:
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     RtlScrubMemory @ 0x140408284 (RtlScrubMemory.c)
 *     KeCopyPageNoOverride @ 0x140735430 (KeCopyPageNoOverride.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, char a5)
{
  unsigned int v5; // r14d
  __int64 v9; // r10
  unsigned __int64 UltraMapping; // rdi
  unsigned __int64 *v11; // r12
  __int64 v12; // rbx
  unsigned int v13; // r15d
  int ProtectionPfnCompatible; // r15d
  __int64 v16; // rdx
  int v17; // ebx

  v5 = -1;
  v9 = 1LL;
  if ( a4 )
  {
    UltraMapping = a4;
    v11 = 0LL;
  }
  else
  {
    ProtectionPfnCompatible = 4;
    if ( a3 )
    {
      v17 = 1;
    }
    else
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x220000000000LL);
      v17 = (*(_DWORD *)(v16 + 32) >> 22) & 3;
    }
    UltraMapping = MiGetUltraMapping(a1 + 144, 3uLL, v9, 2 * (a5 & 2u));
    v11 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v11 = MiMakeValidPte((unsigned __int64)v11, a2, ProtectionPfnCompatible | 0xA0000000);
    if ( v17 == 1 )
      v5 = 1;
  }
  if ( (a5 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 176);
    KeCopyPageNoOverride(v12, UltraMapping, v5);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = RtlScrubMemory((PVOID)UltraMapping);
  if ( v12 )
    KeCopyPageNoOverride(UltraMapping, v12, v5);
  if ( !a4 )
    *v11 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  ++*(_QWORD *)(a1 + 184);
  return v13;
}
