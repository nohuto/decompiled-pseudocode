/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1400A709C
 * Callers:
 *     RaUnitCancelStopDeviceIrp @ 0x140188C5C (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1400350E8 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x140065694 (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 504) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), (_QWORD *)a1);
  }
}
