/*
 * XREFs of MiVadPageTableChargeLevel @ 0x1404786D0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x1409C6018 (MiCommitPageTablesForVad.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140B23EB8 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiPageSizeToPteLevel @ 0x140478750 (MiPageSizeToPteLevel.c)
 *     MiGetAweVadPageSize @ 0x140B4ACB4 (MiGetAweVadPageSize.c)
 */

__int64 __fastcall MiVadPageTableChargeLevel(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // r8d
  int v3; // eax
  unsigned int v4; // eax
  __int64 AweVadPageSize; // rax

  v1 = *(unsigned int *)(a1 + 48);
  v2 = 1;
  v3 = *(_DWORD *)(a1 + 48);
  if ( (v3 & 0x80000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
      goto LABEL_4;
LABEL_8:
    if ( (v1 & 0x1C) == 0xC )
    {
      AweVadPageSize = MiGetAweVadPageSize(a1);
      return MiPageSizeToPteLevel(AweVadPageSize);
    }
    return 0LL;
  }
  if ( (v3 & 0x200000) == 0 && (v3 & 0x60000u) < 0x40000 )
    goto LABEL_8;
LABEL_4:
  v4 = MiVadPageIndices[(v1 >> 17) & 3];
  if ( v4 > 1 )
    return 0LL;
  if ( !v4 )
    return 2;
  return v2;
}
