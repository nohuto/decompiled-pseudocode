/*
 * XREFs of KiCollectFullProcessName @ 0x1405EA494
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

char __fastcall KiCollectFullProcessName(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 1532);
  if ( (v1 & 0x1000) == 0 )
  {
    LOBYTE(v1) = MmIsAddressValidEx(*(_QWORD *)(a1 + 848));
    if ( (_BYTE)v1 )
      LOBYTE(v1) = IoAddTriageDumpDataBlock(
                     *(_QWORD *)(*(_QWORD *)(a1 + 848) + 8LL),
                     (PVOID)**(unsigned __int16 **)(a1 + 848));
  }
  return v1;
}
