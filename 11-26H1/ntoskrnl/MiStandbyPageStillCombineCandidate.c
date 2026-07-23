/*
 * XREFs of MiStandbyPageStillCombineCandidate @ 0x1404BF3B4
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 * Callees:
 *     MiStandbyPageContentsIntact @ 0x140708D64 (MiStandbyPageContentsIntact.c)
 */

_BOOL8 __fastcall MiStandbyPageStillCombineCandidate(__int64 a1, _WORD *a2, __int64 a3, int a4)
{
  return !(unsigned __int16)*(_DWORD *)(a1 + 32)
      && (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 1u
      && (unsigned int)MiStandbyPageContentsIntact(a1)
      && (*(_DWORD *)(a1 + 32) & 0x40000000) == 0
      && ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FF) == *a2
      && a3 == (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL)
      && ((*(_DWORD *)(a1 + 16) >> 5) & 0x1F) == a4;
}
