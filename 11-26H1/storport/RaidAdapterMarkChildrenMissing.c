/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x1400642F0
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x140037AC0 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x140057E90 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, (__int64 (__fastcall *)(_QWORD *))RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, (__int64 (__fastcall *)(_QWORD *))RaUnitAdapterSurpriseRemove);
}
