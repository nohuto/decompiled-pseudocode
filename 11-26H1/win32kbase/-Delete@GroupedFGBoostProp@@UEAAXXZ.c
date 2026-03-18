/*
 * XREFs of ?Delete@GroupedFGBoostProp@@UEAAXXZ @ 0x1400DECC0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z @ 0x1400DE540 (-cleanUpAndReplace@GroupedFGBoostProp@@AEAAXKPEAPEAU_EPROCESS@@@Z.c)
 *     ?deRefAll@GroupedFGBoostProp@@AEAAXXZ @ 0x1400DE584 (-deRefAll@GroupedFGBoostProp@@AEAAXXZ.c)
 */

void __fastcall GroupedFGBoostProp::Delete(GroupedFGBoostProp *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  GroupedFGBoostProp::deRefAll(this);
  GroupedFGBoostProp::cleanUpAndReplace(this, 0LL, 0LL, v2);
  GreDeleteFastMutex((char *)this, v3, v4, v5);
}
