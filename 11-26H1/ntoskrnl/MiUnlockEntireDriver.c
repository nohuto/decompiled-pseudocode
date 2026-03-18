/*
 * XREFs of MiUnlockEntireDriver @ 0x14086D940
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     IoFreeMdl @ 0x14039F190 (IoFreeMdl.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 */

__int64 __fastcall MiUnlockEntireDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (unsigned __int64 *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  return MiUnlockDriverPages(a1);
}
