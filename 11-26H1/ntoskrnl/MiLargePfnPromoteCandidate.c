/*
 * XREFs of MiLargePfnPromoteCandidate @ 0x1403D3470
 * Callers:
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403D1950 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 */

_BOOL8 __fastcall MiLargePfnPromoteCandidate(_WORD *a1, __int64 a2, int a3)
{
  return (*(_DWORD *)(a2 + 32) & 0x70000u) <= 0x10000
      && (*(_QWORD *)(a2 + 40) & 0x10000000000LL) != 0
      && ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FF) == *a1
      && (*(_DWORD *)(a2 + 32) & 0x40000000) == 0
      && (*(_QWORD *)(a2 + 40) & 0x20000000000LL) == 0
      && (unsigned int)MiGetPfnPageSizeIndex(a2) == a3;
}
