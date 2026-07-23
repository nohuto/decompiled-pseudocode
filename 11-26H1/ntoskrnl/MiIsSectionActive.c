/*
 * XREFs of MiIsSectionActive @ 0x1405095C4
 * Callers:
 *     MmIsFileSectionActive @ 0x1404C1FB0 (MmIsFileSectionActive.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSectionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 3) != 0
      || *(_QWORD *)(a1 + 112) > 1uLL && ((*(_DWORD *)(a1 + 56) & 0x20) != 0 || (*(_DWORD *)(a1 + 56) & 8) == 0)
      || *(_QWORD *)(a1 + 48);
}
