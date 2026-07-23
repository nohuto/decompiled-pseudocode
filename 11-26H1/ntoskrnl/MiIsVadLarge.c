/*
 * XREFs of MiIsVadLarge @ 0x1403A8C30
 * Callers:
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiProcessVaRangesInfoClass @ 0x140B6E518 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x80000) == 0 )
    return *(_DWORD *)(a1 + 72) & 1;
  return (v1 & 0x200000) != 0 || (v1 & 0x60000u) >= 0x40000;
}
