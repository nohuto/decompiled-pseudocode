/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1400A70D4
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1400373E8 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x140062B8C (RaidAdapterInsertZombieUnit.c)
 */

void __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 504) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
