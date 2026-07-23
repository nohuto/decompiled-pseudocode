/*
 * XREFs of MiVadLeafPagesPrecharged @ 0x140470BA4
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadLeafPagesPrecharged(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x80000) != 0 )
  {
    if ( (v1 & 0x200000) != 0 || (v1 & 0x60000u) >= 0x40000 )
      return 1LL;
  }
  else if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
  {
    return 1LL;
  }
  return (*(_DWORD *)(a1 + 48) & 0x1C) == 12;
}
