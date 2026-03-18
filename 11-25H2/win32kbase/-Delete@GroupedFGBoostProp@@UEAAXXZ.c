/*
 * XREFs of ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x14009E460
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x14009D764 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x14009D7A8 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 */

void __fastcall GroupedFGBoostProp::Delete(GroupedFGBoostProp *this)
{
  GroupedFGBoostProp::deRefAll(this);
  GroupedFGBoostProp::cleanUpAndReplace(this, 0, 0LL);
  GreDeleteFastMutex((char *)this);
}
